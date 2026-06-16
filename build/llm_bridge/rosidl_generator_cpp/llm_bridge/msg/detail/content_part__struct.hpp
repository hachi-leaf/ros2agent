// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from llm_bridge:msg/ContentPart.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "llm_bridge/msg/content_part.hpp"


#ifndef LLM_BRIDGE__MSG__DETAIL__CONTENT_PART__STRUCT_HPP_
#define LLM_BRIDGE__MSG__DETAIL__CONTENT_PART__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__llm_bridge__msg__ContentPart __attribute__((deprecated))
#else
# define DEPRECATED__llm_bridge__msg__ContentPart __declspec(deprecated)
#endif

namespace llm_bridge
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ContentPart_
{
  using Type = ContentPart_<ContainerAllocator>;

  explicit ContentPart_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->text = "";
      this->image_url = "";
    }
  }

  explicit ContentPart_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc),
    text(_alloc),
    image_url(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->text = "";
      this->image_url = "";
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;
  using _image_url_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _image_url_type image_url;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }
  Type & set__image_url(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->image_url = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llm_bridge::msg::ContentPart_<ContainerAllocator> *;
  using ConstRawPtr =
    const llm_bridge::msg::ContentPart_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llm_bridge::msg::ContentPart_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llm_bridge::msg::ContentPart_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llm_bridge::msg::ContentPart_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llm_bridge::msg::ContentPart_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llm_bridge::msg::ContentPart_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llm_bridge::msg::ContentPart_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llm_bridge::msg::ContentPart_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llm_bridge::msg::ContentPart_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llm_bridge__msg__ContentPart
    std::shared_ptr<llm_bridge::msg::ContentPart_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llm_bridge__msg__ContentPart
    std::shared_ptr<llm_bridge::msg::ContentPart_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ContentPart_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    if (this->image_url != other.image_url) {
      return false;
    }
    return true;
  }
  bool operator!=(const ContentPart_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ContentPart_

// alias to use template instance with default allocator
using ContentPart =
  llm_bridge::msg::ContentPart_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace llm_bridge

#endif  // LLM_BRIDGE__MSG__DETAIL__CONTENT_PART__STRUCT_HPP_
