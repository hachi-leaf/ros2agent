// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from llm_bridge:action/Chat.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "llm_bridge/action/chat.hpp"


#ifndef LLM_BRIDGE__ACTION__DETAIL__CHAT__TRAITS_HPP_
#define LLM_BRIDGE__ACTION__DETAIL__CHAT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "llm_bridge/action/detail/chat__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'messages'
#include "llm_bridge/msg/detail/chat_message__traits.hpp"

namespace llm_bridge
{

namespace action
{

inline void to_flow_style_yaml(
  const Chat_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: messages
  {
    if (msg.messages.size() == 0) {
      out << "messages: []";
    } else {
      out << "messages: [";
      size_t pending_items = msg.messages.size();
      for (auto item : msg.messages) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: stream
  {
    out << "stream: ";
    rosidl_generator_traits::value_to_yaml(msg.stream, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Chat_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: messages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.messages.size() == 0) {
      out << "messages: []\n";
    } else {
      out << "messages:\n";
      for (auto item : msg.messages) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: stream
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stream: ";
    rosidl_generator_traits::value_to_yaml(msg.stream, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Chat_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace llm_bridge

namespace rosidl_generator_traits
{

[[deprecated("use llm_bridge::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llm_bridge::action::Chat_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  llm_bridge::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llm_bridge::action::to_yaml() instead")]]
inline std::string to_yaml(const llm_bridge::action::Chat_Goal & msg)
{
  return llm_bridge::action::to_yaml(msg);
}

template<>
inline const char * data_type<llm_bridge::action::Chat_Goal>()
{
  return "llm_bridge::action::Chat_Goal";
}

template<>
inline const char * name<llm_bridge::action::Chat_Goal>()
{
  return "llm_bridge/action/Chat_Goal";
}

template<>
struct has_fixed_size<llm_bridge::action::Chat_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<llm_bridge::action::Chat_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<llm_bridge::action::Chat_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'updated_messages'
// already included above
// #include "llm_bridge/msg/detail/chat_message__traits.hpp"

namespace llm_bridge
{

namespace action
{

inline void to_flow_style_yaml(
  const Chat_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: content
  {
    out << "content: ";
    rosidl_generator_traits::value_to_yaml(msg.content, out);
    out << ", ";
  }

  // member: updated_messages
  {
    if (msg.updated_messages.size() == 0) {
      out << "updated_messages: []";
    } else {
      out << "updated_messages: [";
      size_t pending_items = msg.updated_messages.size();
      for (auto item : msg.updated_messages) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: error_msg
  {
    out << "error_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.error_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Chat_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: content
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "content: ";
    rosidl_generator_traits::value_to_yaml(msg.content, out);
    out << "\n";
  }

  // member: updated_messages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.updated_messages.size() == 0) {
      out << "updated_messages: []\n";
    } else {
      out << "updated_messages:\n";
      for (auto item : msg.updated_messages) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: error_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.error_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Chat_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace llm_bridge

namespace rosidl_generator_traits
{

[[deprecated("use llm_bridge::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llm_bridge::action::Chat_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  llm_bridge::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llm_bridge::action::to_yaml() instead")]]
inline std::string to_yaml(const llm_bridge::action::Chat_Result & msg)
{
  return llm_bridge::action::to_yaml(msg);
}

template<>
inline const char * data_type<llm_bridge::action::Chat_Result>()
{
  return "llm_bridge::action::Chat_Result";
}

template<>
inline const char * name<llm_bridge::action::Chat_Result>()
{
  return "llm_bridge/action/Chat_Result";
}

template<>
struct has_fixed_size<llm_bridge::action::Chat_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<llm_bridge::action::Chat_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<llm_bridge::action::Chat_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace llm_bridge
{

namespace action
{

inline void to_flow_style_yaml(
  const Chat_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: partial_content
  {
    out << "partial_content: ";
    rosidl_generator_traits::value_to_yaml(msg.partial_content, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Chat_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: partial_content
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "partial_content: ";
    rosidl_generator_traits::value_to_yaml(msg.partial_content, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Chat_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace llm_bridge

namespace rosidl_generator_traits
{

[[deprecated("use llm_bridge::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llm_bridge::action::Chat_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  llm_bridge::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llm_bridge::action::to_yaml() instead")]]
inline std::string to_yaml(const llm_bridge::action::Chat_Feedback & msg)
{
  return llm_bridge::action::to_yaml(msg);
}

template<>
inline const char * data_type<llm_bridge::action::Chat_Feedback>()
{
  return "llm_bridge::action::Chat_Feedback";
}

template<>
inline const char * name<llm_bridge::action::Chat_Feedback>()
{
  return "llm_bridge/action/Chat_Feedback";
}

template<>
struct has_fixed_size<llm_bridge::action::Chat_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<llm_bridge::action::Chat_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<llm_bridge::action::Chat_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "llm_bridge/action/detail/chat__traits.hpp"

namespace llm_bridge
{

namespace action
{

inline void to_flow_style_yaml(
  const Chat_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Chat_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Chat_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace llm_bridge

namespace rosidl_generator_traits
{

[[deprecated("use llm_bridge::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llm_bridge::action::Chat_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  llm_bridge::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llm_bridge::action::to_yaml() instead")]]
inline std::string to_yaml(const llm_bridge::action::Chat_SendGoal_Request & msg)
{
  return llm_bridge::action::to_yaml(msg);
}

template<>
inline const char * data_type<llm_bridge::action::Chat_SendGoal_Request>()
{
  return "llm_bridge::action::Chat_SendGoal_Request";
}

template<>
inline const char * name<llm_bridge::action::Chat_SendGoal_Request>()
{
  return "llm_bridge/action/Chat_SendGoal_Request";
}

template<>
struct has_fixed_size<llm_bridge::action::Chat_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<llm_bridge::action::Chat_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<llm_bridge::action::Chat_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<llm_bridge::action::Chat_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<llm_bridge::action::Chat_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace llm_bridge
{

namespace action
{

inline void to_flow_style_yaml(
  const Chat_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Chat_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Chat_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace llm_bridge

namespace rosidl_generator_traits
{

[[deprecated("use llm_bridge::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llm_bridge::action::Chat_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  llm_bridge::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llm_bridge::action::to_yaml() instead")]]
inline std::string to_yaml(const llm_bridge::action::Chat_SendGoal_Response & msg)
{
  return llm_bridge::action::to_yaml(msg);
}

template<>
inline const char * data_type<llm_bridge::action::Chat_SendGoal_Response>()
{
  return "llm_bridge::action::Chat_SendGoal_Response";
}

template<>
inline const char * name<llm_bridge::action::Chat_SendGoal_Response>()
{
  return "llm_bridge/action/Chat_SendGoal_Response";
}

template<>
struct has_fixed_size<llm_bridge::action::Chat_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<llm_bridge::action::Chat_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<llm_bridge::action::Chat_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace llm_bridge
{

namespace action
{

inline void to_flow_style_yaml(
  const Chat_SendGoal_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Chat_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Chat_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace llm_bridge

namespace rosidl_generator_traits
{

[[deprecated("use llm_bridge::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llm_bridge::action::Chat_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  llm_bridge::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llm_bridge::action::to_yaml() instead")]]
inline std::string to_yaml(const llm_bridge::action::Chat_SendGoal_Event & msg)
{
  return llm_bridge::action::to_yaml(msg);
}

template<>
inline const char * data_type<llm_bridge::action::Chat_SendGoal_Event>()
{
  return "llm_bridge::action::Chat_SendGoal_Event";
}

template<>
inline const char * name<llm_bridge::action::Chat_SendGoal_Event>()
{
  return "llm_bridge/action/Chat_SendGoal_Event";
}

template<>
struct has_fixed_size<llm_bridge::action::Chat_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<llm_bridge::action::Chat_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<llm_bridge::action::Chat_SendGoal_Request>::value && has_bounded_size<llm_bridge::action::Chat_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<llm_bridge::action::Chat_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<llm_bridge::action::Chat_SendGoal>()
{
  return "llm_bridge::action::Chat_SendGoal";
}

template<>
inline const char * name<llm_bridge::action::Chat_SendGoal>()
{
  return "llm_bridge/action/Chat_SendGoal";
}

template<>
struct has_fixed_size<llm_bridge::action::Chat_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<llm_bridge::action::Chat_SendGoal_Request>::value &&
    has_fixed_size<llm_bridge::action::Chat_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<llm_bridge::action::Chat_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<llm_bridge::action::Chat_SendGoal_Request>::value &&
    has_bounded_size<llm_bridge::action::Chat_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<llm_bridge::action::Chat_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<llm_bridge::action::Chat_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<llm_bridge::action::Chat_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace llm_bridge
{

namespace action
{

inline void to_flow_style_yaml(
  const Chat_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Chat_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Chat_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace llm_bridge

namespace rosidl_generator_traits
{

[[deprecated("use llm_bridge::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llm_bridge::action::Chat_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  llm_bridge::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llm_bridge::action::to_yaml() instead")]]
inline std::string to_yaml(const llm_bridge::action::Chat_GetResult_Request & msg)
{
  return llm_bridge::action::to_yaml(msg);
}

template<>
inline const char * data_type<llm_bridge::action::Chat_GetResult_Request>()
{
  return "llm_bridge::action::Chat_GetResult_Request";
}

template<>
inline const char * name<llm_bridge::action::Chat_GetResult_Request>()
{
  return "llm_bridge/action/Chat_GetResult_Request";
}

template<>
struct has_fixed_size<llm_bridge::action::Chat_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<llm_bridge::action::Chat_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<llm_bridge::action::Chat_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "llm_bridge/action/detail/chat__traits.hpp"

namespace llm_bridge
{

namespace action
{

inline void to_flow_style_yaml(
  const Chat_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Chat_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Chat_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace llm_bridge

namespace rosidl_generator_traits
{

[[deprecated("use llm_bridge::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llm_bridge::action::Chat_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  llm_bridge::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llm_bridge::action::to_yaml() instead")]]
inline std::string to_yaml(const llm_bridge::action::Chat_GetResult_Response & msg)
{
  return llm_bridge::action::to_yaml(msg);
}

template<>
inline const char * data_type<llm_bridge::action::Chat_GetResult_Response>()
{
  return "llm_bridge::action::Chat_GetResult_Response";
}

template<>
inline const char * name<llm_bridge::action::Chat_GetResult_Response>()
{
  return "llm_bridge/action/Chat_GetResult_Response";
}

template<>
struct has_fixed_size<llm_bridge::action::Chat_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<llm_bridge::action::Chat_Result>::value> {};

template<>
struct has_bounded_size<llm_bridge::action::Chat_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<llm_bridge::action::Chat_Result>::value> {};

template<>
struct is_message<llm_bridge::action::Chat_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace llm_bridge
{

namespace action
{

inline void to_flow_style_yaml(
  const Chat_GetResult_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Chat_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Chat_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace llm_bridge

namespace rosidl_generator_traits
{

[[deprecated("use llm_bridge::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llm_bridge::action::Chat_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  llm_bridge::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llm_bridge::action::to_yaml() instead")]]
inline std::string to_yaml(const llm_bridge::action::Chat_GetResult_Event & msg)
{
  return llm_bridge::action::to_yaml(msg);
}

template<>
inline const char * data_type<llm_bridge::action::Chat_GetResult_Event>()
{
  return "llm_bridge::action::Chat_GetResult_Event";
}

template<>
inline const char * name<llm_bridge::action::Chat_GetResult_Event>()
{
  return "llm_bridge/action/Chat_GetResult_Event";
}

template<>
struct has_fixed_size<llm_bridge::action::Chat_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<llm_bridge::action::Chat_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<llm_bridge::action::Chat_GetResult_Request>::value && has_bounded_size<llm_bridge::action::Chat_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<llm_bridge::action::Chat_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<llm_bridge::action::Chat_GetResult>()
{
  return "llm_bridge::action::Chat_GetResult";
}

template<>
inline const char * name<llm_bridge::action::Chat_GetResult>()
{
  return "llm_bridge/action/Chat_GetResult";
}

template<>
struct has_fixed_size<llm_bridge::action::Chat_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<llm_bridge::action::Chat_GetResult_Request>::value &&
    has_fixed_size<llm_bridge::action::Chat_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<llm_bridge::action::Chat_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<llm_bridge::action::Chat_GetResult_Request>::value &&
    has_bounded_size<llm_bridge::action::Chat_GetResult_Response>::value
  >
{
};

template<>
struct is_service<llm_bridge::action::Chat_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<llm_bridge::action::Chat_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<llm_bridge::action::Chat_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "llm_bridge/action/detail/chat__traits.hpp"

namespace llm_bridge
{

namespace action
{

inline void to_flow_style_yaml(
  const Chat_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Chat_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Chat_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace llm_bridge

namespace rosidl_generator_traits
{

[[deprecated("use llm_bridge::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llm_bridge::action::Chat_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  llm_bridge::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llm_bridge::action::to_yaml() instead")]]
inline std::string to_yaml(const llm_bridge::action::Chat_FeedbackMessage & msg)
{
  return llm_bridge::action::to_yaml(msg);
}

template<>
inline const char * data_type<llm_bridge::action::Chat_FeedbackMessage>()
{
  return "llm_bridge::action::Chat_FeedbackMessage";
}

template<>
inline const char * name<llm_bridge::action::Chat_FeedbackMessage>()
{
  return "llm_bridge/action/Chat_FeedbackMessage";
}

template<>
struct has_fixed_size<llm_bridge::action::Chat_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<llm_bridge::action::Chat_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<llm_bridge::action::Chat_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<llm_bridge::action::Chat_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<llm_bridge::action::Chat_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<llm_bridge::action::Chat>
  : std::true_type
{
};

template<>
struct is_action_goal<llm_bridge::action::Chat_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<llm_bridge::action::Chat_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<llm_bridge::action::Chat_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // LLM_BRIDGE__ACTION__DETAIL__CHAT__TRAITS_HPP_
