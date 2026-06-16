// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llm_bridge_cpp:msg/ChatMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "llm_bridge_cpp/msg/chat_message.hpp"


#ifndef LLM_BRIDGE_CPP__MSG__DETAIL__CHAT_MESSAGE__BUILDER_HPP_
#define LLM_BRIDGE_CPP__MSG__DETAIL__CHAT_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llm_bridge_cpp/msg/detail/chat_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llm_bridge_cpp
{

namespace msg
{

namespace builder
{

class Init_ChatMessage_parts
{
public:
  explicit Init_ChatMessage_parts(::llm_bridge_cpp::msg::ChatMessage & msg)
  : msg_(msg)
  {}
  ::llm_bridge_cpp::msg::ChatMessage parts(::llm_bridge_cpp::msg::ChatMessage::_parts_type arg)
  {
    msg_.parts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llm_bridge_cpp::msg::ChatMessage msg_;
};

class Init_ChatMessage_role
{
public:
  Init_ChatMessage_role()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChatMessage_parts role(::llm_bridge_cpp::msg::ChatMessage::_role_type arg)
  {
    msg_.role = std::move(arg);
    return Init_ChatMessage_parts(msg_);
  }

private:
  ::llm_bridge_cpp::msg::ChatMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::llm_bridge_cpp::msg::ChatMessage>()
{
  return llm_bridge_cpp::msg::builder::Init_ChatMessage_role();
}

}  // namespace llm_bridge_cpp

#endif  // LLM_BRIDGE_CPP__MSG__DETAIL__CHAT_MESSAGE__BUILDER_HPP_
