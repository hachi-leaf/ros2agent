// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from llm_bridge:msg/ChatMessage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "llm_bridge/msg/detail/chat_message__functions.h"
#include "llm_bridge/msg/detail/chat_message__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace llm_bridge
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ChatMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) llm_bridge::msg::ChatMessage(_init);
}

void ChatMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<llm_bridge::msg::ChatMessage *>(message_memory);
  typed_message->~ChatMessage();
}

size_t size_function__ChatMessage__parts(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<llm_bridge::msg::ContentPart> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ChatMessage__parts(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<llm_bridge::msg::ContentPart> *>(untyped_member);
  return &member[index];
}

void * get_function__ChatMessage__parts(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<llm_bridge::msg::ContentPart> *>(untyped_member);
  return &member[index];
}

void fetch_function__ChatMessage__parts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const llm_bridge::msg::ContentPart *>(
    get_const_function__ChatMessage__parts(untyped_member, index));
  auto & value = *reinterpret_cast<llm_bridge::msg::ContentPart *>(untyped_value);
  value = item;
}

void assign_function__ChatMessage__parts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<llm_bridge::msg::ContentPart *>(
    get_function__ChatMessage__parts(untyped_member, index));
  const auto & value = *reinterpret_cast<const llm_bridge::msg::ContentPart *>(untyped_value);
  item = value;
}

void resize_function__ChatMessage__parts(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<llm_bridge::msg::ContentPart> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ChatMessage_message_member_array[2] = {
  {
    "role",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llm_bridge::msg::ChatMessage, role),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "parts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<llm_bridge::msg::ContentPart>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(llm_bridge::msg::ChatMessage, parts),  // bytes offset in struct
    nullptr,  // default value
    size_function__ChatMessage__parts,  // size() function pointer
    get_const_function__ChatMessage__parts,  // get_const(index) function pointer
    get_function__ChatMessage__parts,  // get(index) function pointer
    fetch_function__ChatMessage__parts,  // fetch(index, &value) function pointer
    assign_function__ChatMessage__parts,  // assign(index, value) function pointer
    resize_function__ChatMessage__parts  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ChatMessage_message_members = {
  "llm_bridge::msg",  // message namespace
  "ChatMessage",  // message name
  2,  // number of fields
  sizeof(llm_bridge::msg::ChatMessage),
  false,  // has_any_key_member_
  ChatMessage_message_member_array,  // message members
  ChatMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ChatMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ChatMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ChatMessage_message_members,
  get_message_typesupport_handle_function,
  &llm_bridge__msg__ChatMessage__get_type_hash,
  &llm_bridge__msg__ChatMessage__get_type_description,
  &llm_bridge__msg__ChatMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace llm_bridge


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<llm_bridge::msg::ChatMessage>()
{
  return &::llm_bridge::msg::rosidl_typesupport_introspection_cpp::ChatMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, llm_bridge, msg, ChatMessage)() {
  return &::llm_bridge::msg::rosidl_typesupport_introspection_cpp::ChatMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
