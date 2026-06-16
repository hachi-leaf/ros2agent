// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from llm_bridge_cpp:msg/ChatMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "llm_bridge_cpp/msg/chat_message.h"


#ifndef LLM_BRIDGE_CPP__MSG__DETAIL__CHAT_MESSAGE__STRUCT_H_
#define LLM_BRIDGE_CPP__MSG__DETAIL__CHAT_MESSAGE__STRUCT_H_

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
#include "llm_bridge_cpp/msg/detail/content_part__struct.h"

/// Struct defined in msg/ChatMessage in the package llm_bridge_cpp.
typedef struct llm_bridge_cpp__msg__ChatMessage
{
  /// system / user / assistant
  rosidl_runtime_c__String role;
  /// 多模态内容列表
  llm_bridge_cpp__msg__ContentPart__Sequence parts;
} llm_bridge_cpp__msg__ChatMessage;

// Struct for a sequence of llm_bridge_cpp__msg__ChatMessage.
typedef struct llm_bridge_cpp__msg__ChatMessage__Sequence
{
  llm_bridge_cpp__msg__ChatMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_bridge_cpp__msg__ChatMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLM_BRIDGE_CPP__MSG__DETAIL__CHAT_MESSAGE__STRUCT_H_
