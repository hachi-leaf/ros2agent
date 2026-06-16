// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from command_executor:srv/ExecuteCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "command_executor/srv/execute_command.hpp"


#ifndef COMMAND_EXECUTOR__SRV__DETAIL__EXECUTE_COMMAND__TRAITS_HPP_
#define COMMAND_EXECUTOR__SRV__DETAIL__EXECUTE_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "command_executor/srv/detail/execute_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace command_executor
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExecuteCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteCommand_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace command_executor

namespace rosidl_generator_traits
{

[[deprecated("use command_executor::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const command_executor::srv::ExecuteCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  command_executor::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use command_executor::srv::to_yaml() instead")]]
inline std::string to_yaml(const command_executor::srv::ExecuteCommand_Request & msg)
{
  return command_executor::srv::to_yaml(msg);
}

template<>
inline const char * data_type<command_executor::srv::ExecuteCommand_Request>()
{
  return "command_executor::srv::ExecuteCommand_Request";
}

template<>
inline const char * name<command_executor::srv::ExecuteCommand_Request>()
{
  return "command_executor/srv/ExecuteCommand_Request";
}

template<>
struct has_fixed_size<command_executor::srv::ExecuteCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<command_executor::srv::ExecuteCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<command_executor::srv::ExecuteCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace command_executor
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExecuteCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: exit_code
  {
    out << "exit_code: ";
    rosidl_generator_traits::value_to_yaml(msg.exit_code, out);
    out << ", ";
  }

  // member: output
  {
    out << "output: ";
    rosidl_generator_traits::value_to_yaml(msg.output, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: exit_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exit_code: ";
    rosidl_generator_traits::value_to_yaml(msg.exit_code, out);
    out << "\n";
  }

  // member: output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output: ";
    rosidl_generator_traits::value_to_yaml(msg.output, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteCommand_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace command_executor

namespace rosidl_generator_traits
{

[[deprecated("use command_executor::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const command_executor::srv::ExecuteCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  command_executor::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use command_executor::srv::to_yaml() instead")]]
inline std::string to_yaml(const command_executor::srv::ExecuteCommand_Response & msg)
{
  return command_executor::srv::to_yaml(msg);
}

template<>
inline const char * data_type<command_executor::srv::ExecuteCommand_Response>()
{
  return "command_executor::srv::ExecuteCommand_Response";
}

template<>
inline const char * name<command_executor::srv::ExecuteCommand_Response>()
{
  return "command_executor/srv/ExecuteCommand_Response";
}

template<>
struct has_fixed_size<command_executor::srv::ExecuteCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<command_executor::srv::ExecuteCommand_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<command_executor::srv::ExecuteCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace command_executor
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExecuteCommand_Event & msg,
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
  const ExecuteCommand_Event & msg,
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

inline std::string to_yaml(const ExecuteCommand_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace command_executor

namespace rosidl_generator_traits
{

[[deprecated("use command_executor::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const command_executor::srv::ExecuteCommand_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  command_executor::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use command_executor::srv::to_yaml() instead")]]
inline std::string to_yaml(const command_executor::srv::ExecuteCommand_Event & msg)
{
  return command_executor::srv::to_yaml(msg);
}

template<>
inline const char * data_type<command_executor::srv::ExecuteCommand_Event>()
{
  return "command_executor::srv::ExecuteCommand_Event";
}

template<>
inline const char * name<command_executor::srv::ExecuteCommand_Event>()
{
  return "command_executor/srv/ExecuteCommand_Event";
}

template<>
struct has_fixed_size<command_executor::srv::ExecuteCommand_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<command_executor::srv::ExecuteCommand_Event>
  : std::integral_constant<bool, has_bounded_size<command_executor::srv::ExecuteCommand_Request>::value && has_bounded_size<command_executor::srv::ExecuteCommand_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<command_executor::srv::ExecuteCommand_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<command_executor::srv::ExecuteCommand>()
{
  return "command_executor::srv::ExecuteCommand";
}

template<>
inline const char * name<command_executor::srv::ExecuteCommand>()
{
  return "command_executor/srv/ExecuteCommand";
}

template<>
struct has_fixed_size<command_executor::srv::ExecuteCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<command_executor::srv::ExecuteCommand_Request>::value &&
    has_fixed_size<command_executor::srv::ExecuteCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<command_executor::srv::ExecuteCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<command_executor::srv::ExecuteCommand_Request>::value &&
    has_bounded_size<command_executor::srv::ExecuteCommand_Response>::value
  >
{
};

template<>
struct is_service<command_executor::srv::ExecuteCommand>
  : std::true_type
{
};

template<>
struct is_service_request<command_executor::srv::ExecuteCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<command_executor::srv::ExecuteCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COMMAND_EXECUTOR__SRV__DETAIL__EXECUTE_COMMAND__TRAITS_HPP_
