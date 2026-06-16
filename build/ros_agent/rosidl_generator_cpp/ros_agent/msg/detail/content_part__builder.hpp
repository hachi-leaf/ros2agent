// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_agent:msg/ContentPart.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_agent/msg/content_part.hpp"


#ifndef ROS_AGENT__MSG__DETAIL__CONTENT_PART__BUILDER_HPP_
#define ROS_AGENT__MSG__DETAIL__CONTENT_PART__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_agent/msg/detail/content_part__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_agent
{

namespace msg
{

namespace builder
{

class Init_ContentPart_image_url
{
public:
  explicit Init_ContentPart_image_url(::ros_agent::msg::ContentPart & msg)
  : msg_(msg)
  {}
  ::ros_agent::msg::ContentPart image_url(::ros_agent::msg::ContentPart::_image_url_type arg)
  {
    msg_.image_url = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_agent::msg::ContentPart msg_;
};

class Init_ContentPart_text
{
public:
  explicit Init_ContentPart_text(::ros_agent::msg::ContentPart & msg)
  : msg_(msg)
  {}
  Init_ContentPart_image_url text(::ros_agent::msg::ContentPart::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_ContentPart_image_url(msg_);
  }

private:
  ::ros_agent::msg::ContentPart msg_;
};

class Init_ContentPart_type
{
public:
  Init_ContentPart_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ContentPart_text type(::ros_agent::msg::ContentPart::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ContentPart_text(msg_);
  }

private:
  ::ros_agent::msg::ContentPart msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_agent::msg::ContentPart>()
{
  return ros_agent::msg::builder::Init_ContentPart_type();
}

}  // namespace ros_agent

#endif  // ROS_AGENT__MSG__DETAIL__CONTENT_PART__BUILDER_HPP_
