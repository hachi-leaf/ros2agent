#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <thread>
#include <unordered_map>
#include <vector>
#include <atomic>
#include <mutex>
#include <cmath>
#include <sstream>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "ros_agent/action/chat.hpp"
#include "ros_agent/msg/chat_message.hpp"
#include "ros_agent/msg/content_part.hpp"

#include <curl/curl.h>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using Chat = ros_agent::action::Chat;
using GoalHandleChat = rclcpp_action::ServerGoalHandle<Chat>;
using namespace std::chrono_literals;

struct WriteContext {
  std::string buffer;
  std::shared_ptr<GoalHandleChat> goal_handle;
  std::string accumulated;
  std::string reasoning_accumulated;
  std::atomic<bool> cancel_flag{false};
  std::atomic<int> prompt_tokens{0};
  std::atomic<int> completion_tokens{0};
  std::atomic<int> total_tokens{0};
  bool is_stream;
  int chunk_count{0};
  int feedback_count{0};  // 记录发布了多少次反馈
};

static std::mutex cancel_mutex;
static std::unordered_map<std::shared_ptr<GoalHandleChat>, std::shared_ptr<WriteContext>> active_contexts;

class LLMChatNode : public rclcpp::Node {
public:
  LLMChatNode() : Node("llm_chat_node") {
    declare_parameter("model_url", "http://localhost:8000/v1");
    declare_parameter("api_key", "sk-xxxxx");
    declare_parameter("model_name", "gpt-3.5-turbo");
    declare_parameter("default_max_context_tokens", 0);
    declare_parameter("default_truncation_strategy", "drop_oldest");
    declare_parameter("default_reasoning_effort", "");

    model_url_ = get_parameter("model_url").as_string();
    api_key_ = get_parameter("api_key").as_string();
    model_name_ = get_parameter("model_name").as_string();
    default_max_context_tokens_ = get_parameter("default_max_context_tokens").as_int();
    default_truncation_strategy_ = get_parameter("default_truncation_strategy").as_string();
    default_reasoning_effort_ = get_parameter("default_reasoning_effort").as_string();

    while (!model_url_.empty() && model_url_.back() == '/') {
      model_url_.pop_back();
    }

    action_server_ = rclcpp_action::create_server<Chat>(
      this,
      "llm_chat",
      std::bind(&LLMChatNode::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
      std::bind(&LLMChatNode::handle_cancel, this, std::placeholders::_1),
      std::bind(&LLMChatNode::handle_accepted, this, std::placeholders::_1));

    RCLCPP_INFO(get_logger(), "LLM Chat Node started. Model: %s", model_name_.c_str());
  }

private:
  rclcpp_action::Server<Chat>::SharedPtr action_server_;
  std::string model_url_;
  std::string api_key_;
  std::string model_name_;
  int default_max_context_tokens_;
  std::string default_truncation_strategy_;
  std::string default_reasoning_effort_;

  static int estimate_tokens(const std::string& text) {
    if (text.empty()) return 0;
    return std::max(1, static_cast<int>(std::ceil(text.size() / 3.5)));
  }

  std::vector<ros_agent::msg::ChatMessage> apply_truncation(
      const std::vector<ros_agent::msg::ChatMessage>& messages,
      int max_tokens,
      const std::string& strategy) {
    if (max_tokens <= 0 || messages.empty()) return messages;

    auto count_tokens = [&](const std::vector<ros_agent::msg::ChatMessage>& msgs) -> int {
      int total = 0;
      for (const auto& msg : msgs) {
        for (const auto& part : msg.parts) {
          total += estimate_tokens(part.text) + estimate_tokens(part.image_url);
        }
      }
      return total;
    };

    int total = count_tokens(messages);
    if (total <= max_tokens) return messages;

    std::vector<ros_agent::msg::ChatMessage> result;

    if (strategy == "drop_oldest") {
      if (!messages.empty() && messages[0].role == "system") {
        result.push_back(messages[0]);
        int current = count_tokens(result);
        for (int i = messages.size() - 1; i > 0 && current < max_tokens; --i) {
          int msg_tokens = count_tokens({messages[i]});
          if (current + msg_tokens <= max_tokens) {
            result.insert(result.begin() + 1, messages[i]);
            current += msg_tokens;
          } else {
            break;
          }
        }
      } else {
        int current = 0;
        for (int i = messages.size() - 1; i >= 0 && current < max_tokens; --i) {
          int msg_tokens = count_tokens({messages[i]});
          if (current + msg_tokens <= max_tokens) {
            result.insert(result.begin(), messages[i]);
            current += msg_tokens;
          } else {
            break;
          }
        }
      }
    } else {
      result = messages;
    }

    return result;
  }

  rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID &,
    std::shared_ptr<const Chat::Goal>) {
    RCLCPP_INFO(get_logger(), "Received new goal");
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(
    const std::shared_ptr<GoalHandleChat> goal_handle) {
    RCLCPP_INFO(get_logger(), "Cancel requested");
    std::lock_guard<std::mutex> lock(cancel_mutex);
    auto it = active_contexts.find(goal_handle);
    if (it != active_contexts.end()) {
      it->second->cancel_flag.store(true);
    }
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted(const std::shared_ptr<GoalHandleChat> goal_handle) {
    std::thread{std::bind(&LLMChatNode::execute, this, goal_handle)}.detach();
  }

  void execute(const std::shared_ptr<GoalHandleChat> goal_handle) {
    auto goal = goal_handle->get_goal();
    auto result = std::make_shared<Chat::Result>();

    int max_context_tokens = goal->max_context_tokens > 0 ? goal->max_context_tokens : default_max_context_tokens_;
    std::string truncation_strategy = goal->truncation_strategy.empty() ?
                                       default_truncation_strategy_ : goal->truncation_strategy;
    std::string reasoning_effort = goal->reasoning_effort.empty() ?
                                    default_reasoning_effort_ : goal->reasoning_effort;

    auto truncated_messages = apply_truncation(goal->messages, max_context_tokens, truncation_strategy);

    json messages_json = json::array();
    for (const auto &msg : truncated_messages) {
      if (msg.parts.empty()) {
        messages_json.push_back({{"role", msg.role}, {"content", ""}});
        continue;
      }
      if (msg.parts.size() == 1 && msg.parts[0].type == "text") {
        messages_json.push_back({{"role", msg.role}, {"content", msg.parts[0].text}});
      } else {
        json content_array = json::array();
        for (const auto &part : msg.parts) {
          if (part.type == "text") {
            content_array.push_back({{"type", "text"}, {"text", part.text}});
          } else if (part.type == "image_url") {
            content_array.push_back({
              {"type", "image_url"},
              {"image_url", {{"url", part.image_url}}}
            });
          }
        }
        messages_json.push_back({{"role", msg.role}, {"content", content_array}});
      }
    }

    json payload = {
      {"model", model_name_},
      {"messages", messages_json},
      {"stream", goal->stream}
    };

    if (!reasoning_effort.empty()) {
      payload["reasoning_effort"] = reasoning_effort;
    }

    // 移除 stream_options，某些 API 可能不支持
    // 如果确实需要 usage，请按需开启
    // if (goal->stream) {
    //   payload["stream_options"] = {{"include_usage", true}};
    // }

    std::string url = model_url_ + "/chat/completions";
    RCLCPP_INFO(get_logger(), "Sending request to: %s (stream=%d)", url.c_str(), goal->stream);
    RCLCPP_DEBUG(get_logger(), "Payload: %s", payload.dump().substr(0, 300).c_str());

    CURL *curl = curl_easy_init();
    if (!curl) {
      result->success = false;
      result->error_msg = "Failed to initialize CURL";
      goal_handle->abort(result);
      return;
    }

    struct curl_slist *headers = nullptr;
    headers = curl_slist_append(headers, "Content-Type: application/json");
    std::string auth_header = "Authorization: Bearer " + api_key_;
    headers = curl_slist_append(headers, auth_header.c_str());

    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
    std::string post_data = payload.dump();
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, post_data.c_str());

    auto ctx = std::make_shared<WriteContext>();
    ctx->goal_handle = goal_handle;
    ctx->is_stream = goal->stream;
    {
      std::lock_guard<std::mutex> lock(cancel_mutex);
      active_contexts[goal_handle] = ctx;
    }

    curl_easy_setopt(curl, CURLOPT_XFERINFOFUNCTION, XferInfoCallback);
    curl_easy_setopt(curl, CURLOPT_XFERINFODATA, ctx.get());
    curl_easy_setopt(curl, CURLOPT_NOPROGRESS, 0L);

    if (goal->stream) {
      curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
      curl_easy_setopt(curl, CURLOPT_WRITEDATA, ctx.get());

      RCLCPP_INFO(get_logger(), "Starting streaming request...");
      CURLcode res = curl_easy_perform(curl);
      long http_code = 0;
      curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &http_code);

      RCLCPP_INFO(get_logger(), "Stream finished. HTTP=%ld, CURLcode=%d, total_chunks=%d, feedbacks_sent=%d",
                  http_code, res, ctx->chunk_count, ctx->feedback_count);

      curl_slist_free_all(headers);
      curl_easy_cleanup(curl);

      {
        std::lock_guard<std::mutex> lock(cancel_mutex);
        active_contexts.erase(goal_handle);
      }

      if (res != CURLE_OK || http_code != 200) {
        result->success = false;
        if (ctx->cancel_flag.load()) {
          result->error_msg = "Request cancelled";
        } else {
          result->error_msg = "HTTP error " + std::to_string(http_code) + ": " + curl_easy_strerror(res);
        }
        RCLCPP_ERROR(get_logger(), "Stream failed: %s", result->error_msg.c_str());
        goal_handle->abort(result);
        return;
      }

      result->content = ctx->accumulated;
      result->reasoning_content = ctx->reasoning_accumulated;
      result->success = true;
      result->updated_messages = truncated_messages;
      ros_agent::msg::ChatMessage assistant_msg;
      assistant_msg.role = "assistant";
      ros_agent::msg::ContentPart text_part;
      text_part.type = "text";
      text_part.text = ctx->accumulated;
      assistant_msg.parts.push_back(text_part);
      result->updated_messages.push_back(assistant_msg);
      result->prompt_tokens = ctx->prompt_tokens.load();
      result->completion_tokens = ctx->completion_tokens.load();
      result->total_tokens = ctx->total_tokens.load();
      goal_handle->succeed(result);
      RCLCPP_INFO(get_logger(), "Stream goal succeeded. Accumulated length=%zu", ctx->accumulated.size());

    } else {
      // 非流式处理（保持不变）
      std::string response_string;
      curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, StringWriteCallback);
      curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response_string);

      CURLcode res = curl_easy_perform(curl);
      long http_code = 0;
      curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &http_code);

      curl_slist_free_all(headers);
      curl_easy_cleanup(curl);

      {
        std::lock_guard<std::mutex> lock(cancel_mutex);
        active_contexts.erase(goal_handle);
      }

      if (res != CURLE_OK || http_code != 200) {
        result->success = false;
        if (ctx->cancel_flag.load()) {
          result->error_msg = "Request cancelled";
        } else {
          result->error_msg = "HTTP error " + std::to_string(http_code) + ": " + curl_easy_strerror(res);
        }
        goal_handle->abort(result);
        return;
      }

      try {
        json response = json::parse(response_string);
        std::string content = response["choices"][0]["message"]["content"];
        std::string reasoning;
        if (response["choices"][0]["message"].contains("reasoning_content")) {
          reasoning = response["choices"][0]["message"]["reasoning_content"];
        }

        result->content = content;
        result->reasoning_content = reasoning;
        result->success = true;
        result->updated_messages = truncated_messages;
        ros_agent::msg::ChatMessage assistant_msg;
        assistant_msg.role = "assistant";
        ros_agent::msg::ContentPart text_part;
        text_part.type = "text";
        text_part.text = content;
        assistant_msg.parts.push_back(text_part);
        result->updated_messages.push_back(assistant_msg);

        if (response.contains("usage")) {
          result->prompt_tokens = response["usage"].value("prompt_tokens", 0);
          result->completion_tokens = response["usage"].value("completion_tokens", 0);
          result->total_tokens = response["usage"].value("total_tokens", 0);
        }
        goal_handle->succeed(result);
      } catch (const std::exception &e) {
        result->success = false;
        result->error_msg = "JSON parsing error: " + std::string(e.what());
        goal_handle->abort(result);
      }
    }
  }

  static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp) {
    size_t total = size * nmemb;
    auto *ctx = static_cast<WriteContext*>(userp);
    if (!ctx || ctx->cancel_flag.load()) return 0;

    std::string data(static_cast<char*>(contents), total);
    ctx->buffer += data;
    ctx->chunk_count++;

    size_t pos;
    while ((pos = ctx->buffer.find('\n')) != std::string::npos) {
      std::string line = ctx->buffer.substr(0, pos);
      ctx->buffer.erase(0, pos + 1);
      while (!line.empty() && (line.back() == '\r' || line.back() == ' ')) line.pop_back();
      if (line.empty()) continue;

      if (line.rfind("data: ", 0) == 0) {
        std::string data_str = line.substr(6);
        if (data_str == "[DONE]") {
          RCLCPP_INFO(rclcpp::get_logger("WriteCallback"), "Received [DONE]");
          break;
        }
        try {
          json j = json::parse(data_str);
          if (j.contains("choices") && !j["choices"].empty()) {
            auto &delta = j["choices"][0]["delta"];
            bool has_update = false;
            auto feedback = std::make_shared<Chat::Feedback>();

            // 安全提取 content：检查字段存在且不为 null
            if (delta.contains("content") && !delta["content"].is_null()) {
              std::string chunk = delta["content"].get<std::string>();
              ctx->accumulated += chunk;
              feedback->partial_content = chunk;
              has_update = true;
            }
            // 安全提取 reasoning_content
            if (delta.contains("reasoning_content") && !delta["reasoning_content"].is_null()) {
              std::string chunk = delta["reasoning_content"].get<std::string>();
              ctx->reasoning_accumulated += chunk;
              feedback->partial_reasoning = chunk;
              has_update = true;
            }
            if (has_update) {
              ctx->goal_handle->publish_feedback(feedback);
              ctx->feedback_count++;
            }
          }
          // 提取 usage（如果存在）
          if (j.contains("usage")) {
            ctx->prompt_tokens.store(j["usage"].value("prompt_tokens", 0));
            ctx->completion_tokens.store(j["usage"].value("completion_tokens", 0));
            ctx->total_tokens.store(j["usage"].value("total_tokens", 0));
          }
        } catch (const std::exception &e) {
          RCLCPP_WARN(rclcpp::get_logger("WriteCallback"), "JSON parse error: %s", e.what());
        }
      }
    }
    return total;
  }

  static int XferInfoCallback(void *clientp, curl_off_t, curl_off_t, curl_off_t, curl_off_t) {
    auto *ctx = static_cast<WriteContext*>(clientp);
    if (ctx && ctx->cancel_flag.load()) return 1;
    return 0;
  }

  static size_t StringWriteCallback(void *contents, size_t size, size_t nmemb, void *userp) {
    auto *str = static_cast<std::string*>(userp);
    str->append(static_cast<char*>(contents), size * nmemb);
    return size * nmemb;
  }
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<LLMChatNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}