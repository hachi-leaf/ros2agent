// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from command_executor:srv/ExecuteCommand.idl
// generated code does not contain a copyright notice
#include "command_executor/srv/detail/execute_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

bool
command_executor__srv__ExecuteCommand_Request__init(command_executor__srv__ExecuteCommand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    command_executor__srv__ExecuteCommand_Request__fini(msg);
    return false;
  }
  return true;
}

void
command_executor__srv__ExecuteCommand_Request__fini(command_executor__srv__ExecuteCommand_Request * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
}

bool
command_executor__srv__ExecuteCommand_Request__are_equal(const command_executor__srv__ExecuteCommand_Request * lhs, const command_executor__srv__ExecuteCommand_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  return true;
}

bool
command_executor__srv__ExecuteCommand_Request__copy(
  const command_executor__srv__ExecuteCommand_Request * input,
  command_executor__srv__ExecuteCommand_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  return true;
}

command_executor__srv__ExecuteCommand_Request *
command_executor__srv__ExecuteCommand_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_executor__srv__ExecuteCommand_Request * msg = (command_executor__srv__ExecuteCommand_Request *)allocator.allocate(sizeof(command_executor__srv__ExecuteCommand_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(command_executor__srv__ExecuteCommand_Request));
  bool success = command_executor__srv__ExecuteCommand_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
command_executor__srv__ExecuteCommand_Request__destroy(command_executor__srv__ExecuteCommand_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    command_executor__srv__ExecuteCommand_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
command_executor__srv__ExecuteCommand_Request__Sequence__init(command_executor__srv__ExecuteCommand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_executor__srv__ExecuteCommand_Request * data = NULL;

  if (size) {
    data = (command_executor__srv__ExecuteCommand_Request *)allocator.zero_allocate(size, sizeof(command_executor__srv__ExecuteCommand_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = command_executor__srv__ExecuteCommand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        command_executor__srv__ExecuteCommand_Request__fini(&data[i - 1]);
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
command_executor__srv__ExecuteCommand_Request__Sequence__fini(command_executor__srv__ExecuteCommand_Request__Sequence * array)
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
      command_executor__srv__ExecuteCommand_Request__fini(&array->data[i]);
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

command_executor__srv__ExecuteCommand_Request__Sequence *
command_executor__srv__ExecuteCommand_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_executor__srv__ExecuteCommand_Request__Sequence * array = (command_executor__srv__ExecuteCommand_Request__Sequence *)allocator.allocate(sizeof(command_executor__srv__ExecuteCommand_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = command_executor__srv__ExecuteCommand_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
command_executor__srv__ExecuteCommand_Request__Sequence__destroy(command_executor__srv__ExecuteCommand_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    command_executor__srv__ExecuteCommand_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
command_executor__srv__ExecuteCommand_Request__Sequence__are_equal(const command_executor__srv__ExecuteCommand_Request__Sequence * lhs, const command_executor__srv__ExecuteCommand_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!command_executor__srv__ExecuteCommand_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
command_executor__srv__ExecuteCommand_Request__Sequence__copy(
  const command_executor__srv__ExecuteCommand_Request__Sequence * input,
  command_executor__srv__ExecuteCommand_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(command_executor__srv__ExecuteCommand_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    command_executor__srv__ExecuteCommand_Request * data =
      (command_executor__srv__ExecuteCommand_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!command_executor__srv__ExecuteCommand_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          command_executor__srv__ExecuteCommand_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!command_executor__srv__ExecuteCommand_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `output`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
command_executor__srv__ExecuteCommand_Response__init(command_executor__srv__ExecuteCommand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // exit_code
  // output
  if (!rosidl_runtime_c__String__init(&msg->output)) {
    command_executor__srv__ExecuteCommand_Response__fini(msg);
    return false;
  }
  return true;
}

void
command_executor__srv__ExecuteCommand_Response__fini(command_executor__srv__ExecuteCommand_Response * msg)
{
  if (!msg) {
    return;
  }
  // exit_code
  // output
  rosidl_runtime_c__String__fini(&msg->output);
}

bool
command_executor__srv__ExecuteCommand_Response__are_equal(const command_executor__srv__ExecuteCommand_Response * lhs, const command_executor__srv__ExecuteCommand_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // exit_code
  if (lhs->exit_code != rhs->exit_code) {
    return false;
  }
  // output
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->output), &(rhs->output)))
  {
    return false;
  }
  return true;
}

bool
command_executor__srv__ExecuteCommand_Response__copy(
  const command_executor__srv__ExecuteCommand_Response * input,
  command_executor__srv__ExecuteCommand_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // exit_code
  output->exit_code = input->exit_code;
  // output
  if (!rosidl_runtime_c__String__copy(
      &(input->output), &(output->output)))
  {
    return false;
  }
  return true;
}

command_executor__srv__ExecuteCommand_Response *
command_executor__srv__ExecuteCommand_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_executor__srv__ExecuteCommand_Response * msg = (command_executor__srv__ExecuteCommand_Response *)allocator.allocate(sizeof(command_executor__srv__ExecuteCommand_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(command_executor__srv__ExecuteCommand_Response));
  bool success = command_executor__srv__ExecuteCommand_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
command_executor__srv__ExecuteCommand_Response__destroy(command_executor__srv__ExecuteCommand_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    command_executor__srv__ExecuteCommand_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
command_executor__srv__ExecuteCommand_Response__Sequence__init(command_executor__srv__ExecuteCommand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_executor__srv__ExecuteCommand_Response * data = NULL;

  if (size) {
    data = (command_executor__srv__ExecuteCommand_Response *)allocator.zero_allocate(size, sizeof(command_executor__srv__ExecuteCommand_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = command_executor__srv__ExecuteCommand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        command_executor__srv__ExecuteCommand_Response__fini(&data[i - 1]);
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
command_executor__srv__ExecuteCommand_Response__Sequence__fini(command_executor__srv__ExecuteCommand_Response__Sequence * array)
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
      command_executor__srv__ExecuteCommand_Response__fini(&array->data[i]);
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

command_executor__srv__ExecuteCommand_Response__Sequence *
command_executor__srv__ExecuteCommand_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_executor__srv__ExecuteCommand_Response__Sequence * array = (command_executor__srv__ExecuteCommand_Response__Sequence *)allocator.allocate(sizeof(command_executor__srv__ExecuteCommand_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = command_executor__srv__ExecuteCommand_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
command_executor__srv__ExecuteCommand_Response__Sequence__destroy(command_executor__srv__ExecuteCommand_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    command_executor__srv__ExecuteCommand_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
command_executor__srv__ExecuteCommand_Response__Sequence__are_equal(const command_executor__srv__ExecuteCommand_Response__Sequence * lhs, const command_executor__srv__ExecuteCommand_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!command_executor__srv__ExecuteCommand_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
command_executor__srv__ExecuteCommand_Response__Sequence__copy(
  const command_executor__srv__ExecuteCommand_Response__Sequence * input,
  command_executor__srv__ExecuteCommand_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(command_executor__srv__ExecuteCommand_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    command_executor__srv__ExecuteCommand_Response * data =
      (command_executor__srv__ExecuteCommand_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!command_executor__srv__ExecuteCommand_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          command_executor__srv__ExecuteCommand_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!command_executor__srv__ExecuteCommand_Response__copy(
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
// #include "command_executor/srv/detail/execute_command__functions.h"

bool
command_executor__srv__ExecuteCommand_Event__init(command_executor__srv__ExecuteCommand_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    command_executor__srv__ExecuteCommand_Event__fini(msg);
    return false;
  }
  // request
  if (!command_executor__srv__ExecuteCommand_Request__Sequence__init(&msg->request, 0)) {
    command_executor__srv__ExecuteCommand_Event__fini(msg);
    return false;
  }
  // response
  if (!command_executor__srv__ExecuteCommand_Response__Sequence__init(&msg->response, 0)) {
    command_executor__srv__ExecuteCommand_Event__fini(msg);
    return false;
  }
  return true;
}

void
command_executor__srv__ExecuteCommand_Event__fini(command_executor__srv__ExecuteCommand_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  command_executor__srv__ExecuteCommand_Request__Sequence__fini(&msg->request);
  // response
  command_executor__srv__ExecuteCommand_Response__Sequence__fini(&msg->response);
}

bool
command_executor__srv__ExecuteCommand_Event__are_equal(const command_executor__srv__ExecuteCommand_Event * lhs, const command_executor__srv__ExecuteCommand_Event * rhs)
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
  if (!command_executor__srv__ExecuteCommand_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!command_executor__srv__ExecuteCommand_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
command_executor__srv__ExecuteCommand_Event__copy(
  const command_executor__srv__ExecuteCommand_Event * input,
  command_executor__srv__ExecuteCommand_Event * output)
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
  if (!command_executor__srv__ExecuteCommand_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!command_executor__srv__ExecuteCommand_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

command_executor__srv__ExecuteCommand_Event *
command_executor__srv__ExecuteCommand_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_executor__srv__ExecuteCommand_Event * msg = (command_executor__srv__ExecuteCommand_Event *)allocator.allocate(sizeof(command_executor__srv__ExecuteCommand_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(command_executor__srv__ExecuteCommand_Event));
  bool success = command_executor__srv__ExecuteCommand_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
command_executor__srv__ExecuteCommand_Event__destroy(command_executor__srv__ExecuteCommand_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    command_executor__srv__ExecuteCommand_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
command_executor__srv__ExecuteCommand_Event__Sequence__init(command_executor__srv__ExecuteCommand_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_executor__srv__ExecuteCommand_Event * data = NULL;

  if (size) {
    data = (command_executor__srv__ExecuteCommand_Event *)allocator.zero_allocate(size, sizeof(command_executor__srv__ExecuteCommand_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = command_executor__srv__ExecuteCommand_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        command_executor__srv__ExecuteCommand_Event__fini(&data[i - 1]);
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
command_executor__srv__ExecuteCommand_Event__Sequence__fini(command_executor__srv__ExecuteCommand_Event__Sequence * array)
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
      command_executor__srv__ExecuteCommand_Event__fini(&array->data[i]);
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

command_executor__srv__ExecuteCommand_Event__Sequence *
command_executor__srv__ExecuteCommand_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  command_executor__srv__ExecuteCommand_Event__Sequence * array = (command_executor__srv__ExecuteCommand_Event__Sequence *)allocator.allocate(sizeof(command_executor__srv__ExecuteCommand_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = command_executor__srv__ExecuteCommand_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
command_executor__srv__ExecuteCommand_Event__Sequence__destroy(command_executor__srv__ExecuteCommand_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    command_executor__srv__ExecuteCommand_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
command_executor__srv__ExecuteCommand_Event__Sequence__are_equal(const command_executor__srv__ExecuteCommand_Event__Sequence * lhs, const command_executor__srv__ExecuteCommand_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!command_executor__srv__ExecuteCommand_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
command_executor__srv__ExecuteCommand_Event__Sequence__copy(
  const command_executor__srv__ExecuteCommand_Event__Sequence * input,
  command_executor__srv__ExecuteCommand_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(command_executor__srv__ExecuteCommand_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    command_executor__srv__ExecuteCommand_Event * data =
      (command_executor__srv__ExecuteCommand_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!command_executor__srv__ExecuteCommand_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          command_executor__srv__ExecuteCommand_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!command_executor__srv__ExecuteCommand_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
