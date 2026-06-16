// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from llm_bridge:msg/ChatMessage.idl
// generated code does not contain a copyright notice
#ifndef LLM_BRIDGE__MSG__DETAIL__CHAT_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define LLM_BRIDGE__MSG__DETAIL__CHAT_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "llm_bridge/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "llm_bridge/msg/detail/chat_message__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_llm_bridge
bool cdr_serialize_llm_bridge__msg__ChatMessage(
  const llm_bridge__msg__ChatMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_llm_bridge
bool cdr_deserialize_llm_bridge__msg__ChatMessage(
  eprosima::fastcdr::Cdr &,
  llm_bridge__msg__ChatMessage * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_llm_bridge
size_t get_serialized_size_llm_bridge__msg__ChatMessage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_llm_bridge
size_t max_serialized_size_llm_bridge__msg__ChatMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_llm_bridge
bool cdr_serialize_key_llm_bridge__msg__ChatMessage(
  const llm_bridge__msg__ChatMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_llm_bridge
size_t get_serialized_size_key_llm_bridge__msg__ChatMessage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_llm_bridge
size_t max_serialized_size_key_llm_bridge__msg__ChatMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_llm_bridge
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, llm_bridge, msg, ChatMessage)();

#ifdef __cplusplus
}
#endif

#endif  // LLM_BRIDGE__MSG__DETAIL__CHAT_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
