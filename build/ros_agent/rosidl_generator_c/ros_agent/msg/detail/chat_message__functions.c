// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_agent:msg/ChatMessage.idl
// generated code does not contain a copyright notice
#include "ros_agent/msg/detail/chat_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `role`
#include "rosidl_runtime_c/string_functions.h"
// Member `parts`
#include "ros_agent/msg/detail/content_part__functions.h"

bool
ros_agent__msg__ChatMessage__init(ros_agent__msg__ChatMessage * msg)
{
  if (!msg) {
    return false;
  }
  // role
  if (!rosidl_runtime_c__String__init(&msg->role)) {
    ros_agent__msg__ChatMessage__fini(msg);
    return false;
  }
  // parts
  if (!ros_agent__msg__ContentPart__Sequence__init(&msg->parts, 0)) {
    ros_agent__msg__ChatMessage__fini(msg);
    return false;
  }
  return true;
}

void
ros_agent__msg__ChatMessage__fini(ros_agent__msg__ChatMessage * msg)
{
  if (!msg) {
    return;
  }
  // role
  rosidl_runtime_c__String__fini(&msg->role);
  // parts
  ros_agent__msg__ContentPart__Sequence__fini(&msg->parts);
}

bool
ros_agent__msg__ChatMessage__are_equal(const ros_agent__msg__ChatMessage * lhs, const ros_agent__msg__ChatMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // role
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->role), &(rhs->role)))
  {
    return false;
  }
  // parts
  if (!ros_agent__msg__ContentPart__Sequence__are_equal(
      &(lhs->parts), &(rhs->parts)))
  {
    return false;
  }
  return true;
}

bool
ros_agent__msg__ChatMessage__copy(
  const ros_agent__msg__ChatMessage * input,
  ros_agent__msg__ChatMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // role
  if (!rosidl_runtime_c__String__copy(
      &(input->role), &(output->role)))
  {
    return false;
  }
  // parts
  if (!ros_agent__msg__ContentPart__Sequence__copy(
      &(input->parts), &(output->parts)))
  {
    return false;
  }
  return true;
}

ros_agent__msg__ChatMessage *
ros_agent__msg__ChatMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__msg__ChatMessage * msg = (ros_agent__msg__ChatMessage *)allocator.allocate(sizeof(ros_agent__msg__ChatMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_agent__msg__ChatMessage));
  bool success = ros_agent__msg__ChatMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_agent__msg__ChatMessage__destroy(ros_agent__msg__ChatMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_agent__msg__ChatMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_agent__msg__ChatMessage__Sequence__init(ros_agent__msg__ChatMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__msg__ChatMessage * data = NULL;

  if (size) {
    data = (ros_agent__msg__ChatMessage *)allocator.zero_allocate(size, sizeof(ros_agent__msg__ChatMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_agent__msg__ChatMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_agent__msg__ChatMessage__fini(&data[i - 1]);
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
ros_agent__msg__ChatMessage__Sequence__fini(ros_agent__msg__ChatMessage__Sequence * array)
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
      ros_agent__msg__ChatMessage__fini(&array->data[i]);
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

ros_agent__msg__ChatMessage__Sequence *
ros_agent__msg__ChatMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__msg__ChatMessage__Sequence * array = (ros_agent__msg__ChatMessage__Sequence *)allocator.allocate(sizeof(ros_agent__msg__ChatMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_agent__msg__ChatMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_agent__msg__ChatMessage__Sequence__destroy(ros_agent__msg__ChatMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_agent__msg__ChatMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_agent__msg__ChatMessage__Sequence__are_equal(const ros_agent__msg__ChatMessage__Sequence * lhs, const ros_agent__msg__ChatMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_agent__msg__ChatMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_agent__msg__ChatMessage__Sequence__copy(
  const ros_agent__msg__ChatMessage__Sequence * input,
  ros_agent__msg__ChatMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_agent__msg__ChatMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_agent__msg__ChatMessage * data =
      (ros_agent__msg__ChatMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_agent__msg__ChatMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_agent__msg__ChatMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_agent__msg__ChatMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
