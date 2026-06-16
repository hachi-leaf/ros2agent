// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_agent:msg/ChatMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_agent/msg/chat_message.hpp"


#ifndef ROS_AGENT__MSG__DETAIL__CHAT_MESSAGE__BUILDER_HPP_
#define ROS_AGENT__MSG__DETAIL__CHAT_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_agent/msg/detail/chat_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_agent
{

namespace msg
{

namespace builder
{

class Init_ChatMessage_parts
{
public:
  explicit Init_ChatMessage_parts(::ros_agent::msg::ChatMessage & msg)
  : msg_(msg)
  {}
  ::ros_agent::msg::ChatMessage parts(::ros_agent::msg::ChatMessage::_parts_type arg)
  {
    msg_.parts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_agent::msg::ChatMessage msg_;
};

class Init_ChatMessage_role
{
public:
  Init_ChatMessage_role()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChatMessage_parts role(::ros_agent::msg::ChatMessage::_role_type arg)
  {
    msg_.role = std::move(arg);
    return Init_ChatMessage_parts(msg_);
  }

private:
  ::ros_agent::msg::ChatMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_agent::msg::ChatMessage>()
{
  return ros_agent::msg::builder::Init_ChatMessage_role();
}

}  // namespace ros_agent

#endif  // ROS_AGENT__MSG__DETAIL__CHAT_MESSAGE__BUILDER_HPP_
