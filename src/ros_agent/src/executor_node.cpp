#include <cstdio>
#include <memory>
#include <string>
#include <array>

#include "rclcpp/rclcpp.hpp"
#include "ros_agent/srv/execute_command.hpp"

using ExecuteCommand = ros_agent::srv::ExecuteCommand;

class ExecutorNode : public rclcpp::Node {
public:
  ExecutorNode() : Node("executor_node") {
    service_ = this->create_service<ExecuteCommand>(
      "execute_command",
      std::bind(&ExecutorNode::handle, this, std::placeholders::_1, std::placeholders::_2));
    RCLCPP_INFO(get_logger(), "Command executor service ready");
  }

private:
  rclcpp::Service<ExecuteCommand>::SharedPtr service_;

  void handle(const std::shared_ptr<ExecuteCommand::Request> req,
              std::shared_ptr<ExecuteCommand::Response> res) {
    RCLCPP_INFO(get_logger(), "Executing: %s", req->command.c_str());

    std::string cmd = req->command + " 2>&1";
    std::array<char, 128> buf;
    std::string output;
    FILE* pipe = popen(cmd.c_str(), "r");
    if (!pipe) {
      res->exit_code = -1;
      res->output = "popen failed";
      return;
    }
    while (fgets(buf.data(), buf.size(), pipe)) {
      output += buf.data();
    }
    int status = pclose(pipe);
    res->exit_code = (status == -1) ? -1 : WEXITSTATUS(status);
    res->output = output;
  }
};

int main(int argc, char* argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ExecutorNode>());
  rclcpp::shutdown();
  return 0;
}