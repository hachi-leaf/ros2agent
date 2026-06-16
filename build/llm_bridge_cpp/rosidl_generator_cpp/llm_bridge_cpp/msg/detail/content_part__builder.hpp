// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llm_bridge_cpp:msg/ContentPart.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "llm_bridge_cpp/msg/content_part.hpp"


#ifndef LLM_BRIDGE_CPP__MSG__DETAIL__CONTENT_PART__BUILDER_HPP_
#define LLM_BRIDGE_CPP__MSG__DETAIL__CONTENT_PART__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llm_bridge_cpp/msg/detail/content_part__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llm_bridge_cpp
{

namespace msg
{

namespace builder
{

class Init_ContentPart_image_url
{
public:
  explicit Init_ContentPart_image_url(::llm_bridge_cpp::msg::ContentPart & msg)
  : msg_(msg)
  {}
  ::llm_bridge_cpp::msg::ContentPart image_url(::llm_bridge_cpp::msg::ContentPart::_image_url_type arg)
  {
    msg_.image_url = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llm_bridge_cpp::msg::ContentPart msg_;
};

class Init_ContentPart_text
{
public:
  explicit Init_ContentPart_text(::llm_bridge_cpp::msg::ContentPart & msg)
  : msg_(msg)
  {}
  Init_ContentPart_image_url text(::llm_bridge_cpp::msg::ContentPart::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_ContentPart_image_url(msg_);
  }

private:
  ::llm_bridge_cpp::msg::ContentPart msg_;
};

class Init_ContentPart_type
{
public:
  Init_ContentPart_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ContentPart_text type(::llm_bridge_cpp::msg::ContentPart::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ContentPart_text(msg_);
  }

private:
  ::llm_bridge_cpp::msg::ContentPart msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::llm_bridge_cpp::msg::ContentPart>()
{
  return llm_bridge_cpp::msg::builder::Init_ContentPart_type();
}

}  // namespace llm_bridge_cpp

#endif  // LLM_BRIDGE_CPP__MSG__DETAIL__CONTENT_PART__BUILDER_HPP_
