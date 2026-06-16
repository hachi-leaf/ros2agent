// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from llm_bridge:msg/ChatMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "llm_bridge/msg/chat_message.hpp"


#ifndef LLM_BRIDGE__MSG__DETAIL__CHAT_MESSAGE__TRAITS_HPP_
#define LLM_BRIDGE__MSG__DETAIL__CHAT_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "llm_bridge/msg/detail/chat_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'parts'
#include "llm_bridge/msg/detail/content_part__traits.hpp"

namespace llm_bridge
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChatMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: role
  {
    out << "role: ";
    rosidl_generator_traits::value_to_yaml(msg.role, out);
    out << ", ";
  }

  // member: parts
  {
    if (msg.parts.size() == 0) {
      out << "parts: []";
    } else {
      out << "parts: [";
      size_t pending_items = msg.parts.size();
      for (auto item : msg.parts) {
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
  const ChatMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: role
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "role: ";
    rosidl_generator_traits::value_to_yaml(msg.role, out);
    out << "\n";
  }

  // member: parts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.parts.size() == 0) {
      out << "parts: []\n";
    } else {
      out << "parts:\n";
      for (auto item : msg.parts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChatMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace llm_bridge

namespace rosidl_generator_traits
{

[[deprecated("use llm_bridge::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llm_bridge::msg::ChatMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  llm_bridge::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llm_bridge::msg::to_yaml() instead")]]
inline std::string to_yaml(const llm_bridge::msg::ChatMessage & msg)
{
  return llm_bridge::msg::to_yaml(msg);
}

template<>
inline const char * data_type<llm_bridge::msg::ChatMessage>()
{
  return "llm_bridge::msg::ChatMessage";
}

template<>
inline const char * name<llm_bridge::msg::ChatMessage>()
{
  return "llm_bridge/msg/ChatMessage";
}

template<>
struct has_fixed_size<llm_bridge::msg::ChatMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<llm_bridge::msg::ChatMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<llm_bridge::msg::ChatMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLM_BRIDGE__MSG__DETAIL__CHAT_MESSAGE__TRAITS_HPP_
