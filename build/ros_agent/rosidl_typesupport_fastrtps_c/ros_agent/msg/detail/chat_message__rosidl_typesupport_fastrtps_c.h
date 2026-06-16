// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from ros_agent:msg/ChatMessage.idl
// generated code does not contain a copyright notice
#ifndef ROS_AGENT__MSG__DETAIL__CHAT_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROS_AGENT__MSG__DETAIL__CHAT_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_agent/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_agent/msg/detail/chat_message__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_agent
bool cdr_serialize_ros_agent__msg__ChatMessage(
  const ros_agent__msg__ChatMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_agent
bool cdr_deserialize_ros_agent__msg__ChatMessage(
  eprosima::fastcdr::Cdr &,
  ros_agent__msg__ChatMessage * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_agent
size_t get_serialized_size_ros_agent__msg__ChatMessage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_agent
size_t max_serialized_size_ros_agent__msg__ChatMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_agent
bool cdr_serialize_key_ros_agent__msg__ChatMessage(
  const ros_agent__msg__ChatMessage * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_agent
size_t get_serialized_size_key_ros_agent__msg__ChatMessage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_agent
size_t max_serialized_size_key_ros_agent__msg__ChatMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_agent
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_agent, msg, ChatMessage)();

#ifdef __cplusplus
}
#endif

#endif  // ROS_AGENT__MSG__DETAIL__CHAT_MESSAGE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
