// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from command_executor:srv/ExecuteCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "command_executor/srv/detail/execute_command__rosidl_typesupport_introspection_c.h"
#include "command_executor/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "command_executor/srv/detail/execute_command__functions.h"
#include "command_executor/srv/detail/execute_command__struct.h"


// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void command_executor__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  command_executor__srv__ExecuteCommand_Request__init(message_memory);
}

void command_executor__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_fini_function(void * message_memory)
{
  command_executor__srv__ExecuteCommand_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember command_executor__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_message_member_array[1] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(command_executor__srv__ExecuteCommand_Request, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers command_executor__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_message_members = {
  "command_executor__srv",  // message namespace
  "ExecuteCommand_Request",  // message name
  1,  // number of fields
  sizeof(command_executor__srv__ExecuteCommand_Request),
  false,  // has_any_key_member_
  command_executor__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_message_member_array,  // message members
  command_executor__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  command_executor__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t command_executor__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_message_type_support_handle = {
  0,
  &command_executor__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_message_members,
  get_message_typesupport_handle_function,
  &command_executor__srv__ExecuteCommand_Request__get_type_hash,
  &command_executor__srv__ExecuteCommand_Request__get_type_description,
  &command_executor__srv__ExecuteCommand_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_command_executor
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_executor, srv, ExecuteCommand_Request)() {
  if (!command_executor__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_message_type_support_handle.typesupport_identifier) {
    command_executor__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &command_executor__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "command_executor/srv/detail/execute_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "command_executor/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "command_executor/srv/detail/execute_command__functions.h"
// already included above
// #include "command_executor/srv/detail/execute_command__struct.h"


// Include directives for member types
// Member `output`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void command_executor__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  command_executor__srv__ExecuteCommand_Response__init(message_memory);
}

void command_executor__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_fini_function(void * message_memory)
{
  command_executor__srv__ExecuteCommand_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember command_executor__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_member_array[2] = {
  {
    "exit_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(command_executor__srv__ExecuteCommand_Response, exit_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "output",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(command_executor__srv__ExecuteCommand_Response, output),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers command_executor__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_members = {
  "command_executor__srv",  // message namespace
  "ExecuteCommand_Response",  // message name
  2,  // number of fields
  sizeof(command_executor__srv__ExecuteCommand_Response),
  false,  // has_any_key_member_
  command_executor__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_member_array,  // message members
  command_executor__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  command_executor__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t command_executor__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_type_support_handle = {
  0,
  &command_executor__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_members,
  get_message_typesupport_handle_function,
  &command_executor__srv__ExecuteCommand_Response__get_type_hash,
  &command_executor__srv__ExecuteCommand_Response__get_type_description,
  &command_executor__srv__ExecuteCommand_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_command_executor
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_executor, srv, ExecuteCommand_Response)() {
  if (!command_executor__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_type_support_handle.typesupport_identifier) {
    command_executor__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &command_executor__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "command_executor/srv/detail/execute_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "command_executor/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "command_executor/srv/detail/execute_command__functions.h"
// already included above
// #include "command_executor/srv/detail/execute_command__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "command_executor/srv/execute_command.h"
// Member `request`
// Member `response`
// already included above
// #include "command_executor/srv/detail/execute_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  command_executor__srv__ExecuteCommand_Event__init(message_memory);
}

void command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_fini_function(void * message_memory)
{
  command_executor__srv__ExecuteCommand_Event__fini(message_memory);
}

size_t command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__size_function__ExecuteCommand_Event__request(
  const void * untyped_member)
{
  const command_executor__srv__ExecuteCommand_Request__Sequence * member =
    (const command_executor__srv__ExecuteCommand_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_const_function__ExecuteCommand_Event__request(
  const void * untyped_member, size_t index)
{
  const command_executor__srv__ExecuteCommand_Request__Sequence * member =
    (const command_executor__srv__ExecuteCommand_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_function__ExecuteCommand_Event__request(
  void * untyped_member, size_t index)
{
  command_executor__srv__ExecuteCommand_Request__Sequence * member =
    (command_executor__srv__ExecuteCommand_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__fetch_function__ExecuteCommand_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const command_executor__srv__ExecuteCommand_Request * item =
    ((const command_executor__srv__ExecuteCommand_Request *)
    command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_const_function__ExecuteCommand_Event__request(untyped_member, index));
  command_executor__srv__ExecuteCommand_Request * value =
    (command_executor__srv__ExecuteCommand_Request *)(untyped_value);
  *value = *item;
}

void command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__assign_function__ExecuteCommand_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  command_executor__srv__ExecuteCommand_Request * item =
    ((command_executor__srv__ExecuteCommand_Request *)
    command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_function__ExecuteCommand_Event__request(untyped_member, index));
  const command_executor__srv__ExecuteCommand_Request * value =
    (const command_executor__srv__ExecuteCommand_Request *)(untyped_value);
  *item = *value;
}

bool command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__resize_function__ExecuteCommand_Event__request(
  void * untyped_member, size_t size)
{
  command_executor__srv__ExecuteCommand_Request__Sequence * member =
    (command_executor__srv__ExecuteCommand_Request__Sequence *)(untyped_member);
  command_executor__srv__ExecuteCommand_Request__Sequence__fini(member);
  return command_executor__srv__ExecuteCommand_Request__Sequence__init(member, size);
}

size_t command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__size_function__ExecuteCommand_Event__response(
  const void * untyped_member)
{
  const command_executor__srv__ExecuteCommand_Response__Sequence * member =
    (const command_executor__srv__ExecuteCommand_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_const_function__ExecuteCommand_Event__response(
  const void * untyped_member, size_t index)
{
  const command_executor__srv__ExecuteCommand_Response__Sequence * member =
    (const command_executor__srv__ExecuteCommand_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_function__ExecuteCommand_Event__response(
  void * untyped_member, size_t index)
{
  command_executor__srv__ExecuteCommand_Response__Sequence * member =
    (command_executor__srv__ExecuteCommand_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__fetch_function__ExecuteCommand_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const command_executor__srv__ExecuteCommand_Response * item =
    ((const command_executor__srv__ExecuteCommand_Response *)
    command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_const_function__ExecuteCommand_Event__response(untyped_member, index));
  command_executor__srv__ExecuteCommand_Response * value =
    (command_executor__srv__ExecuteCommand_Response *)(untyped_value);
  *value = *item;
}

void command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__assign_function__ExecuteCommand_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  command_executor__srv__ExecuteCommand_Response * item =
    ((command_executor__srv__ExecuteCommand_Response *)
    command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_function__ExecuteCommand_Event__response(untyped_member, index));
  const command_executor__srv__ExecuteCommand_Response * value =
    (const command_executor__srv__ExecuteCommand_Response *)(untyped_value);
  *item = *value;
}

bool command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__resize_function__ExecuteCommand_Event__response(
  void * untyped_member, size_t size)
{
  command_executor__srv__ExecuteCommand_Response__Sequence * member =
    (command_executor__srv__ExecuteCommand_Response__Sequence *)(untyped_member);
  command_executor__srv__ExecuteCommand_Response__Sequence__fini(member);
  return command_executor__srv__ExecuteCommand_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(command_executor__srv__ExecuteCommand_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(command_executor__srv__ExecuteCommand_Event, request),  // bytes offset in struct
    NULL,  // default value
    command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__size_function__ExecuteCommand_Event__request,  // size() function pointer
    command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_const_function__ExecuteCommand_Event__request,  // get_const(index) function pointer
    command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_function__ExecuteCommand_Event__request,  // get(index) function pointer
    command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__fetch_function__ExecuteCommand_Event__request,  // fetch(index, &value) function pointer
    command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__assign_function__ExecuteCommand_Event__request,  // assign(index, value) function pointer
    command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__resize_function__ExecuteCommand_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(command_executor__srv__ExecuteCommand_Event, response),  // bytes offset in struct
    NULL,  // default value
    command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__size_function__ExecuteCommand_Event__response,  // size() function pointer
    command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_const_function__ExecuteCommand_Event__response,  // get_const(index) function pointer
    command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_function__ExecuteCommand_Event__response,  // get(index) function pointer
    command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__fetch_function__ExecuteCommand_Event__response,  // fetch(index, &value) function pointer
    command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__assign_function__ExecuteCommand_Event__response,  // assign(index, value) function pointer
    command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__resize_function__ExecuteCommand_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_members = {
  "command_executor__srv",  // message namespace
  "ExecuteCommand_Event",  // message name
  3,  // number of fields
  sizeof(command_executor__srv__ExecuteCommand_Event),
  false,  // has_any_key_member_
  command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_member_array,  // message members
  command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_type_support_handle = {
  0,
  &command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_members,
  get_message_typesupport_handle_function,
  &command_executor__srv__ExecuteCommand_Event__get_type_hash,
  &command_executor__srv__ExecuteCommand_Event__get_type_description,
  &command_executor__srv__ExecuteCommand_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_command_executor
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_executor, srv, ExecuteCommand_Event)() {
  command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_executor, srv, ExecuteCommand_Request)();
  command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_executor, srv, ExecuteCommand_Response)();
  if (!command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_type_support_handle.typesupport_identifier) {
    command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "command_executor/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "command_executor/srv/detail/execute_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers command_executor__srv__detail__execute_command__rosidl_typesupport_introspection_c__ExecuteCommand_service_members = {
  "command_executor__srv",  // service namespace
  "ExecuteCommand",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // command_executor__srv__detail__execute_command__rosidl_typesupport_introspection_c__ExecuteCommand_Request_message_type_support_handle,
  NULL,  // response message
  // command_executor__srv__detail__execute_command__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_type_support_handle
  NULL  // event_message
  // command_executor__srv__detail__execute_command__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_type_support_handle
};


static rosidl_service_type_support_t command_executor__srv__detail__execute_command__rosidl_typesupport_introspection_c__ExecuteCommand_service_type_support_handle = {
  0,
  &command_executor__srv__detail__execute_command__rosidl_typesupport_introspection_c__ExecuteCommand_service_members,
  get_service_typesupport_handle_function,
  &command_executor__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_message_type_support_handle,
  &command_executor__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_type_support_handle,
  &command_executor__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    command_executor,
    srv,
    ExecuteCommand
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    command_executor,
    srv,
    ExecuteCommand
  ),
  &command_executor__srv__ExecuteCommand__get_type_hash,
  &command_executor__srv__ExecuteCommand__get_type_description,
  &command_executor__srv__ExecuteCommand__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_executor, srv, ExecuteCommand_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_executor, srv, ExecuteCommand_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_executor, srv, ExecuteCommand_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_command_executor
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_executor, srv, ExecuteCommand)(void) {
  if (!command_executor__srv__detail__execute_command__rosidl_typesupport_introspection_c__ExecuteCommand_service_type_support_handle.typesupport_identifier) {
    command_executor__srv__detail__execute_command__rosidl_typesupport_introspection_c__ExecuteCommand_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)command_executor__srv__detail__execute_command__rosidl_typesupport_introspection_c__ExecuteCommand_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_executor, srv, ExecuteCommand_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_executor, srv, ExecuteCommand_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, command_executor, srv, ExecuteCommand_Event)()->data;
  }

  return &command_executor__srv__detail__execute_command__rosidl_typesupport_introspection_c__ExecuteCommand_service_type_support_handle;
}
