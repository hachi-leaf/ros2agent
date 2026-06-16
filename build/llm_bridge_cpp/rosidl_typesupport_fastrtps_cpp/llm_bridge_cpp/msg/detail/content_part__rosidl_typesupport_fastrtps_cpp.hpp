// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from llm_bridge_cpp:msg/ContentPart.idl
// generated code does not contain a copyright notice

#ifndef LLM_BRIDGE_CPP__MSG__DETAIL__CONTENT_PART__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define LLM_BRIDGE_CPP__MSG__DETAIL__CONTENT_PART__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "llm_bridge_cpp/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "llm_bridge_cpp/msg/detail/content_part__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace llm_bridge_cpp
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llm_bridge_cpp
cdr_serialize(
  const llm_bridge_cpp::msg::ContentPart & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llm_bridge_cpp
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  llm_bridge_cpp::msg::ContentPart & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llm_bridge_cpp
get_serialized_size(
  const llm_bridge_cpp::msg::ContentPart & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llm_bridge_cpp
max_serialized_size_ContentPart(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llm_bridge_cpp
cdr_serialize_key(
  const llm_bridge_cpp::msg::ContentPart & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llm_bridge_cpp
get_serialized_size_key(
  const llm_bridge_cpp::msg::ContentPart & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llm_bridge_cpp
max_serialized_size_key_ContentPart(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace llm_bridge_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llm_bridge_cpp
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, llm_bridge_cpp, msg, ContentPart)();

#ifdef __cplusplus
}
#endif

#endif  // LLM_BRIDGE_CPP__MSG__DETAIL__CONTENT_PART__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
