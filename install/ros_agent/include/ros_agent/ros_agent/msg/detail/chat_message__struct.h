// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_agent:msg/ChatMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_agent/msg/chat_message.h"


#ifndef ROS_AGENT__MSG__DETAIL__CHAT_MESSAGE__STRUCT_H_
#define ROS_AGENT__MSG__DETAIL__CHAT_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'role'
#include "rosidl_runtime_c/string.h"
// Member 'parts'
#include "ros_agent/msg/detail/content_part__struct.h"

/// Struct defined in msg/ChatMessage in the package ros_agent.
typedef struct ros_agent__msg__ChatMessage
{
  rosidl_runtime_c__String role;
  ros_agent__msg__ContentPart__Sequence parts;
} ros_agent__msg__ChatMessage;

// Struct for a sequence of ros_agent__msg__ChatMessage.
typedef struct ros_agent__msg__ChatMessage__Sequence
{
  ros_agent__msg__ChatMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_agent__msg__ChatMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_AGENT__MSG__DETAIL__CHAT_MESSAGE__STRUCT_H_
