// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from llm_bridge_cpp:msg/ContentPart.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "llm_bridge_cpp/msg/detail/content_part__functions.h"
#include "llm_bridge_cpp/msg/detail/content_part__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace llm_bridge_cpp
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ContentPart_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) llm_bridge_cpp::msg::ContentPart(_init);
}

void ContentPart_fini_function(void * message_memory)
{
  auto typed_message = static_cast<llm_bridge_cpp::msg::ContentPart *>(message_memory);
  typed_message->~ContentPart();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ContentPart_message_member_array[3] = {
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llm_bridge_cpp::msg::ContentPart, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "text",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llm_bridge_cpp::msg::ContentPart, text),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "image_url",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llm_bridge_cpp::msg::ContentPart, image_url),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ContentPart_message_members = {
  "llm_bridge_cpp::msg",  // message namespace
  "ContentPart",  // message name
  3,  // number of fields
  sizeof(llm_bridge_cpp::msg::ContentPart),
  false,  // has_any_key_member_
  ContentPart_message_member_array,  // message members
  ContentPart_init_function,  // function to initialize message memory (memory has to be allocated)
  ContentPart_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ContentPart_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ContentPart_message_members,
  get_message_typesupport_handle_function,
  &llm_bridge_cpp__msg__ContentPart__get_type_hash,
  &llm_bridge_cpp__msg__ContentPart__get_type_description,
  &llm_bridge_cpp__msg__ContentPart__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace llm_bridge_cpp


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<llm_bridge_cpp::msg::ContentPart>()
{
  return &::llm_bridge_cpp::msg::rosidl_typesupport_introspection_cpp::ContentPart_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, llm_bridge_cpp, msg, ContentPart)() {
  return &::llm_bridge_cpp::msg::rosidl_typesupport_introspection_cpp::ContentPart_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
