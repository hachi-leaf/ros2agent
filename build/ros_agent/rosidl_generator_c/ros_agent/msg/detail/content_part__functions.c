// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_agent:msg/ContentPart.idl
// generated code does not contain a copyright notice
#include "ros_agent/msg/detail/content_part__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
// Member `text`
// Member `image_url`
#include "rosidl_runtime_c/string_functions.h"

bool
ros_agent__msg__ContentPart__init(ros_agent__msg__ContentPart * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    ros_agent__msg__ContentPart__fini(msg);
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__init(&msg->text)) {
    ros_agent__msg__ContentPart__fini(msg);
    return false;
  }
  // image_url
  if (!rosidl_runtime_c__String__init(&msg->image_url)) {
    ros_agent__msg__ContentPart__fini(msg);
    return false;
  }
  return true;
}

void
ros_agent__msg__ContentPart__fini(ros_agent__msg__ContentPart * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // text
  rosidl_runtime_c__String__fini(&msg->text);
  // image_url
  rosidl_runtime_c__String__fini(&msg->image_url);
}

bool
ros_agent__msg__ContentPart__are_equal(const ros_agent__msg__ContentPart * lhs, const ros_agent__msg__ContentPart * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->text), &(rhs->text)))
  {
    return false;
  }
  // image_url
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->image_url), &(rhs->image_url)))
  {
    return false;
  }
  return true;
}

bool
ros_agent__msg__ContentPart__copy(
  const ros_agent__msg__ContentPart * input,
  ros_agent__msg__ContentPart * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // text
  if (!rosidl_runtime_c__String__copy(
      &(input->text), &(output->text)))
  {
    return false;
  }
  // image_url
  if (!rosidl_runtime_c__String__copy(
      &(input->image_url), &(output->image_url)))
  {
    return false;
  }
  return true;
}

ros_agent__msg__ContentPart *
ros_agent__msg__ContentPart__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__msg__ContentPart * msg = (ros_agent__msg__ContentPart *)allocator.allocate(sizeof(ros_agent__msg__ContentPart), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_agent__msg__ContentPart));
  bool success = ros_agent__msg__ContentPart__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_agent__msg__ContentPart__destroy(ros_agent__msg__ContentPart * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_agent__msg__ContentPart__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_agent__msg__ContentPart__Sequence__init(ros_agent__msg__ContentPart__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__msg__ContentPart * data = NULL;

  if (size) {
    data = (ros_agent__msg__ContentPart *)allocator.zero_allocate(size, sizeof(ros_agent__msg__ContentPart), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_agent__msg__ContentPart__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_agent__msg__ContentPart__fini(&data[i - 1]);
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
ros_agent__msg__ContentPart__Sequence__fini(ros_agent__msg__ContentPart__Sequence * array)
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
      ros_agent__msg__ContentPart__fini(&array->data[i]);
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

ros_agent__msg__ContentPart__Sequence *
ros_agent__msg__ContentPart__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_agent__msg__ContentPart__Sequence * array = (ros_agent__msg__ContentPart__Sequence *)allocator.allocate(sizeof(ros_agent__msg__ContentPart__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_agent__msg__ContentPart__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_agent__msg__ContentPart__Sequence__destroy(ros_agent__msg__ContentPart__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_agent__msg__ContentPart__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_agent__msg__ContentPart__Sequence__are_equal(const ros_agent__msg__ContentPart__Sequence * lhs, const ros_agent__msg__ContentPart__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_agent__msg__ContentPart__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_agent__msg__ContentPart__Sequence__copy(
  const ros_agent__msg__ContentPart__Sequence * input,
  ros_agent__msg__ContentPart__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_agent__msg__ContentPart);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_agent__msg__ContentPart * data =
      (ros_agent__msg__ContentPart *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_agent__msg__ContentPart__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_agent__msg__ContentPart__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_agent__msg__ContentPart__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
