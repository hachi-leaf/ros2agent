// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_agent:msg/ContentPart.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_agent/msg/content_part.h"


#ifndef ROS_AGENT__MSG__DETAIL__CONTENT_PART__STRUCT_H_
#define ROS_AGENT__MSG__DETAIL__CONTENT_PART__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'type'
// Member 'text'
// Member 'image_url'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ContentPart in the package ros_agent.
typedef struct ros_agent__msg__ContentPart
{
  /// "text" 或 "image_url"
  rosidl_runtime_c__String type;
  /// type="text" 时有效
  rosidl_runtime_c__String text;
  /// type="image_url" 时有效
  rosidl_runtime_c__String image_url;
} ros_agent__msg__ContentPart;

// Struct for a sequence of ros_agent__msg__ContentPart.
typedef struct ros_agent__msg__ContentPart__Sequence
{
  ros_agent__msg__ContentPart * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_agent__msg__ContentPart__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_AGENT__MSG__DETAIL__CONTENT_PART__STRUCT_H_
