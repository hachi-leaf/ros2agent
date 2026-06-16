// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from llm_bridge:msg/ContentPart.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "llm_bridge/msg/content_part.h"


#ifndef LLM_BRIDGE__MSG__DETAIL__CONTENT_PART__STRUCT_H_
#define LLM_BRIDGE__MSG__DETAIL__CONTENT_PART__STRUCT_H_

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

/// Struct defined in msg/ContentPart in the package llm_bridge.
typedef struct llm_bridge__msg__ContentPart
{
  /// 可取 "text" 或 "image_url"
  rosidl_runtime_c__String type;
  /// type="text"时有效
  rosidl_runtime_c__String text;
  /// type="image_url"时有效
  rosidl_runtime_c__String image_url;
} llm_bridge__msg__ContentPart;

// Struct for a sequence of llm_bridge__msg__ContentPart.
typedef struct llm_bridge__msg__ContentPart__Sequence
{
  llm_bridge__msg__ContentPart * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_bridge__msg__ContentPart__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLM_BRIDGE__MSG__DETAIL__CONTENT_PART__STRUCT_H_
