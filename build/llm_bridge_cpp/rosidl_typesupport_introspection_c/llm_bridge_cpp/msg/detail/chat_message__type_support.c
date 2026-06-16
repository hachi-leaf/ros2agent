// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from llm_bridge_cpp:msg/ChatMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "llm_bridge_cpp/msg/detail/chat_message__rosidl_typesupport_introspection_c.h"
#include "llm_bridge_cpp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "llm_bridge_cpp/msg/detail/chat_message__functions.h"
#include "llm_bridge_cpp/msg/detail/chat_message__struct.h"


// Include directives for member types
// Member `role`
#include "rosidl_runtime_c/string_functions.h"
// Member `parts`
#include "llm_bridge_cpp/msg/content_part.h"
// Member `parts`
#include "llm_bridge_cpp/msg/detail/content_part__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  llm_bridge_cpp__msg__ChatMessage__init(message_memory);
}

void llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_fini_function(void * message_memory)
{
  llm_bridge_cpp__msg__ChatMessage__fini(message_memory);
}

size_t llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__size_function__ChatMessage__parts(
  const void * untyped_member)
{
  const llm_bridge_cpp__msg__ContentPart__Sequence * member =
    (const llm_bridge_cpp__msg__ContentPart__Sequence *)(untyped_member);
  return member->size;
}

const void * llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__get_const_function__ChatMessage__parts(
  const void * untyped_member, size_t index)
{
  const llm_bridge_cpp__msg__ContentPart__Sequence * member =
    (const llm_bridge_cpp__msg__ContentPart__Sequence *)(untyped_member);
  return &member->data[index];
}

void * llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__get_function__ChatMessage__parts(
  void * untyped_member, size_t index)
{
  llm_bridge_cpp__msg__ContentPart__Sequence * member =
    (llm_bridge_cpp__msg__ContentPart__Sequence *)(untyped_member);
  return &member->data[index];
}

void llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__fetch_function__ChatMessage__parts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const llm_bridge_cpp__msg__ContentPart * item =
    ((const llm_bridge_cpp__msg__ContentPart *)
    llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__get_const_function__ChatMessage__parts(untyped_member, index));
  llm_bridge_cpp__msg__ContentPart * value =
    (llm_bridge_cpp__msg__ContentPart *)(untyped_value);
  *value = *item;
}

void llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__assign_function__ChatMessage__parts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  llm_bridge_cpp__msg__ContentPart * item =
    ((llm_bridge_cpp__msg__ContentPart *)
    llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__get_function__ChatMessage__parts(untyped_member, index));
  const llm_bridge_cpp__msg__ContentPart * value =
    (const llm_bridge_cpp__msg__ContentPart *)(untyped_value);
  *item = *value;
}

bool llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__resize_function__ChatMessage__parts(
  void * untyped_member, size_t size)
{
  llm_bridge_cpp__msg__ContentPart__Sequence * member =
    (llm_bridge_cpp__msg__ContentPart__Sequence *)(untyped_member);
  llm_bridge_cpp__msg__ContentPart__Sequence__fini(member);
  return llm_bridge_cpp__msg__ContentPart__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_message_member_array[2] = {
  {
    "role",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llm_bridge_cpp__msg__ChatMessage, role),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llm_bridge_cpp__msg__ChatMessage, parts),  // bytes offset in struct
    NULL,  // default value
    llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__size_function__ChatMessage__parts,  // size() function pointer
    llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__get_const_function__ChatMessage__parts,  // get_const(index) function pointer
    llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__get_function__ChatMessage__parts,  // get(index) function pointer
    llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__fetch_function__ChatMessage__parts,  // fetch(index, &value) function pointer
    llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__assign_function__ChatMessage__parts,  // assign(index, value) function pointer
    llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__resize_function__ChatMessage__parts  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_message_members = {
  "llm_bridge_cpp__msg",  // message namespace
  "ChatMessage",  // message name
  2,  // number of fields
  sizeof(llm_bridge_cpp__msg__ChatMessage),
  false,  // has_any_key_member_
  llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_message_member_array,  // message members
  llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_message_type_support_handle = {
  0,
  &llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_message_members,
  get_message_typesupport_handle_function,
  &llm_bridge_cpp__msg__ChatMessage__get_type_hash,
  &llm_bridge_cpp__msg__ChatMessage__get_type_description,
  &llm_bridge_cpp__msg__ChatMessage__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_llm_bridge_cpp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llm_bridge_cpp, msg, ChatMessage)() {
  llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, llm_bridge_cpp, msg, ContentPart)();
  if (!llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_message_type_support_handle.typesupport_identifier) {
    llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &llm_bridge_cpp__msg__ChatMessage__rosidl_typesupport_introspection_c__ChatMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
