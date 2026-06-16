// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_agent:action/Chat.idl
// generated code does not contain a copyright notice
#include "ros_agent/action/detail/chat__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `messages`
#include "ros_agent/msg/detail/chat_message__functions.h"
// Member `truncation_strategy`
// Member `reasoning_effort`
#include "rosidl_runtime_c/string_functions.h"

bool
ros_agent__action__Chat_Goal__init(ros_agent__action__Chat_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // messages
  if (!ros_agent__msg__ChatMessage__Sequence__init(&msg->messages, 0)) {
    ros_agent__action__Chat_Goal__fini(msg);
    return false;
  }
  // stream
  // max_context_tokens
  // truncation_strategy
  if (!rosidl_runtime_c__String__init(&msg->truncation_strategy)) {
    ros_agent__action__Chat_Goal__fini(msg);
    return false;
  }
  // reasoning_effort
  if (!rosidl_runtime_c__String__init(&msg->reasoning_effort)) {
    ros_agent__action__Chat_Goal__fini(msg);
    return false;
  }
  return true;
}

void
ros_agent__action__Chat_Goal__fini(ros_agent__action__Chat_Goal * msg)
{
  if (!msg) {
    return;
  }
  // messages
  ros_agent__msg__ChatMessage__Sequence__fini(&msg->messages);
  // stream
  // max_context_tokens
  // truncation_strategy
  rosidl_runtime_c__String__fini(&msg->truncation_strategy);
  // reasoning_effort
  rosidl_runtime_c__String__fini(&msg->reasoning_effort);
}

bool
ros_agent__action__Chat_Goal__are_equal(const ros_agent__action__Chat_Goal * lhs, const ros_agent__action__Chat_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // messages
  if (!ros_agent__msg__ChatMessage__Sequence__are_equal(
      &(lhs->messages), &(rhs->messages)))
  {
    return false;
  }
  // stream
  if (lhs->stream != rhs->stream) {
    return false;
  }
  // max_context_tokens
  if (lhs->max_context_tokens != rhs->max_context_tokens) {
    return false;
  }
  // truncation_strategy
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->truncation_strategy), &(rhs->truncation_strategy)))
  {
    return false;
  }
  // reasoning_effort
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reasoning_effort), &(rhs->reasoning_effort)))
  {
    return false;
  }
  return true;
}

bool
ros_agent__action__Chat_Goal__copy(
  const ros_agent__action__Chat_Goal * input,
  ros_agent__action__Chat_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // messages
  if (!ros_agent__msg__ChatMessage__Sequence__copy(
      &(input->messages), &(output->messages)))
  {
    return false;
  }
  // stream
  output->stream = input->stream;
  // max_context_tokens
  output->max_context_tokens = input->max_context_tokens;
  // truncation_strategy
  if (!rosidl_runtime_c__String__copy(
      &(input->truncation_strategy), &(output->truncation_strategy)))
  {
    return false;
  }
  // reasoning_effort
  if (!rosidl_runtime_c__String__copy(
      &(input->reasoning_effort), &(output->reasoning_effort)))
  {
    return false;
  }
  return true;
}

ros_agent__action__Chat_Goal *
ros_agent__action__Chat_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_Goal * msg = (ros_agent__action__Chat_Goal *)allocator.allocate(sizeof(ros_agent__action__Chat_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_agent__action__Chat_Goal));
  bool success = ros_agent__action__Chat_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_agent__action__Chat_Goal__destroy(ros_agent__action__Chat_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_agent__action__Chat_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_agent__action__Chat_Goal__Sequence__init(ros_agent__action__Chat_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_Goal * data = NULL;

  if (size) {
    data = (ros_agent__action__Chat_Goal *)allocator.zero_allocate(size, sizeof(ros_agent__action__Chat_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_agent__action__Chat_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_agent__action__Chat_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_agent__action__Chat_Goal__Sequence__fini(ros_agent__action__Chat_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_agent__action__Chat_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_agent__action__Chat_Goal__Sequence *
ros_agent__action__Chat_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_Goal__Sequence * array = (ros_agent__action__Chat_Goal__Sequence *)allocator.allocate(sizeof(ros_agent__action__Chat_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_agent__action__Chat_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_agent__action__Chat_Goal__Sequence__destroy(ros_agent__action__Chat_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_agent__action__Chat_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_agent__action__Chat_Goal__Sequence__are_equal(const ros_agent__action__Chat_Goal__Sequence * lhs, const ros_agent__action__Chat_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_agent__action__Chat_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_agent__action__Chat_Goal__Sequence__copy(
  const ros_agent__action__Chat_Goal__Sequence * input,
  ros_agent__action__Chat_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_agent__action__Chat_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_agent__action__Chat_Goal * data =
      (ros_agent__action__Chat_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_agent__action__Chat_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_agent__action__Chat_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_agent__action__Chat_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `content`
// Member `reasoning_content`
// Member `error_msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `updated_messages`
// already included above
// #include "ros_agent/msg/detail/chat_message__functions.h"

bool
ros_agent__action__Chat_Result__init(ros_agent__action__Chat_Result * msg)
{
  if (!msg) {
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__init(&msg->content)) {
    ros_agent__action__Chat_Result__fini(msg);
    return false;
  }
  // reasoning_content
  if (!rosidl_runtime_c__String__init(&msg->reasoning_content)) {
    ros_agent__action__Chat_Result__fini(msg);
    return false;
  }
  // updated_messages
  if (!ros_agent__msg__ChatMessage__Sequence__init(&msg->updated_messages, 0)) {
    ros_agent__action__Chat_Result__fini(msg);
    return false;
  }
  // success
  // error_msg
  if (!rosidl_runtime_c__String__init(&msg->error_msg)) {
    ros_agent__action__Chat_Result__fini(msg);
    return false;
  }
  // prompt_tokens
  // completion_tokens
  // total_tokens
  return true;
}

void
ros_agent__action__Chat_Result__fini(ros_agent__action__Chat_Result * msg)
{
  if (!msg) {
    return;
  }
  // content
  rosidl_runtime_c__String__fini(&msg->content);
  // reasoning_content
  rosidl_runtime_c__String__fini(&msg->reasoning_content);
  // updated_messages
  ros_agent__msg__ChatMessage__Sequence__fini(&msg->updated_messages);
  // success
  // error_msg
  rosidl_runtime_c__String__fini(&msg->error_msg);
  // prompt_tokens
  // completion_tokens
  // total_tokens
}

bool
ros_agent__action__Chat_Result__are_equal(const ros_agent__action__Chat_Result * lhs, const ros_agent__action__Chat_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->content), &(rhs->content)))
  {
    return false;
  }
  // reasoning_content
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reasoning_content), &(rhs->reasoning_content)))
  {
    return false;
  }
  // updated_messages
  if (!ros_agent__msg__ChatMessage__Sequence__are_equal(
      &(lhs->updated_messages), &(rhs->updated_messages)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // error_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_msg), &(rhs->error_msg)))
  {
    return false;
  }
  // prompt_tokens
  if (lhs->prompt_tokens != rhs->prompt_tokens) {
    return false;
  }
  // completion_tokens
  if (lhs->completion_tokens != rhs->completion_tokens) {
    return false;
  }
  // total_tokens
  if (lhs->total_tokens != rhs->total_tokens) {
    return false;
  }
  return true;
}

bool
ros_agent__action__Chat_Result__copy(
  const ros_agent__action__Chat_Result * input,
  ros_agent__action__Chat_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__copy(
      &(input->content), &(output->content)))
  {
    return false;
  }
  // reasoning_content
  if (!rosidl_runtime_c__String__copy(
      &(input->reasoning_content), &(output->reasoning_content)))
  {
    return false;
  }
  // updated_messages
  if (!ros_agent__msg__ChatMessage__Sequence__copy(
      &(input->updated_messages), &(output->updated_messages)))
  {
    return false;
  }
  // success
  output->success = input->success;
  // error_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->error_msg), &(output->error_msg)))
  {
    return false;
  }
  // prompt_tokens
  output->prompt_tokens = input->prompt_tokens;
  // completion_tokens
  output->completion_tokens = input->completion_tokens;
  // total_tokens
  output->total_tokens = input->total_tokens;
  return true;
}

ros_agent__action__Chat_Result *
ros_agent__action__Chat_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_Result * msg = (ros_agent__action__Chat_Result *)allocator.allocate(sizeof(ros_agent__action__Chat_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_agent__action__Chat_Result));
  bool success = ros_agent__action__Chat_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_agent__action__Chat_Result__destroy(ros_agent__action__Chat_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_agent__action__Chat_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_agent__action__Chat_Result__Sequence__init(ros_agent__action__Chat_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_Result * data = NULL;

  if (size) {
    data = (ros_agent__action__Chat_Result *)allocator.zero_allocate(size, sizeof(ros_agent__action__Chat_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_agent__action__Chat_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_agent__action__Chat_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_agent__action__Chat_Result__Sequence__fini(ros_agent__action__Chat_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_agent__action__Chat_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_agent__action__Chat_Result__Sequence *
ros_agent__action__Chat_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_Result__Sequence * array = (ros_agent__action__Chat_Result__Sequence *)allocator.allocate(sizeof(ros_agent__action__Chat_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_agent__action__Chat_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_agent__action__Chat_Result__Sequence__destroy(ros_agent__action__Chat_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_agent__action__Chat_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_agent__action__Chat_Result__Sequence__are_equal(const ros_agent__action__Chat_Result__Sequence * lhs, const ros_agent__action__Chat_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_agent__action__Chat_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_agent__action__Chat_Result__Sequence__copy(
  const ros_agent__action__Chat_Result__Sequence * input,
  ros_agent__action__Chat_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_agent__action__Chat_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_agent__action__Chat_Result * data =
      (ros_agent__action__Chat_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_agent__action__Chat_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_agent__action__Chat_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_agent__action__Chat_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `partial_content`
// Member `partial_reasoning`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ros_agent__action__Chat_Feedback__init(ros_agent__action__Chat_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // partial_content
  if (!rosidl_runtime_c__String__init(&msg->partial_content)) {
    ros_agent__action__Chat_Feedback__fini(msg);
    return false;
  }
  // partial_reasoning
  if (!rosidl_runtime_c__String__init(&msg->partial_reasoning)) {
    ros_agent__action__Chat_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
ros_agent__action__Chat_Feedback__fini(ros_agent__action__Chat_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // partial_content
  rosidl_runtime_c__String__fini(&msg->partial_content);
  // partial_reasoning
  rosidl_runtime_c__String__fini(&msg->partial_reasoning);
}

bool
ros_agent__action__Chat_Feedback__are_equal(const ros_agent__action__Chat_Feedback * lhs, const ros_agent__action__Chat_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // partial_content
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->partial_content), &(rhs->partial_content)))
  {
    return false;
  }
  // partial_reasoning
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->partial_reasoning), &(rhs->partial_reasoning)))
  {
    return false;
  }
  return true;
}

bool
ros_agent__action__Chat_Feedback__copy(
  const ros_agent__action__Chat_Feedback * input,
  ros_agent__action__Chat_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // partial_content
  if (!rosidl_runtime_c__String__copy(
      &(input->partial_content), &(output->partial_content)))
  {
    return false;
  }
  // partial_reasoning
  if (!rosidl_runtime_c__String__copy(
      &(input->partial_reasoning), &(output->partial_reasoning)))
  {
    return false;
  }
  return true;
}

ros_agent__action__Chat_Feedback *
ros_agent__action__Chat_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_Feedback * msg = (ros_agent__action__Chat_Feedback *)allocator.allocate(sizeof(ros_agent__action__Chat_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_agent__action__Chat_Feedback));
  bool success = ros_agent__action__Chat_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_agent__action__Chat_Feedback__destroy(ros_agent__action__Chat_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_agent__action__Chat_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_agent__action__Chat_Feedback__Sequence__init(ros_agent__action__Chat_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_Feedback * data = NULL;

  if (size) {
    data = (ros_agent__action__Chat_Feedback *)allocator.zero_allocate(size, sizeof(ros_agent__action__Chat_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_agent__action__Chat_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_agent__action__Chat_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_agent__action__Chat_Feedback__Sequence__fini(ros_agent__action__Chat_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_agent__action__Chat_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_agent__action__Chat_Feedback__Sequence *
ros_agent__action__Chat_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_Feedback__Sequence * array = (ros_agent__action__Chat_Feedback__Sequence *)allocator.allocate(sizeof(ros_agent__action__Chat_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_agent__action__Chat_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_agent__action__Chat_Feedback__Sequence__destroy(ros_agent__action__Chat_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_agent__action__Chat_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_agent__action__Chat_Feedback__Sequence__are_equal(const ros_agent__action__Chat_Feedback__Sequence * lhs, const ros_agent__action__Chat_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_agent__action__Chat_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_agent__action__Chat_Feedback__Sequence__copy(
  const ros_agent__action__Chat_Feedback__Sequence * input,
  ros_agent__action__Chat_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_agent__action__Chat_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_agent__action__Chat_Feedback * data =
      (ros_agent__action__Chat_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_agent__action__Chat_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_agent__action__Chat_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_agent__action__Chat_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "ros_agent/action/detail/chat__functions.h"

bool
ros_agent__action__Chat_SendGoal_Request__init(ros_agent__action__Chat_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ros_agent__action__Chat_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!ros_agent__action__Chat_Goal__init(&msg->goal)) {
    ros_agent__action__Chat_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
ros_agent__action__Chat_SendGoal_Request__fini(ros_agent__action__Chat_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  ros_agent__action__Chat_Goal__fini(&msg->goal);
}

bool
ros_agent__action__Chat_SendGoal_Request__are_equal(const ros_agent__action__Chat_SendGoal_Request * lhs, const ros_agent__action__Chat_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!ros_agent__action__Chat_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
ros_agent__action__Chat_SendGoal_Request__copy(
  const ros_agent__action__Chat_SendGoal_Request * input,
  ros_agent__action__Chat_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!ros_agent__action__Chat_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

ros_agent__action__Chat_SendGoal_Request *
ros_agent__action__Chat_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_SendGoal_Request * msg = (ros_agent__action__Chat_SendGoal_Request *)allocator.allocate(sizeof(ros_agent__action__Chat_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_agent__action__Chat_SendGoal_Request));
  bool success = ros_agent__action__Chat_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_agent__action__Chat_SendGoal_Request__destroy(ros_agent__action__Chat_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_agent__action__Chat_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_agent__action__Chat_SendGoal_Request__Sequence__init(ros_agent__action__Chat_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_SendGoal_Request * data = NULL;

  if (size) {
    data = (ros_agent__action__Chat_SendGoal_Request *)allocator.zero_allocate(size, sizeof(ros_agent__action__Chat_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_agent__action__Chat_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_agent__action__Chat_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_agent__action__Chat_SendGoal_Request__Sequence__fini(ros_agent__action__Chat_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_agent__action__Chat_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_agent__action__Chat_SendGoal_Request__Sequence *
ros_agent__action__Chat_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_SendGoal_Request__Sequence * array = (ros_agent__action__Chat_SendGoal_Request__Sequence *)allocator.allocate(sizeof(ros_agent__action__Chat_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_agent__action__Chat_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_agent__action__Chat_SendGoal_Request__Sequence__destroy(ros_agent__action__Chat_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_agent__action__Chat_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_agent__action__Chat_SendGoal_Request__Sequence__are_equal(const ros_agent__action__Chat_SendGoal_Request__Sequence * lhs, const ros_agent__action__Chat_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_agent__action__Chat_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_agent__action__Chat_SendGoal_Request__Sequence__copy(
  const ros_agent__action__Chat_SendGoal_Request__Sequence * input,
  ros_agent__action__Chat_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_agent__action__Chat_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_agent__action__Chat_SendGoal_Request * data =
      (ros_agent__action__Chat_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_agent__action__Chat_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_agent__action__Chat_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_agent__action__Chat_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
ros_agent__action__Chat_SendGoal_Response__init(ros_agent__action__Chat_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    ros_agent__action__Chat_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
ros_agent__action__Chat_SendGoal_Response__fini(ros_agent__action__Chat_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
ros_agent__action__Chat_SendGoal_Response__are_equal(const ros_agent__action__Chat_SendGoal_Response * lhs, const ros_agent__action__Chat_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
ros_agent__action__Chat_SendGoal_Response__copy(
  const ros_agent__action__Chat_SendGoal_Response * input,
  ros_agent__action__Chat_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

ros_agent__action__Chat_SendGoal_Response *
ros_agent__action__Chat_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_SendGoal_Response * msg = (ros_agent__action__Chat_SendGoal_Response *)allocator.allocate(sizeof(ros_agent__action__Chat_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_agent__action__Chat_SendGoal_Response));
  bool success = ros_agent__action__Chat_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_agent__action__Chat_SendGoal_Response__destroy(ros_agent__action__Chat_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_agent__action__Chat_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_agent__action__Chat_SendGoal_Response__Sequence__init(ros_agent__action__Chat_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_SendGoal_Response * data = NULL;

  if (size) {
    data = (ros_agent__action__Chat_SendGoal_Response *)allocator.zero_allocate(size, sizeof(ros_agent__action__Chat_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_agent__action__Chat_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_agent__action__Chat_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_agent__action__Chat_SendGoal_Response__Sequence__fini(ros_agent__action__Chat_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_agent__action__Chat_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_agent__action__Chat_SendGoal_Response__Sequence *
ros_agent__action__Chat_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_SendGoal_Response__Sequence * array = (ros_agent__action__Chat_SendGoal_Response__Sequence *)allocator.allocate(sizeof(ros_agent__action__Chat_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_agent__action__Chat_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_agent__action__Chat_SendGoal_Response__Sequence__destroy(ros_agent__action__Chat_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_agent__action__Chat_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_agent__action__Chat_SendGoal_Response__Sequence__are_equal(const ros_agent__action__Chat_SendGoal_Response__Sequence * lhs, const ros_agent__action__Chat_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_agent__action__Chat_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_agent__action__Chat_SendGoal_Response__Sequence__copy(
  const ros_agent__action__Chat_SendGoal_Response__Sequence * input,
  ros_agent__action__Chat_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_agent__action__Chat_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_agent__action__Chat_SendGoal_Response * data =
      (ros_agent__action__Chat_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_agent__action__Chat_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_agent__action__Chat_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_agent__action__Chat_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "ros_agent/action/detail/chat__functions.h"

bool
ros_agent__action__Chat_SendGoal_Event__init(ros_agent__action__Chat_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ros_agent__action__Chat_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!ros_agent__action__Chat_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    ros_agent__action__Chat_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!ros_agent__action__Chat_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    ros_agent__action__Chat_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
ros_agent__action__Chat_SendGoal_Event__fini(ros_agent__action__Chat_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ros_agent__action__Chat_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  ros_agent__action__Chat_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
ros_agent__action__Chat_SendGoal_Event__are_equal(const ros_agent__action__Chat_SendGoal_Event * lhs, const ros_agent__action__Chat_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!ros_agent__action__Chat_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ros_agent__action__Chat_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ros_agent__action__Chat_SendGoal_Event__copy(
  const ros_agent__action__Chat_SendGoal_Event * input,
  ros_agent__action__Chat_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!ros_agent__action__Chat_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ros_agent__action__Chat_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ros_agent__action__Chat_SendGoal_Event *
ros_agent__action__Chat_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_SendGoal_Event * msg = (ros_agent__action__Chat_SendGoal_Event *)allocator.allocate(sizeof(ros_agent__action__Chat_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_agent__action__Chat_SendGoal_Event));
  bool success = ros_agent__action__Chat_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_agent__action__Chat_SendGoal_Event__destroy(ros_agent__action__Chat_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_agent__action__Chat_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_agent__action__Chat_SendGoal_Event__Sequence__init(ros_agent__action__Chat_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_SendGoal_Event * data = NULL;

  if (size) {
    data = (ros_agent__action__Chat_SendGoal_Event *)allocator.zero_allocate(size, sizeof(ros_agent__action__Chat_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_agent__action__Chat_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_agent__action__Chat_SendGoal_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_agent__action__Chat_SendGoal_Event__Sequence__fini(ros_agent__action__Chat_SendGoal_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_agent__action__Chat_SendGoal_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_agent__action__Chat_SendGoal_Event__Sequence *
ros_agent__action__Chat_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_SendGoal_Event__Sequence * array = (ros_agent__action__Chat_SendGoal_Event__Sequence *)allocator.allocate(sizeof(ros_agent__action__Chat_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_agent__action__Chat_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_agent__action__Chat_SendGoal_Event__Sequence__destroy(ros_agent__action__Chat_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_agent__action__Chat_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_agent__action__Chat_SendGoal_Event__Sequence__are_equal(const ros_agent__action__Chat_SendGoal_Event__Sequence * lhs, const ros_agent__action__Chat_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_agent__action__Chat_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_agent__action__Chat_SendGoal_Event__Sequence__copy(
  const ros_agent__action__Chat_SendGoal_Event__Sequence * input,
  ros_agent__action__Chat_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_agent__action__Chat_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_agent__action__Chat_SendGoal_Event * data =
      (ros_agent__action__Chat_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_agent__action__Chat_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_agent__action__Chat_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_agent__action__Chat_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
ros_agent__action__Chat_GetResult_Request__init(ros_agent__action__Chat_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ros_agent__action__Chat_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
ros_agent__action__Chat_GetResult_Request__fini(ros_agent__action__Chat_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
ros_agent__action__Chat_GetResult_Request__are_equal(const ros_agent__action__Chat_GetResult_Request * lhs, const ros_agent__action__Chat_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
ros_agent__action__Chat_GetResult_Request__copy(
  const ros_agent__action__Chat_GetResult_Request * input,
  ros_agent__action__Chat_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

ros_agent__action__Chat_GetResult_Request *
ros_agent__action__Chat_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_GetResult_Request * msg = (ros_agent__action__Chat_GetResult_Request *)allocator.allocate(sizeof(ros_agent__action__Chat_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_agent__action__Chat_GetResult_Request));
  bool success = ros_agent__action__Chat_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_agent__action__Chat_GetResult_Request__destroy(ros_agent__action__Chat_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_agent__action__Chat_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_agent__action__Chat_GetResult_Request__Sequence__init(ros_agent__action__Chat_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_GetResult_Request * data = NULL;

  if (size) {
    data = (ros_agent__action__Chat_GetResult_Request *)allocator.zero_allocate(size, sizeof(ros_agent__action__Chat_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_agent__action__Chat_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_agent__action__Chat_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_agent__action__Chat_GetResult_Request__Sequence__fini(ros_agent__action__Chat_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_agent__action__Chat_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_agent__action__Chat_GetResult_Request__Sequence *
ros_agent__action__Chat_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_GetResult_Request__Sequence * array = (ros_agent__action__Chat_GetResult_Request__Sequence *)allocator.allocate(sizeof(ros_agent__action__Chat_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_agent__action__Chat_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_agent__action__Chat_GetResult_Request__Sequence__destroy(ros_agent__action__Chat_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_agent__action__Chat_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_agent__action__Chat_GetResult_Request__Sequence__are_equal(const ros_agent__action__Chat_GetResult_Request__Sequence * lhs, const ros_agent__action__Chat_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_agent__action__Chat_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_agent__action__Chat_GetResult_Request__Sequence__copy(
  const ros_agent__action__Chat_GetResult_Request__Sequence * input,
  ros_agent__action__Chat_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_agent__action__Chat_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_agent__action__Chat_GetResult_Request * data =
      (ros_agent__action__Chat_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_agent__action__Chat_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_agent__action__Chat_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_agent__action__Chat_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "ros_agent/action/detail/chat__functions.h"

bool
ros_agent__action__Chat_GetResult_Response__init(ros_agent__action__Chat_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!ros_agent__action__Chat_Result__init(&msg->result)) {
    ros_agent__action__Chat_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
ros_agent__action__Chat_GetResult_Response__fini(ros_agent__action__Chat_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  ros_agent__action__Chat_Result__fini(&msg->result);
}

bool
ros_agent__action__Chat_GetResult_Response__are_equal(const ros_agent__action__Chat_GetResult_Response * lhs, const ros_agent__action__Chat_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!ros_agent__action__Chat_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
ros_agent__action__Chat_GetResult_Response__copy(
  const ros_agent__action__Chat_GetResult_Response * input,
  ros_agent__action__Chat_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!ros_agent__action__Chat_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

ros_agent__action__Chat_GetResult_Response *
ros_agent__action__Chat_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_GetResult_Response * msg = (ros_agent__action__Chat_GetResult_Response *)allocator.allocate(sizeof(ros_agent__action__Chat_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_agent__action__Chat_GetResult_Response));
  bool success = ros_agent__action__Chat_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_agent__action__Chat_GetResult_Response__destroy(ros_agent__action__Chat_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_agent__action__Chat_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_agent__action__Chat_GetResult_Response__Sequence__init(ros_agent__action__Chat_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_GetResult_Response * data = NULL;

  if (size) {
    data = (ros_agent__action__Chat_GetResult_Response *)allocator.zero_allocate(size, sizeof(ros_agent__action__Chat_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_agent__action__Chat_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_agent__action__Chat_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_agent__action__Chat_GetResult_Response__Sequence__fini(ros_agent__action__Chat_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_agent__action__Chat_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_agent__action__Chat_GetResult_Response__Sequence *
ros_agent__action__Chat_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_GetResult_Response__Sequence * array = (ros_agent__action__Chat_GetResult_Response__Sequence *)allocator.allocate(sizeof(ros_agent__action__Chat_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_agent__action__Chat_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_agent__action__Chat_GetResult_Response__Sequence__destroy(ros_agent__action__Chat_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_agent__action__Chat_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_agent__action__Chat_GetResult_Response__Sequence__are_equal(const ros_agent__action__Chat_GetResult_Response__Sequence * lhs, const ros_agent__action__Chat_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_agent__action__Chat_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_agent__action__Chat_GetResult_Response__Sequence__copy(
  const ros_agent__action__Chat_GetResult_Response__Sequence * input,
  ros_agent__action__Chat_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_agent__action__Chat_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_agent__action__Chat_GetResult_Response * data =
      (ros_agent__action__Chat_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_agent__action__Chat_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_agent__action__Chat_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_agent__action__Chat_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "ros_agent/action/detail/chat__functions.h"

bool
ros_agent__action__Chat_GetResult_Event__init(ros_agent__action__Chat_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ros_agent__action__Chat_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!ros_agent__action__Chat_GetResult_Request__Sequence__init(&msg->request, 0)) {
    ros_agent__action__Chat_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!ros_agent__action__Chat_GetResult_Response__Sequence__init(&msg->response, 0)) {
    ros_agent__action__Chat_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
ros_agent__action__Chat_GetResult_Event__fini(ros_agent__action__Chat_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ros_agent__action__Chat_GetResult_Request__Sequence__fini(&msg->request);
  // response
  ros_agent__action__Chat_GetResult_Response__Sequence__fini(&msg->response);
}

bool
ros_agent__action__Chat_GetResult_Event__are_equal(const ros_agent__action__Chat_GetResult_Event * lhs, const ros_agent__action__Chat_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!ros_agent__action__Chat_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ros_agent__action__Chat_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ros_agent__action__Chat_GetResult_Event__copy(
  const ros_agent__action__Chat_GetResult_Event * input,
  ros_agent__action__Chat_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!ros_agent__action__Chat_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ros_agent__action__Chat_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ros_agent__action__Chat_GetResult_Event *
ros_agent__action__Chat_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_GetResult_Event * msg = (ros_agent__action__Chat_GetResult_Event *)allocator.allocate(sizeof(ros_agent__action__Chat_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_agent__action__Chat_GetResult_Event));
  bool success = ros_agent__action__Chat_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_agent__action__Chat_GetResult_Event__destroy(ros_agent__action__Chat_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_agent__action__Chat_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_agent__action__Chat_GetResult_Event__Sequence__init(ros_agent__action__Chat_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_GetResult_Event * data = NULL;

  if (size) {
    data = (ros_agent__action__Chat_GetResult_Event *)allocator.zero_allocate(size, sizeof(ros_agent__action__Chat_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_agent__action__Chat_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_agent__action__Chat_GetResult_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_agent__action__Chat_GetResult_Event__Sequence__fini(ros_agent__action__Chat_GetResult_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_agent__action__Chat_GetResult_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_agent__action__Chat_GetResult_Event__Sequence *
ros_agent__action__Chat_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_GetResult_Event__Sequence * array = (ros_agent__action__Chat_GetResult_Event__Sequence *)allocator.allocate(sizeof(ros_agent__action__Chat_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_agent__action__Chat_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_agent__action__Chat_GetResult_Event__Sequence__destroy(ros_agent__action__Chat_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_agent__action__Chat_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_agent__action__Chat_GetResult_Event__Sequence__are_equal(const ros_agent__action__Chat_GetResult_Event__Sequence * lhs, const ros_agent__action__Chat_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_agent__action__Chat_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_agent__action__Chat_GetResult_Event__Sequence__copy(
  const ros_agent__action__Chat_GetResult_Event__Sequence * input,
  ros_agent__action__Chat_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_agent__action__Chat_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_agent__action__Chat_GetResult_Event * data =
      (ros_agent__action__Chat_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_agent__action__Chat_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_agent__action__Chat_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_agent__action__Chat_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "ros_agent/action/detail/chat__functions.h"

bool
ros_agent__action__Chat_FeedbackMessage__init(ros_agent__action__Chat_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ros_agent__action__Chat_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!ros_agent__action__Chat_Feedback__init(&msg->feedback)) {
    ros_agent__action__Chat_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
ros_agent__action__Chat_FeedbackMessage__fini(ros_agent__action__Chat_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  ros_agent__action__Chat_Feedback__fini(&msg->feedback);
}

bool
ros_agent__action__Chat_FeedbackMessage__are_equal(const ros_agent__action__Chat_FeedbackMessage * lhs, const ros_agent__action__Chat_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ros_agent__action__Chat_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
ros_agent__action__Chat_FeedbackMessage__copy(
  const ros_agent__action__Chat_FeedbackMessage * input,
  ros_agent__action__Chat_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ros_agent__action__Chat_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

ros_agent__action__Chat_FeedbackMessage *
ros_agent__action__Chat_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_FeedbackMessage * msg = (ros_agent__action__Chat_FeedbackMessage *)allocator.allocate(sizeof(ros_agent__action__Chat_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_agent__action__Chat_FeedbackMessage));
  bool success = ros_agent__action__Chat_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_agent__action__Chat_FeedbackMessage__destroy(ros_agent__action__Chat_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_agent__action__Chat_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_agent__action__Chat_FeedbackMessage__Sequence__init(ros_agent__action__Chat_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_FeedbackMessage * data = NULL;

  if (size) {
    data = (ros_agent__action__Chat_FeedbackMessage *)allocator.zero_allocate(size, sizeof(ros_agent__action__Chat_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_agent__action__Chat_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_agent__action__Chat_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_agent__action__Chat_FeedbackMessage__Sequence__fini(ros_agent__action__Chat_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_agent__action__Chat_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_agent__action__Chat_FeedbackMessage__Sequence *
ros_agent__action__Chat_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__action__Chat_FeedbackMessage__Sequence * array = (ros_agent__action__Chat_FeedbackMessage__Sequence *)allocator.allocate(sizeof(ros_agent__action__Chat_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_agent__action__Chat_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_agent__action__Chat_FeedbackMessage__Sequence__destroy(ros_agent__action__Chat_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_agent__action__Chat_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_agent__action__Chat_FeedbackMessage__Sequence__are_equal(const ros_agent__action__Chat_FeedbackMessage__Sequence * lhs, const ros_agent__action__Chat_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_agent__action__Chat_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_agent__action__Chat_FeedbackMessage__Sequence__copy(
  const ros_agent__action__Chat_FeedbackMessage__Sequence * input,
  ros_agent__action__Chat_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_agent__action__Chat_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_agent__action__Chat_FeedbackMessage * data =
      (ros_agent__action__Chat_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_agent__action__Chat_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_agent__action__Chat_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_agent__action__Chat_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
