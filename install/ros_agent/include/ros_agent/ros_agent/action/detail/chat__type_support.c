// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_agent:action/Chat.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_agent/action/detail/chat__rosidl_typesupport_introspection_c.h"
#include "ros_agent/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_agent/action/detail/chat__functions.h"
#include "ros_agent/action/detail/chat__struct.h"


// Include directives for member types
// Member `messages`
#include "ros_agent/msg/chat_message.h"
// Member `messages`
#include "ros_agent/msg/detail/chat_message__rosidl_typesupport_introspection_c.h"
// Member `truncation_strategy`
// Member `reasoning_effort`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__Chat_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_agent__action__Chat_Goal__init(message_memory);
}

void ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__Chat_Goal_fini_function(void * message_memory)
{
  ros_agent__action__Chat_Goal__fini(message_memory);
}

size_t ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__size_function__Chat_Goal__messages(
  const void * untyped_member)
{
  const ros_agent__msg__ChatMessage__Sequence * member =
    (const ros_agent__msg__ChatMessage__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__get_const_function__Chat_Goal__messages(
  const void * untyped_member, size_t index)
{
  const ros_agent__msg__ChatMessage__Sequence * member =
    (const ros_agent__msg__ChatMessage__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__get_function__Chat_Goal__messages(
  void * untyped_member, size_t index)
{
  ros_agent__msg__ChatMessage__Sequence * member =
    (ros_agent__msg__ChatMessage__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__fetch_function__Chat_Goal__messages(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_agent__msg__ChatMessage * item =
    ((const ros_agent__msg__ChatMessage *)
    ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__get_const_function__Chat_Goal__messages(untyped_member, index));
  ros_agent__msg__ChatMessage * value =
    (ros_agent__msg__ChatMessage *)(untyped_value);
  *value = *item;
}

void ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__assign_function__Chat_Goal__messages(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_agent__msg__ChatMessage * item =
    ((ros_agent__msg__ChatMessage *)
    ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__get_function__Chat_Goal__messages(untyped_member, index));
  const ros_agent__msg__ChatMessage * value =
    (const ros_agent__msg__ChatMessage *)(untyped_value);
  *item = *value;
}

bool ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__resize_function__Chat_Goal__messages(
  void * untyped_member, size_t size)
{
  ros_agent__msg__ChatMessage__Sequence * member =
    (ros_agent__msg__ChatMessage__Sequence *)(untyped_member);
  ros_agent__msg__ChatMessage__Sequence__fini(member);
  return ros_agent__msg__ChatMessage__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__Chat_Goal_message_member_array[5] = {
  {
    "messages",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_Goal, messages),  // bytes offset in struct
    NULL,  // default value
    ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__size_function__Chat_Goal__messages,  // size() function pointer
    ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__get_const_function__Chat_Goal__messages,  // get_const(index) function pointer
    ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__get_function__Chat_Goal__messages,  // get(index) function pointer
    ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__fetch_function__Chat_Goal__messages,  // fetch(index, &value) function pointer
    ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__assign_function__Chat_Goal__messages,  // assign(index, value) function pointer
    ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__resize_function__Chat_Goal__messages  // resize(index) function pointer
  },
  {
    "stream",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_Goal, stream),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_context_tokens",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_Goal, max_context_tokens),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "truncation_strategy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_Goal, truncation_strategy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reasoning_effort",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_Goal, reasoning_effort),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__Chat_Goal_message_members = {
  "ros_agent__action",  // message namespace
  "Chat_Goal",  // message name
  5,  // number of fields
  sizeof(ros_agent__action__Chat_Goal),
  false,  // has_any_key_member_
  ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__Chat_Goal_message_member_array,  // message members
  ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__Chat_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__Chat_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__Chat_Goal_message_type_support_handle = {
  0,
  &ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__Chat_Goal_message_members,
  get_message_typesupport_handle_function,
  &ros_agent__action__Chat_Goal__get_type_hash,
  &ros_agent__action__Chat_Goal__get_type_description,
  &ros_agent__action__Chat_Goal__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_agent
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_Goal)() {
  ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__Chat_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, msg, ChatMessage)();
  if (!ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__Chat_Goal_message_type_support_handle.typesupport_identifier) {
    ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__Chat_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_agent__action__Chat_Goal__rosidl_typesupport_introspection_c__Chat_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_agent/action/detail/chat__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_agent/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_agent/action/detail/chat__functions.h"
// already included above
// #include "ros_agent/action/detail/chat__struct.h"


// Include directives for member types
// Member `content`
// Member `reasoning_content`
// Member `error_msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `updated_messages`
// already included above
// #include "ros_agent/msg/chat_message.h"
// Member `updated_messages`
// already included above
// #include "ros_agent/msg/detail/chat_message__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__Chat_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_agent__action__Chat_Result__init(message_memory);
}

void ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__Chat_Result_fini_function(void * message_memory)
{
  ros_agent__action__Chat_Result__fini(message_memory);
}

size_t ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__size_function__Chat_Result__updated_messages(
  const void * untyped_member)
{
  const ros_agent__msg__ChatMessage__Sequence * member =
    (const ros_agent__msg__ChatMessage__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__get_const_function__Chat_Result__updated_messages(
  const void * untyped_member, size_t index)
{
  const ros_agent__msg__ChatMessage__Sequence * member =
    (const ros_agent__msg__ChatMessage__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__get_function__Chat_Result__updated_messages(
  void * untyped_member, size_t index)
{
  ros_agent__msg__ChatMessage__Sequence * member =
    (ros_agent__msg__ChatMessage__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__fetch_function__Chat_Result__updated_messages(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_agent__msg__ChatMessage * item =
    ((const ros_agent__msg__ChatMessage *)
    ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__get_const_function__Chat_Result__updated_messages(untyped_member, index));
  ros_agent__msg__ChatMessage * value =
    (ros_agent__msg__ChatMessage *)(untyped_value);
  *value = *item;
}

void ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__assign_function__Chat_Result__updated_messages(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_agent__msg__ChatMessage * item =
    ((ros_agent__msg__ChatMessage *)
    ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__get_function__Chat_Result__updated_messages(untyped_member, index));
  const ros_agent__msg__ChatMessage * value =
    (const ros_agent__msg__ChatMessage *)(untyped_value);
  *item = *value;
}

bool ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__resize_function__Chat_Result__updated_messages(
  void * untyped_member, size_t size)
{
  ros_agent__msg__ChatMessage__Sequence * member =
    (ros_agent__msg__ChatMessage__Sequence *)(untyped_member);
  ros_agent__msg__ChatMessage__Sequence__fini(member);
  return ros_agent__msg__ChatMessage__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__Chat_Result_message_member_array[8] = {
  {
    "content",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_Result, content),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reasoning_content",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_Result, reasoning_content),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "updated_messages",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_Result, updated_messages),  // bytes offset in struct
    NULL,  // default value
    ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__size_function__Chat_Result__updated_messages,  // size() function pointer
    ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__get_const_function__Chat_Result__updated_messages,  // get_const(index) function pointer
    ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__get_function__Chat_Result__updated_messages,  // get(index) function pointer
    ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__fetch_function__Chat_Result__updated_messages,  // fetch(index, &value) function pointer
    ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__assign_function__Chat_Result__updated_messages,  // assign(index, value) function pointer
    ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__resize_function__Chat_Result__updated_messages  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_Result, error_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "prompt_tokens",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_Result, prompt_tokens),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "completion_tokens",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_Result, completion_tokens),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_tokens",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_Result, total_tokens),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__Chat_Result_message_members = {
  "ros_agent__action",  // message namespace
  "Chat_Result",  // message name
  8,  // number of fields
  sizeof(ros_agent__action__Chat_Result),
  false,  // has_any_key_member_
  ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__Chat_Result_message_member_array,  // message members
  ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__Chat_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__Chat_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__Chat_Result_message_type_support_handle = {
  0,
  &ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__Chat_Result_message_members,
  get_message_typesupport_handle_function,
  &ros_agent__action__Chat_Result__get_type_hash,
  &ros_agent__action__Chat_Result__get_type_description,
  &ros_agent__action__Chat_Result__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_agent
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_Result)() {
  ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__Chat_Result_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, msg, ChatMessage)();
  if (!ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__Chat_Result_message_type_support_handle.typesupport_identifier) {
    ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__Chat_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_agent__action__Chat_Result__rosidl_typesupport_introspection_c__Chat_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_agent/action/detail/chat__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_agent/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_agent/action/detail/chat__functions.h"
// already included above
// #include "ros_agent/action/detail/chat__struct.h"


// Include directives for member types
// Member `partial_content`
// Member `partial_reasoning`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_agent__action__Chat_Feedback__rosidl_typesupport_introspection_c__Chat_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_agent__action__Chat_Feedback__init(message_memory);
}

void ros_agent__action__Chat_Feedback__rosidl_typesupport_introspection_c__Chat_Feedback_fini_function(void * message_memory)
{
  ros_agent__action__Chat_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_agent__action__Chat_Feedback__rosidl_typesupport_introspection_c__Chat_Feedback_message_member_array[2] = {
  {
    "partial_content",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_Feedback, partial_content),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "partial_reasoning",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_Feedback, partial_reasoning),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_agent__action__Chat_Feedback__rosidl_typesupport_introspection_c__Chat_Feedback_message_members = {
  "ros_agent__action",  // message namespace
  "Chat_Feedback",  // message name
  2,  // number of fields
  sizeof(ros_agent__action__Chat_Feedback),
  false,  // has_any_key_member_
  ros_agent__action__Chat_Feedback__rosidl_typesupport_introspection_c__Chat_Feedback_message_member_array,  // message members
  ros_agent__action__Chat_Feedback__rosidl_typesupport_introspection_c__Chat_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_agent__action__Chat_Feedback__rosidl_typesupport_introspection_c__Chat_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_agent__action__Chat_Feedback__rosidl_typesupport_introspection_c__Chat_Feedback_message_type_support_handle = {
  0,
  &ros_agent__action__Chat_Feedback__rosidl_typesupport_introspection_c__Chat_Feedback_message_members,
  get_message_typesupport_handle_function,
  &ros_agent__action__Chat_Feedback__get_type_hash,
  &ros_agent__action__Chat_Feedback__get_type_description,
  &ros_agent__action__Chat_Feedback__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_agent
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_Feedback)() {
  if (!ros_agent__action__Chat_Feedback__rosidl_typesupport_introspection_c__Chat_Feedback_message_type_support_handle.typesupport_identifier) {
    ros_agent__action__Chat_Feedback__rosidl_typesupport_introspection_c__Chat_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_agent__action__Chat_Feedback__rosidl_typesupport_introspection_c__Chat_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_agent/action/detail/chat__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_agent/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_agent/action/detail/chat__functions.h"
// already included above
// #include "ros_agent/action/detail/chat__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "ros_agent/action/chat.h"
// Member `goal`
// already included above
// #include "ros_agent/action/detail/chat__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_agent__action__Chat_SendGoal_Request__rosidl_typesupport_introspection_c__Chat_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_agent__action__Chat_SendGoal_Request__init(message_memory);
}

void ros_agent__action__Chat_SendGoal_Request__rosidl_typesupport_introspection_c__Chat_SendGoal_Request_fini_function(void * message_memory)
{
  ros_agent__action__Chat_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_agent__action__Chat_SendGoal_Request__rosidl_typesupport_introspection_c__Chat_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_agent__action__Chat_SendGoal_Request__rosidl_typesupport_introspection_c__Chat_SendGoal_Request_message_members = {
  "ros_agent__action",  // message namespace
  "Chat_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(ros_agent__action__Chat_SendGoal_Request),
  false,  // has_any_key_member_
  ros_agent__action__Chat_SendGoal_Request__rosidl_typesupport_introspection_c__Chat_SendGoal_Request_message_member_array,  // message members
  ros_agent__action__Chat_SendGoal_Request__rosidl_typesupport_introspection_c__Chat_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_agent__action__Chat_SendGoal_Request__rosidl_typesupport_introspection_c__Chat_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_agent__action__Chat_SendGoal_Request__rosidl_typesupport_introspection_c__Chat_SendGoal_Request_message_type_support_handle = {
  0,
  &ros_agent__action__Chat_SendGoal_Request__rosidl_typesupport_introspection_c__Chat_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &ros_agent__action__Chat_SendGoal_Request__get_type_hash,
  &ros_agent__action__Chat_SendGoal_Request__get_type_description,
  &ros_agent__action__Chat_SendGoal_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_agent
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_SendGoal_Request)() {
  ros_agent__action__Chat_SendGoal_Request__rosidl_typesupport_introspection_c__Chat_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ros_agent__action__Chat_SendGoal_Request__rosidl_typesupport_introspection_c__Chat_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_Goal)();
  if (!ros_agent__action__Chat_SendGoal_Request__rosidl_typesupport_introspection_c__Chat_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    ros_agent__action__Chat_SendGoal_Request__rosidl_typesupport_introspection_c__Chat_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_agent__action__Chat_SendGoal_Request__rosidl_typesupport_introspection_c__Chat_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_agent/action/detail/chat__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_agent/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_agent/action/detail/chat__functions.h"
// already included above
// #include "ros_agent/action/detail/chat__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_agent__action__Chat_SendGoal_Response__rosidl_typesupport_introspection_c__Chat_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_agent__action__Chat_SendGoal_Response__init(message_memory);
}

void ros_agent__action__Chat_SendGoal_Response__rosidl_typesupport_introspection_c__Chat_SendGoal_Response_fini_function(void * message_memory)
{
  ros_agent__action__Chat_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_agent__action__Chat_SendGoal_Response__rosidl_typesupport_introspection_c__Chat_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_agent__action__Chat_SendGoal_Response__rosidl_typesupport_introspection_c__Chat_SendGoal_Response_message_members = {
  "ros_agent__action",  // message namespace
  "Chat_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(ros_agent__action__Chat_SendGoal_Response),
  false,  // has_any_key_member_
  ros_agent__action__Chat_SendGoal_Response__rosidl_typesupport_introspection_c__Chat_SendGoal_Response_message_member_array,  // message members
  ros_agent__action__Chat_SendGoal_Response__rosidl_typesupport_introspection_c__Chat_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_agent__action__Chat_SendGoal_Response__rosidl_typesupport_introspection_c__Chat_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_agent__action__Chat_SendGoal_Response__rosidl_typesupport_introspection_c__Chat_SendGoal_Response_message_type_support_handle = {
  0,
  &ros_agent__action__Chat_SendGoal_Response__rosidl_typesupport_introspection_c__Chat_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &ros_agent__action__Chat_SendGoal_Response__get_type_hash,
  &ros_agent__action__Chat_SendGoal_Response__get_type_description,
  &ros_agent__action__Chat_SendGoal_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_agent
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_SendGoal_Response)() {
  ros_agent__action__Chat_SendGoal_Response__rosidl_typesupport_introspection_c__Chat_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!ros_agent__action__Chat_SendGoal_Response__rosidl_typesupport_introspection_c__Chat_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    ros_agent__action__Chat_SendGoal_Response__rosidl_typesupport_introspection_c__Chat_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_agent__action__Chat_SendGoal_Response__rosidl_typesupport_introspection_c__Chat_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_agent/action/detail/chat__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_agent/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_agent/action/detail/chat__functions.h"
// already included above
// #include "ros_agent/action/detail/chat__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "ros_agent/action/chat.h"
// Member `request`
// Member `response`
// already included above
// #include "ros_agent/action/detail/chat__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__Chat_SendGoal_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_agent__action__Chat_SendGoal_Event__init(message_memory);
}

void ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__Chat_SendGoal_Event_fini_function(void * message_memory)
{
  ros_agent__action__Chat_SendGoal_Event__fini(message_memory);
}

size_t ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__Chat_SendGoal_Event__request(
  const void * untyped_member)
{
  const ros_agent__action__Chat_SendGoal_Request__Sequence * member =
    (const ros_agent__action__Chat_SendGoal_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Chat_SendGoal_Event__request(
  const void * untyped_member, size_t index)
{
  const ros_agent__action__Chat_SendGoal_Request__Sequence * member =
    (const ros_agent__action__Chat_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Chat_SendGoal_Event__request(
  void * untyped_member, size_t index)
{
  ros_agent__action__Chat_SendGoal_Request__Sequence * member =
    (ros_agent__action__Chat_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__Chat_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_agent__action__Chat_SendGoal_Request * item =
    ((const ros_agent__action__Chat_SendGoal_Request *)
    ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Chat_SendGoal_Event__request(untyped_member, index));
  ros_agent__action__Chat_SendGoal_Request * value =
    (ros_agent__action__Chat_SendGoal_Request *)(untyped_value);
  *value = *item;
}

void ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__Chat_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_agent__action__Chat_SendGoal_Request * item =
    ((ros_agent__action__Chat_SendGoal_Request *)
    ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Chat_SendGoal_Event__request(untyped_member, index));
  const ros_agent__action__Chat_SendGoal_Request * value =
    (const ros_agent__action__Chat_SendGoal_Request *)(untyped_value);
  *item = *value;
}

bool ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__Chat_SendGoal_Event__request(
  void * untyped_member, size_t size)
{
  ros_agent__action__Chat_SendGoal_Request__Sequence * member =
    (ros_agent__action__Chat_SendGoal_Request__Sequence *)(untyped_member);
  ros_agent__action__Chat_SendGoal_Request__Sequence__fini(member);
  return ros_agent__action__Chat_SendGoal_Request__Sequence__init(member, size);
}

size_t ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__Chat_SendGoal_Event__response(
  const void * untyped_member)
{
  const ros_agent__action__Chat_SendGoal_Response__Sequence * member =
    (const ros_agent__action__Chat_SendGoal_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Chat_SendGoal_Event__response(
  const void * untyped_member, size_t index)
{
  const ros_agent__action__Chat_SendGoal_Response__Sequence * member =
    (const ros_agent__action__Chat_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Chat_SendGoal_Event__response(
  void * untyped_member, size_t index)
{
  ros_agent__action__Chat_SendGoal_Response__Sequence * member =
    (ros_agent__action__Chat_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__Chat_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_agent__action__Chat_SendGoal_Response * item =
    ((const ros_agent__action__Chat_SendGoal_Response *)
    ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Chat_SendGoal_Event__response(untyped_member, index));
  ros_agent__action__Chat_SendGoal_Response * value =
    (ros_agent__action__Chat_SendGoal_Response *)(untyped_value);
  *value = *item;
}

void ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__Chat_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_agent__action__Chat_SendGoal_Response * item =
    ((ros_agent__action__Chat_SendGoal_Response *)
    ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Chat_SendGoal_Event__response(untyped_member, index));
  const ros_agent__action__Chat_SendGoal_Response * value =
    (const ros_agent__action__Chat_SendGoal_Response *)(untyped_value);
  *item = *value;
}

bool ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__Chat_SendGoal_Event__response(
  void * untyped_member, size_t size)
{
  ros_agent__action__Chat_SendGoal_Response__Sequence * member =
    (ros_agent__action__Chat_SendGoal_Response__Sequence *)(untyped_member);
  ros_agent__action__Chat_SendGoal_Response__Sequence__fini(member);
  return ros_agent__action__Chat_SendGoal_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__Chat_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_SendGoal_Event, info),  // bytes offset in struct
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
    offsetof(ros_agent__action__Chat_SendGoal_Event, request),  // bytes offset in struct
    NULL,  // default value
    ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__Chat_SendGoal_Event__request,  // size() function pointer
    ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Chat_SendGoal_Event__request,  // get_const(index) function pointer
    ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Chat_SendGoal_Event__request,  // get(index) function pointer
    ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__Chat_SendGoal_Event__request,  // fetch(index, &value) function pointer
    ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__Chat_SendGoal_Event__request,  // assign(index, value) function pointer
    ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__Chat_SendGoal_Event__request  // resize(index) function pointer
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
    offsetof(ros_agent__action__Chat_SendGoal_Event, response),  // bytes offset in struct
    NULL,  // default value
    ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__Chat_SendGoal_Event__response,  // size() function pointer
    ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__Chat_SendGoal_Event__response,  // get_const(index) function pointer
    ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__Chat_SendGoal_Event__response,  // get(index) function pointer
    ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__Chat_SendGoal_Event__response,  // fetch(index, &value) function pointer
    ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__Chat_SendGoal_Event__response,  // assign(index, value) function pointer
    ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__Chat_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__Chat_SendGoal_Event_message_members = {
  "ros_agent__action",  // message namespace
  "Chat_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(ros_agent__action__Chat_SendGoal_Event),
  false,  // has_any_key_member_
  ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__Chat_SendGoal_Event_message_member_array,  // message members
  ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__Chat_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__Chat_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__Chat_SendGoal_Event_message_type_support_handle = {
  0,
  &ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__Chat_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &ros_agent__action__Chat_SendGoal_Event__get_type_hash,
  &ros_agent__action__Chat_SendGoal_Event__get_type_description,
  &ros_agent__action__Chat_SendGoal_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_agent
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_SendGoal_Event)() {
  ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__Chat_SendGoal_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__Chat_SendGoal_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_SendGoal_Request)();
  ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__Chat_SendGoal_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_SendGoal_Response)();
  if (!ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__Chat_SendGoal_Event_message_type_support_handle.typesupport_identifier) {
    ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__Chat_SendGoal_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__Chat_SendGoal_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros_agent/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ros_agent/action/detail/chat__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ros_agent__action__detail__chat__rosidl_typesupport_introspection_c__Chat_SendGoal_service_members = {
  "ros_agent__action",  // service namespace
  "Chat_SendGoal",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // ros_agent__action__detail__chat__rosidl_typesupport_introspection_c__Chat_SendGoal_Request_message_type_support_handle,
  NULL,  // response message
  // ros_agent__action__detail__chat__rosidl_typesupport_introspection_c__Chat_SendGoal_Response_message_type_support_handle
  NULL  // event_message
  // ros_agent__action__detail__chat__rosidl_typesupport_introspection_c__Chat_SendGoal_Response_message_type_support_handle
};


static rosidl_service_type_support_t ros_agent__action__detail__chat__rosidl_typesupport_introspection_c__Chat_SendGoal_service_type_support_handle = {
  0,
  &ros_agent__action__detail__chat__rosidl_typesupport_introspection_c__Chat_SendGoal_service_members,
  get_service_typesupport_handle_function,
  &ros_agent__action__Chat_SendGoal_Request__rosidl_typesupport_introspection_c__Chat_SendGoal_Request_message_type_support_handle,
  &ros_agent__action__Chat_SendGoal_Response__rosidl_typesupport_introspection_c__Chat_SendGoal_Response_message_type_support_handle,
  &ros_agent__action__Chat_SendGoal_Event__rosidl_typesupport_introspection_c__Chat_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ros_agent,
    action,
    Chat_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ros_agent,
    action,
    Chat_SendGoal
  ),
  &ros_agent__action__Chat_SendGoal__get_type_hash,
  &ros_agent__action__Chat_SendGoal__get_type_description,
  &ros_agent__action__Chat_SendGoal__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_SendGoal_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_SendGoal_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_SendGoal_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_agent
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_SendGoal)(void) {
  if (!ros_agent__action__detail__chat__rosidl_typesupport_introspection_c__Chat_SendGoal_service_type_support_handle.typesupport_identifier) {
    ros_agent__action__detail__chat__rosidl_typesupport_introspection_c__Chat_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ros_agent__action__detail__chat__rosidl_typesupport_introspection_c__Chat_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_SendGoal_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_SendGoal_Event)()->data;
  }

  return &ros_agent__action__detail__chat__rosidl_typesupport_introspection_c__Chat_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "ros_agent/action/detail/chat__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_agent/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_agent/action/detail/chat__functions.h"
// already included above
// #include "ros_agent/action/detail/chat__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_agent__action__Chat_GetResult_Request__rosidl_typesupport_introspection_c__Chat_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_agent__action__Chat_GetResult_Request__init(message_memory);
}

void ros_agent__action__Chat_GetResult_Request__rosidl_typesupport_introspection_c__Chat_GetResult_Request_fini_function(void * message_memory)
{
  ros_agent__action__Chat_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_agent__action__Chat_GetResult_Request__rosidl_typesupport_introspection_c__Chat_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_agent__action__Chat_GetResult_Request__rosidl_typesupport_introspection_c__Chat_GetResult_Request_message_members = {
  "ros_agent__action",  // message namespace
  "Chat_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(ros_agent__action__Chat_GetResult_Request),
  false,  // has_any_key_member_
  ros_agent__action__Chat_GetResult_Request__rosidl_typesupport_introspection_c__Chat_GetResult_Request_message_member_array,  // message members
  ros_agent__action__Chat_GetResult_Request__rosidl_typesupport_introspection_c__Chat_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_agent__action__Chat_GetResult_Request__rosidl_typesupport_introspection_c__Chat_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_agent__action__Chat_GetResult_Request__rosidl_typesupport_introspection_c__Chat_GetResult_Request_message_type_support_handle = {
  0,
  &ros_agent__action__Chat_GetResult_Request__rosidl_typesupport_introspection_c__Chat_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &ros_agent__action__Chat_GetResult_Request__get_type_hash,
  &ros_agent__action__Chat_GetResult_Request__get_type_description,
  &ros_agent__action__Chat_GetResult_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_agent
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_GetResult_Request)() {
  ros_agent__action__Chat_GetResult_Request__rosidl_typesupport_introspection_c__Chat_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!ros_agent__action__Chat_GetResult_Request__rosidl_typesupport_introspection_c__Chat_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    ros_agent__action__Chat_GetResult_Request__rosidl_typesupport_introspection_c__Chat_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_agent__action__Chat_GetResult_Request__rosidl_typesupport_introspection_c__Chat_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_agent/action/detail/chat__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_agent/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_agent/action/detail/chat__functions.h"
// already included above
// #include "ros_agent/action/detail/chat__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "ros_agent/action/chat.h"
// Member `result`
// already included above
// #include "ros_agent/action/detail/chat__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_agent__action__Chat_GetResult_Response__rosidl_typesupport_introspection_c__Chat_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_agent__action__Chat_GetResult_Response__init(message_memory);
}

void ros_agent__action__Chat_GetResult_Response__rosidl_typesupport_introspection_c__Chat_GetResult_Response_fini_function(void * message_memory)
{
  ros_agent__action__Chat_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_agent__action__Chat_GetResult_Response__rosidl_typesupport_introspection_c__Chat_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_agent__action__Chat_GetResult_Response__rosidl_typesupport_introspection_c__Chat_GetResult_Response_message_members = {
  "ros_agent__action",  // message namespace
  "Chat_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(ros_agent__action__Chat_GetResult_Response),
  false,  // has_any_key_member_
  ros_agent__action__Chat_GetResult_Response__rosidl_typesupport_introspection_c__Chat_GetResult_Response_message_member_array,  // message members
  ros_agent__action__Chat_GetResult_Response__rosidl_typesupport_introspection_c__Chat_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_agent__action__Chat_GetResult_Response__rosidl_typesupport_introspection_c__Chat_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_agent__action__Chat_GetResult_Response__rosidl_typesupport_introspection_c__Chat_GetResult_Response_message_type_support_handle = {
  0,
  &ros_agent__action__Chat_GetResult_Response__rosidl_typesupport_introspection_c__Chat_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &ros_agent__action__Chat_GetResult_Response__get_type_hash,
  &ros_agent__action__Chat_GetResult_Response__get_type_description,
  &ros_agent__action__Chat_GetResult_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_agent
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_GetResult_Response)() {
  ros_agent__action__Chat_GetResult_Response__rosidl_typesupport_introspection_c__Chat_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_Result)();
  if (!ros_agent__action__Chat_GetResult_Response__rosidl_typesupport_introspection_c__Chat_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    ros_agent__action__Chat_GetResult_Response__rosidl_typesupport_introspection_c__Chat_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_agent__action__Chat_GetResult_Response__rosidl_typesupport_introspection_c__Chat_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros_agent/action/detail/chat__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_agent/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_agent/action/detail/chat__functions.h"
// already included above
// #include "ros_agent/action/detail/chat__struct.h"


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/service_event_info.h"
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "ros_agent/action/chat.h"
// Member `request`
// Member `response`
// already included above
// #include "ros_agent/action/detail/chat__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__Chat_GetResult_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_agent__action__Chat_GetResult_Event__init(message_memory);
}

void ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__Chat_GetResult_Event_fini_function(void * message_memory)
{
  ros_agent__action__Chat_GetResult_Event__fini(message_memory);
}

size_t ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__size_function__Chat_GetResult_Event__request(
  const void * untyped_member)
{
  const ros_agent__action__Chat_GetResult_Request__Sequence * member =
    (const ros_agent__action__Chat_GetResult_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Chat_GetResult_Event__request(
  const void * untyped_member, size_t index)
{
  const ros_agent__action__Chat_GetResult_Request__Sequence * member =
    (const ros_agent__action__Chat_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Chat_GetResult_Event__request(
  void * untyped_member, size_t index)
{
  ros_agent__action__Chat_GetResult_Request__Sequence * member =
    (ros_agent__action__Chat_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__Chat_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_agent__action__Chat_GetResult_Request * item =
    ((const ros_agent__action__Chat_GetResult_Request *)
    ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Chat_GetResult_Event__request(untyped_member, index));
  ros_agent__action__Chat_GetResult_Request * value =
    (ros_agent__action__Chat_GetResult_Request *)(untyped_value);
  *value = *item;
}

void ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__Chat_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_agent__action__Chat_GetResult_Request * item =
    ((ros_agent__action__Chat_GetResult_Request *)
    ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Chat_GetResult_Event__request(untyped_member, index));
  const ros_agent__action__Chat_GetResult_Request * value =
    (const ros_agent__action__Chat_GetResult_Request *)(untyped_value);
  *item = *value;
}

bool ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__Chat_GetResult_Event__request(
  void * untyped_member, size_t size)
{
  ros_agent__action__Chat_GetResult_Request__Sequence * member =
    (ros_agent__action__Chat_GetResult_Request__Sequence *)(untyped_member);
  ros_agent__action__Chat_GetResult_Request__Sequence__fini(member);
  return ros_agent__action__Chat_GetResult_Request__Sequence__init(member, size);
}

size_t ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__size_function__Chat_GetResult_Event__response(
  const void * untyped_member)
{
  const ros_agent__action__Chat_GetResult_Response__Sequence * member =
    (const ros_agent__action__Chat_GetResult_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Chat_GetResult_Event__response(
  const void * untyped_member, size_t index)
{
  const ros_agent__action__Chat_GetResult_Response__Sequence * member =
    (const ros_agent__action__Chat_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Chat_GetResult_Event__response(
  void * untyped_member, size_t index)
{
  ros_agent__action__Chat_GetResult_Response__Sequence * member =
    (ros_agent__action__Chat_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__Chat_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_agent__action__Chat_GetResult_Response * item =
    ((const ros_agent__action__Chat_GetResult_Response *)
    ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Chat_GetResult_Event__response(untyped_member, index));
  ros_agent__action__Chat_GetResult_Response * value =
    (ros_agent__action__Chat_GetResult_Response *)(untyped_value);
  *value = *item;
}

void ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__Chat_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_agent__action__Chat_GetResult_Response * item =
    ((ros_agent__action__Chat_GetResult_Response *)
    ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Chat_GetResult_Event__response(untyped_member, index));
  const ros_agent__action__Chat_GetResult_Response * value =
    (const ros_agent__action__Chat_GetResult_Response *)(untyped_value);
  *item = *value;
}

bool ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__Chat_GetResult_Event__response(
  void * untyped_member, size_t size)
{
  ros_agent__action__Chat_GetResult_Response__Sequence * member =
    (ros_agent__action__Chat_GetResult_Response__Sequence *)(untyped_member);
  ros_agent__action__Chat_GetResult_Response__Sequence__fini(member);
  return ros_agent__action__Chat_GetResult_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__Chat_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_GetResult_Event, info),  // bytes offset in struct
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
    offsetof(ros_agent__action__Chat_GetResult_Event, request),  // bytes offset in struct
    NULL,  // default value
    ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__size_function__Chat_GetResult_Event__request,  // size() function pointer
    ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Chat_GetResult_Event__request,  // get_const(index) function pointer
    ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Chat_GetResult_Event__request,  // get(index) function pointer
    ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__Chat_GetResult_Event__request,  // fetch(index, &value) function pointer
    ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__Chat_GetResult_Event__request,  // assign(index, value) function pointer
    ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__Chat_GetResult_Event__request  // resize(index) function pointer
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
    offsetof(ros_agent__action__Chat_GetResult_Event, response),  // bytes offset in struct
    NULL,  // default value
    ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__size_function__Chat_GetResult_Event__response,  // size() function pointer
    ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__Chat_GetResult_Event__response,  // get_const(index) function pointer
    ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__get_function__Chat_GetResult_Event__response,  // get(index) function pointer
    ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__Chat_GetResult_Event__response,  // fetch(index, &value) function pointer
    ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__Chat_GetResult_Event__response,  // assign(index, value) function pointer
    ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__Chat_GetResult_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__Chat_GetResult_Event_message_members = {
  "ros_agent__action",  // message namespace
  "Chat_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(ros_agent__action__Chat_GetResult_Event),
  false,  // has_any_key_member_
  ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__Chat_GetResult_Event_message_member_array,  // message members
  ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__Chat_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__Chat_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__Chat_GetResult_Event_message_type_support_handle = {
  0,
  &ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__Chat_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &ros_agent__action__Chat_GetResult_Event__get_type_hash,
  &ros_agent__action__Chat_GetResult_Event__get_type_description,
  &ros_agent__action__Chat_GetResult_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_agent
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_GetResult_Event)() {
  ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__Chat_GetResult_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__Chat_GetResult_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_GetResult_Request)();
  ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__Chat_GetResult_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_GetResult_Response)();
  if (!ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__Chat_GetResult_Event_message_type_support_handle.typesupport_identifier) {
    ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__Chat_GetResult_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__Chat_GetResult_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros_agent/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ros_agent/action/detail/chat__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ros_agent__action__detail__chat__rosidl_typesupport_introspection_c__Chat_GetResult_service_members = {
  "ros_agent__action",  // service namespace
  "Chat_GetResult",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // ros_agent__action__detail__chat__rosidl_typesupport_introspection_c__Chat_GetResult_Request_message_type_support_handle,
  NULL,  // response message
  // ros_agent__action__detail__chat__rosidl_typesupport_introspection_c__Chat_GetResult_Response_message_type_support_handle
  NULL  // event_message
  // ros_agent__action__detail__chat__rosidl_typesupport_introspection_c__Chat_GetResult_Response_message_type_support_handle
};


static rosidl_service_type_support_t ros_agent__action__detail__chat__rosidl_typesupport_introspection_c__Chat_GetResult_service_type_support_handle = {
  0,
  &ros_agent__action__detail__chat__rosidl_typesupport_introspection_c__Chat_GetResult_service_members,
  get_service_typesupport_handle_function,
  &ros_agent__action__Chat_GetResult_Request__rosidl_typesupport_introspection_c__Chat_GetResult_Request_message_type_support_handle,
  &ros_agent__action__Chat_GetResult_Response__rosidl_typesupport_introspection_c__Chat_GetResult_Response_message_type_support_handle,
  &ros_agent__action__Chat_GetResult_Event__rosidl_typesupport_introspection_c__Chat_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ros_agent,
    action,
    Chat_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ros_agent,
    action,
    Chat_GetResult
  ),
  &ros_agent__action__Chat_GetResult__get_type_hash,
  &ros_agent__action__Chat_GetResult__get_type_description,
  &ros_agent__action__Chat_GetResult__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_GetResult_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_GetResult_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_GetResult_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_agent
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_GetResult)(void) {
  if (!ros_agent__action__detail__chat__rosidl_typesupport_introspection_c__Chat_GetResult_service_type_support_handle.typesupport_identifier) {
    ros_agent__action__detail__chat__rosidl_typesupport_introspection_c__Chat_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ros_agent__action__detail__chat__rosidl_typesupport_introspection_c__Chat_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_GetResult_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_GetResult_Event)()->data;
  }

  return &ros_agent__action__detail__chat__rosidl_typesupport_introspection_c__Chat_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "ros_agent/action/detail/chat__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros_agent/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros_agent/action/detail/chat__functions.h"
// already included above
// #include "ros_agent/action/detail/chat__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "ros_agent/action/chat.h"
// Member `feedback`
// already included above
// #include "ros_agent/action/detail/chat__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_agent__action__Chat_FeedbackMessage__rosidl_typesupport_introspection_c__Chat_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_agent__action__Chat_FeedbackMessage__init(message_memory);
}

void ros_agent__action__Chat_FeedbackMessage__rosidl_typesupport_introspection_c__Chat_FeedbackMessage_fini_function(void * message_memory)
{
  ros_agent__action__Chat_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_agent__action__Chat_FeedbackMessage__rosidl_typesupport_introspection_c__Chat_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_agent__action__Chat_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_agent__action__Chat_FeedbackMessage__rosidl_typesupport_introspection_c__Chat_FeedbackMessage_message_members = {
  "ros_agent__action",  // message namespace
  "Chat_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(ros_agent__action__Chat_FeedbackMessage),
  false,  // has_any_key_member_
  ros_agent__action__Chat_FeedbackMessage__rosidl_typesupport_introspection_c__Chat_FeedbackMessage_message_member_array,  // message members
  ros_agent__action__Chat_FeedbackMessage__rosidl_typesupport_introspection_c__Chat_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_agent__action__Chat_FeedbackMessage__rosidl_typesupport_introspection_c__Chat_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_agent__action__Chat_FeedbackMessage__rosidl_typesupport_introspection_c__Chat_FeedbackMessage_message_type_support_handle = {
  0,
  &ros_agent__action__Chat_FeedbackMessage__rosidl_typesupport_introspection_c__Chat_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &ros_agent__action__Chat_FeedbackMessage__get_type_hash,
  &ros_agent__action__Chat_FeedbackMessage__get_type_description,
  &ros_agent__action__Chat_FeedbackMessage__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_agent
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_FeedbackMessage)() {
  ros_agent__action__Chat_FeedbackMessage__rosidl_typesupport_introspection_c__Chat_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ros_agent__action__Chat_FeedbackMessage__rosidl_typesupport_introspection_c__Chat_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_agent, action, Chat_Feedback)();
  if (!ros_agent__action__Chat_FeedbackMessage__rosidl_typesupport_introspection_c__Chat_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    ros_agent__action__Chat_FeedbackMessage__rosidl_typesupport_introspection_c__Chat_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_agent__action__Chat_FeedbackMessage__rosidl_typesupport_introspection_c__Chat_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
