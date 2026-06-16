// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from llm_bridge:msg/ContentPart.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "llm_bridge/msg/content_part.hpp"


#ifndef LLM_BRIDGE__MSG__DETAIL__CONTENT_PART__TRAITS_HPP_
#define LLM_BRIDGE__MSG__DETAIL__CONTENT_PART__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "llm_bridge/msg/detail/content_part__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace llm_bridge
{

namespace msg
{

inline void to_flow_style_yaml(
  const ContentPart & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << ", ";
  }

  // member: image_url
  {
    out << "image_url: ";
    rosidl_generator_traits::value_to_yaml(msg.image_url, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ContentPart & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << "\n";
  }

  // member: image_url
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_url: ";
    rosidl_generator_traits::value_to_yaml(msg.image_url, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ContentPart & msg, bool use_flow_style = false)
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
  const llm_bridge::msg::ContentPart & msg,
  std::ostream & out, size_t indentation = 0)
{
  llm_bridge::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llm_bridge::msg::to_yaml() instead")]]
inline std::string to_yaml(const llm_bridge::msg::ContentPart & msg)
{
  return llm_bridge::msg::to_yaml(msg);
}

template<>
inline const char * data_type<llm_bridge::msg::ContentPart>()
{
  return "llm_bridge::msg::ContentPart";
}

template<>
inline const char * name<llm_bridge::msg::ContentPart>()
{
  return "llm_bridge/msg/ContentPart";
}

template<>
struct has_fixed_size<llm_bridge::msg::ContentPart>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<llm_bridge::msg::ContentPart>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<llm_bridge::msg::ContentPart>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLM_BRIDGE__MSG__DETAIL__CONTENT_PART__TRAITS_HPP_
