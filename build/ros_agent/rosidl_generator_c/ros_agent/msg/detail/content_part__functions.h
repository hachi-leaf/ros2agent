// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros_agent:msg/ContentPart.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_agent/msg/content_part.h"


#ifndef ROS_AGENT__MSG__DETAIL__CONTENT_PART__FUNCTIONS_H_
#define ROS_AGENT__MSG__DETAIL__CONTENT_PART__FUNCTIONS_H_

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
#include "ros_agent/msg/rosidl_generator_c__visibility_control.h"

#include "ros_agent/msg/detail/content_part__struct.h"

/// Initialize msg/ContentPart message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_agent__msg__ContentPart
 * )) before or use
 * ros_agent__msg__ContentPart__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_agent
bool
ros_agent__msg__ContentPart__init(ros_agent__msg__ContentPart * msg);

/// Finalize msg/ContentPart message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_agent
void
ros_agent__msg__ContentPart__fini(ros_agent__msg__ContentPart * msg);

/// Create msg/ContentPart message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_agent__msg__ContentPart__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_agent
ros_agent__msg__ContentPart *
ros_agent__msg__ContentPart__create(void);

/// Destroy msg/ContentPart message.
/**
 * It calls
 * ros_agent__msg__ContentPart__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_agent
void
ros_agent__msg__ContentPart__destroy(ros_agent__msg__ContentPart * msg);

/// Check for msg/ContentPart message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_agent
bool
ros_agent__msg__ContentPart__are_equal(const ros_agent__msg__ContentPart * lhs, const ros_agent__msg__ContentPart * rhs);

/// Copy a msg/ContentPart message.
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
ROSIDL_GENERATOR_C_PUBLIC_ros_agent
bool
ros_agent__msg__ContentPart__copy(
  const ros_agent__msg__ContentPart * input,
  ros_agent__msg__ContentPart * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ros_agent
const rosidl_type_hash_t *
ros_agent__msg__ContentPart__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ros_agent
const rosidl_runtime_c__type_description__TypeDescription *
ros_agent__msg__ContentPart__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_ros_agent
const rosidl_runtime_c__type_description__TypeSource *
ros_agent__msg__ContentPart__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_ros_agent
const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_agent__msg__ContentPart__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/ContentPart messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_agent__msg__ContentPart__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_agent
bool
ros_agent__msg__ContentPart__Sequence__init(ros_agent__msg__ContentPart__Sequence * array, size_t size);

/// Finalize array of msg/ContentPart messages.
/**
 * It calls
 * ros_agent__msg__ContentPart__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_agent
void
ros_agent__msg__ContentPart__Sequence__fini(ros_agent__msg__ContentPart__Sequence * array);

/// Create array of msg/ContentPart messages.
/**
 * It allocates the memory for the array and calls
 * ros_agent__msg__ContentPart__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_agent
ros_agent__msg__ContentPart__Sequence *
ros_agent__msg__ContentPart__Sequence__create(size_t size);

/// Destroy array of msg/ContentPart messages.
/**
 * It calls
 * ros_agent__msg__ContentPart__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_agent
void
ros_agent__msg__ContentPart__Sequence__destroy(ros_agent__msg__ContentPart__Sequence * array);

/// Check for msg/ContentPart message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_agent
bool
ros_agent__msg__ContentPart__Sequence__are_equal(const ros_agent__msg__ContentPart__Sequence * lhs, const ros_agent__msg__ContentPart__Sequence * rhs);

/// Copy an array of msg/ContentPart messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ros_agent
bool
ros_agent__msg__ContentPart__Sequence__copy(
  const ros_agent__msg__ContentPart__Sequence * input,
  ros_agent__msg__ContentPart__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROS_AGENT__MSG__DETAIL__CONTENT_PART__FUNCTIONS_H_
