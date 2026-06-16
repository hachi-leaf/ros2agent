// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from llm_bridge_cpp:msg/ChatMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "llm_bridge_cpp/msg/chat_message.h"


#ifndef LLM_BRIDGE_CPP__MSG__DETAIL__CHAT_MESSAGE__FUNCTIONS_H_
#define LLM_BRIDGE_CPP__MSG__DETAIL__CHAT_MESSAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "llm_bridge_cpp/msg/rosidl_generator_c__visibility_control.h"

#include "llm_bridge_cpp/msg/detail/chat_message__struct.h"

/// Initialize msg/ChatMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * llm_bridge_cpp__msg__ChatMessage
 * )) before or use
 * llm_bridge_cpp__msg__ChatMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_bridge_cpp
bool
llm_bridge_cpp__msg__ChatMessage__init(llm_bridge_cpp__msg__ChatMessage * msg);

/// Finalize msg/ChatMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_bridge_cpp
void
llm_bridge_cpp__msg__ChatMessage__fini(llm_bridge_cpp__msg__ChatMessage * msg);

/// Create msg/ChatMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * llm_bridge_cpp__msg__ChatMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_bridge_cpp
llm_bridge_cpp__msg__ChatMessage *
llm_bridge_cpp__msg__ChatMessage__create(void);

/// Destroy msg/ChatMessage message.
/**
 * It calls
 * llm_bridge_cpp__msg__ChatMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_bridge_cpp
void
llm_bridge_cpp__msg__ChatMessage__destroy(llm_bridge_cpp__msg__ChatMessage * msg);

/// Check for msg/ChatMessage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_bridge_cpp
bool
llm_bridge_cpp__msg__ChatMessage__are_equal(const llm_bridge_cpp__msg__ChatMessage * lhs, const llm_bridge_cpp__msg__ChatMessage * rhs);

/// Copy a msg/ChatMessage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_bridge_cpp
bool
llm_bridge_cpp__msg__ChatMessage__copy(
  const llm_bridge_cpp__msg__ChatMessage * input,
  llm_bridge_cpp__msg__ChatMessage * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_llm_bridge_cpp
const rosidl_type_hash_t *
llm_bridge_cpp__msg__ChatMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_llm_bridge_cpp
const rosidl_runtime_c__type_description__TypeDescription *
llm_bridge_cpp__msg__ChatMessage__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_llm_bridge_cpp
const rosidl_runtime_c__type_description__TypeSource *
llm_bridge_cpp__msg__ChatMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_llm_bridge_cpp
const rosidl_runtime_c__type_description__TypeSource__Sequence *
llm_bridge_cpp__msg__ChatMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/ChatMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * llm_bridge_cpp__msg__ChatMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_bridge_cpp
bool
llm_bridge_cpp__msg__ChatMessage__Sequence__init(llm_bridge_cpp__msg__ChatMessage__Sequence * array, size_t size);

/// Finalize array of msg/ChatMessage messages.
/**
 * It calls
 * llm_bridge_cpp__msg__ChatMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_bridge_cpp
void
llm_bridge_cpp__msg__ChatMessage__Sequence__fini(llm_bridge_cpp__msg__ChatMessage__Sequence * array);

/// Create array of msg/ChatMessage messages.
/**
 * It allocates the memory for the array and calls
 * llm_bridge_cpp__msg__ChatMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_bridge_cpp
llm_bridge_cpp__msg__ChatMessage__Sequence *
llm_bridge_cpp__msg__ChatMessage__Sequence__create(size_t size);

/// Destroy array of msg/ChatMessage messages.
/**
 * It calls
 * llm_bridge_cpp__msg__ChatMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_bridge_cpp
void
llm_bridge_cpp__msg__ChatMessage__Sequence__destroy(llm_bridge_cpp__msg__ChatMessage__Sequence * array);

/// Check for msg/ChatMessage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_bridge_cpp
bool
llm_bridge_cpp__msg__ChatMessage__Sequence__are_equal(const llm_bridge_cpp__msg__ChatMessage__Sequence * lhs, const llm_bridge_cpp__msg__ChatMessage__Sequence * rhs);

/// Copy an array of msg/ChatMessage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_bridge_cpp
bool
llm_bridge_cpp__msg__ChatMessage__Sequence__copy(
  const llm_bridge_cpp__msg__ChatMessage__Sequence * input,
  llm_bridge_cpp__msg__ChatMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LLM_BRIDGE_CPP__MSG__DETAIL__CHAT_MESSAGE__FUNCTIONS_H_
