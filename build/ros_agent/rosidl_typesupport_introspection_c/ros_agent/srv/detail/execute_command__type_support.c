// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_agent:srv/ExecuteCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_agent/srv/detail/execute_command__rosidl_typesupport_introspection_c.h"
#include "ros_agent/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_agent/srv/detail/execute_command__functions.h"
#include "ros_agent/srv/detail/execute_command__struct.h"


// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_agent__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_agent__srv__ExecuteCommand_Request__init(message_memory);
}

void ros_agent__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_fini_function(void * message_memory)
{
  ros_agent__srv__ExecuteCommand_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_agent__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_message_member_array[1] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__srv__ExecuteCommand_Request, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_agent__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_message_members = {
  "ros_agent__srv",  // message namespace
  "ExecuteCommand_Request",  // message name
  1,  // number of fields
  sizeof(ros_agent__srv__ExecuteCommand_Request),
  false,  // has_any_key_member_
  ros_agent__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_message_member_array,  // message members
  ros_agent__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_agent__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_agent__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_message_type_support_handle = {
  0,
  &ros_agent__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_message_members,
  get_message_typesupport_handle_function,
  &ros_agent__srv__ExecuteCommand_Request__get_type_hash,
  &ros_agent__srv__ExecuteCommand_Request__get_type_description,
  &ros_agent__srv__ExecuteCommand_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_agent
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, srv, ExecuteCommand_Request)() {
  if (!ros_agent__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_message_type_support_handle.typesupport_identifier) {
    ros_agent__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_agent__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_agent/srv/detail/execute_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_agent/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_agent/srv/detail/execute_command__functions.h"
// already included above
// #include "ros_agent/srv/detail/execute_command__struct.h"


// Include directives for member types
// Member `output`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_agent__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_agent__srv__ExecuteCommand_Response__init(message_memory);
}

void ros_agent__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_fini_function(void * message_memory)
{
  ros_agent__srv__ExecuteCommand_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_agent__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_member_array[2] = {
  {
    "exit_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__srv__ExecuteCommand_Response, exit_code),  // bytes offset in struct
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
    offsetof(ros_agent__srv__ExecuteCommand_Response, output),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_agent__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_members = {
  "ros_agent__srv",  // message namespace
  "ExecuteCommand_Response",  // message name
  2,  // number of fields
  sizeof(ros_agent__srv__ExecuteCommand_Response),
  false,  // has_any_key_member_
  ros_agent__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_member_array,  // message members
  ros_agent__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_agent__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_agent__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_type_support_handle = {
  0,
  &ros_agent__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_members,
  get_message_typesupport_handle_function,
  &ros_agent__srv__ExecuteCommand_Response__get_type_hash,
  &ros_agent__srv__ExecuteCommand_Response__get_type_description,
  &ros_agent__srv__ExecuteCommand_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_agent
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, srv, ExecuteCommand_Response)() {
  if (!ros_agent__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_type_support_handle.typesupport_identifier) {
    ros_agent__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_agent__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_agent/srv/detail/execute_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_agent/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_agent/srv/detail/execute_command__functions.h"
// already included above
// #include "ros_agent/srv/detail/execute_command__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "ros_agent/srv/execute_command.h"
// Member `request`
// Member `response`
// already included above
// #include "ros_agent/srv/detail/execute_command__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_agent__srv__ExecuteCommand_Event__init(message_memory);
}

void ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_fini_function(void * message_memory)
{
  ros_agent__srv__ExecuteCommand_Event__fini(message_memory);
}

size_t ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__size_function__ExecuteCommand_Event__request(
  const void * untyped_member)
{
  const ros_agent__srv__ExecuteCommand_Request__Sequence * member =
    (const ros_agent__srv__ExecuteCommand_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_const_function__ExecuteCommand_Event__request(
  const void * untyped_member, size_t index)
{
  const ros_agent__srv__ExecuteCommand_Request__Sequence * member =
    (const ros_agent__srv__ExecuteCommand_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_function__ExecuteCommand_Event__request(
  void * untyped_member, size_t index)
{
  ros_agent__srv__ExecuteCommand_Request__Sequence * member =
    (ros_agent__srv__ExecuteCommand_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__fetch_function__ExecuteCommand_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_agent__srv__ExecuteCommand_Request * item =
    ((const ros_agent__srv__ExecuteCommand_Request *)
    ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_const_function__ExecuteCommand_Event__request(untyped_member, index));
  ros_agent__srv__ExecuteCommand_Request * value =
    (ros_agent__srv__ExecuteCommand_Request *)(untyped_value);
  *value = *item;
}

void ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__assign_function__ExecuteCommand_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_agent__srv__ExecuteCommand_Request * item =
    ((ros_agent__srv__ExecuteCommand_Request *)
    ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_function__ExecuteCommand_Event__request(untyped_member, index));
  const ros_agent__srv__ExecuteCommand_Request * value =
    (const ros_agent__srv__ExecuteCommand_Request *)(untyped_value);
  *item = *value;
}

bool ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__resize_function__ExecuteCommand_Event__request(
  void * untyped_member, size_t size)
{
  ros_agent__srv__ExecuteCommand_Request__Sequence * member =
    (ros_agent__srv__ExecuteCommand_Request__Sequence *)(untyped_member);
  ros_agent__srv__ExecuteCommand_Request__Sequence__fini(member);
  return ros_agent__srv__ExecuteCommand_Request__Sequence__init(member, size);
}

size_t ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__size_function__ExecuteCommand_Event__response(
  const void * untyped_member)
{
  const ros_agent__srv__ExecuteCommand_Response__Sequence * member =
    (const ros_agent__srv__ExecuteCommand_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_const_function__ExecuteCommand_Event__response(
  const void * untyped_member, size_t index)
{
  const ros_agent__srv__ExecuteCommand_Response__Sequence * member =
    (const ros_agent__srv__ExecuteCommand_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_function__ExecuteCommand_Event__response(
  void * untyped_member, size_t index)
{
  ros_agent__srv__ExecuteCommand_Response__Sequence * member =
    (ros_agent__srv__ExecuteCommand_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__fetch_function__ExecuteCommand_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_agent__srv__ExecuteCommand_Response * item =
    ((const ros_agent__srv__ExecuteCommand_Response *)
    ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_const_function__ExecuteCommand_Event__response(untyped_member, index));
  ros_agent__srv__ExecuteCommand_Response * value =
    (ros_agent__srv__ExecuteCommand_Response *)(untyped_value);
  *value = *item;
}

void ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__assign_function__ExecuteCommand_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_agent__srv__ExecuteCommand_Response * item =
    ((ros_agent__srv__ExecuteCommand_Response *)
    ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_function__ExecuteCommand_Event__response(untyped_member, index));
  const ros_agent__srv__ExecuteCommand_Response * value =
    (const ros_agent__srv__ExecuteCommand_Response *)(untyped_value);
  *item = *value;
}

bool ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__resize_function__ExecuteCommand_Event__response(
  void * untyped_member, size_t size)
{
  ros_agent__srv__ExecuteCommand_Response__Sequence * member =
    (ros_agent__srv__ExecuteCommand_Response__Sequence *)(untyped_member);
  ros_agent__srv__ExecuteCommand_Response__Sequence__fini(member);
  return ros_agent__srv__ExecuteCommand_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__srv__ExecuteCommand_Event, info),  // bytes offset in struct
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
    offsetof(ros_agent__srv__ExecuteCommand_Event, request),  // bytes offset in struct
    NULL,  // default value
    ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__size_function__ExecuteCommand_Event__request,  // size() function pointer
    ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_const_function__ExecuteCommand_Event__request,  // get_const(index) function pointer
    ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_function__ExecuteCommand_Event__request,  // get(index) function pointer
    ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__fetch_function__ExecuteCommand_Event__request,  // fetch(index, &value) function pointer
    ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__assign_function__ExecuteCommand_Event__request,  // assign(index, value) function pointer
    ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__resize_function__ExecuteCommand_Event__request  // resize(index) function pointer
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
    offsetof(ros_agent__srv__ExecuteCommand_Event, response),  // bytes offset in struct
    NULL,  // default value
    ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__size_function__ExecuteCommand_Event__response,  // size() function pointer
    ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_const_function__ExecuteCommand_Event__response,  // get_const(index) function pointer
    ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__get_function__ExecuteCommand_Event__response,  // get(index) function pointer
    ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__fetch_function__ExecuteCommand_Event__response,  // fetch(index, &value) function pointer
    ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__assign_function__ExecuteCommand_Event__response,  // assign(index, value) function pointer
    ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__resize_function__ExecuteCommand_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_members = {
  "ros_agent__srv",  // message namespace
  "ExecuteCommand_Event",  // message name
  3,  // number of fields
  sizeof(ros_agent__srv__ExecuteCommand_Event),
  false,  // has_any_key_member_
  ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_member_array,  // message members
  ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_type_support_handle = {
  0,
  &ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_members,
  get_message_typesupport_handle_function,
  &ros_agent__srv__ExecuteCommand_Event__get_type_hash,
  &ros_agent__srv__ExecuteCommand_Event__get_type_description,
  &ros_agent__srv__ExecuteCommand_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_agent
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, srv, ExecuteCommand_Event)() {
  ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, srv, ExecuteCommand_Request)();
  ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, srv, ExecuteCommand_Response)();
  if (!ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_type_support_handle.typesupport_identifier) {
    ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros_agent/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ros_agent/srv/detail/execute_command__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ros_agent__srv__detail__execute_command__rosidl_typesupport_introspection_c__ExecuteCommand_service_members = {
  "ros_agent__srv",  // service namespace
  "ExecuteCommand",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // ros_agent__srv__detail__execute_command__rosidl_typesupport_introspection_c__ExecuteCommand_Request_message_type_support_handle,
  NULL,  // response message
  // ros_agent__srv__detail__execute_command__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_type_support_handle
  NULL  // event_message
  // ros_agent__srv__detail__execute_command__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_type_support_handle
};


static rosidl_service_type_support_t ros_agent__srv__detail__execute_command__rosidl_typesupport_introspection_c__ExecuteCommand_service_type_support_handle = {
  0,
  &ros_agent__srv__detail__execute_command__rosidl_typesupport_introspection_c__ExecuteCommand_service_members,
  get_service_typesupport_handle_function,
  &ros_agent__srv__ExecuteCommand_Request__rosidl_typesupport_introspection_c__ExecuteCommand_Request_message_type_support_handle,
  &ros_agent__srv__ExecuteCommand_Response__rosidl_typesupport_introspection_c__ExecuteCommand_Response_message_type_support_handle,
  &ros_agent__srv__ExecuteCommand_Event__rosidl_typesupport_introspection_c__ExecuteCommand_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ros_agent,
    srv,
    ExecuteCommand
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ros_agent,
    srv,
    ExecuteCommand
  ),
  &ros_agent__srv__ExecuteCommand__get_type_hash,
  &ros_agent__srv__ExecuteCommand__get_type_description,
  &ros_agent__srv__ExecuteCommand__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, srv, ExecuteCommand_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, srv, ExecuteCommand_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, srv, ExecuteCommand_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_agent
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, srv, ExecuteCommand)(void) {
  if (!ros_agent__srv__detail__execute_command__rosidl_typesupport_introspection_c__ExecuteCommand_service_type_support_handle.typesupport_identifier) {
    ros_agent__srv__detail__execute_command__rosidl_typesupport_introspection_c__ExecuteCommand_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ros_agent__srv__detail__execute_command__rosidl_typesupport_introspection_c__ExecuteCommand_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, srv, ExecuteCommand_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, srv, ExecuteCommand_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, srv, ExecuteCommand_Event)()->data;
  }

  return &ros_agent__srv__detail__execute_command__rosidl_typesupport_introspection_c__ExecuteCommand_service_type_support_handle;
}
