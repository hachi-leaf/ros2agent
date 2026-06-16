// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from llm_bridge_cpp:msg/ChatMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "llm_bridge_cpp/msg/chat_message.hpp"


#ifndef LLM_BRIDGE_CPP__MSG__DETAIL__CHAT_MESSAGE__STRUCT_HPP_
#define LLM_BRIDGE_CPP__MSG__DETAIL__CHAT_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'parts'
#include "llm_bridge_cpp/msg/detail/content_part__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__llm_bridge_cpp__msg__ChatMessage __attribute__((deprecated))
#else
# define DEPRECATED__llm_bridge_cpp__msg__ChatMessage __declspec(deprecated)
#endif

namespace llm_bridge_cpp
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChatMessage_
{
  using Type = ChatMessage_<ContainerAllocator>;

  explicit ChatMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->role = "";
    }
  }

  explicit ChatMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : role(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->role = "";
    }
  }

  // field types and members
  using _role_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _role_type role;
  using _parts_type =
    std::vector<llm_bridge_cpp::msg::ContentPart_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<llm_bridge_cpp::msg::ContentPart_<ContainerAllocator>>>;
  _parts_type parts;

  // setters for named parameter idiom
  Type & set__role(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->role = _arg;
    return *this;
  }
  Type & set__parts(
    const std::vector<llm_bridge_cpp::msg::ContentPart_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<llm_bridge_cpp::msg::ContentPart_<ContainerAllocator>>> & _arg)
  {
    this->parts = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llm_bridge_cpp::msg::ChatMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const llm_bridge_cpp::msg::ChatMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llm_bridge_cpp::msg::ChatMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llm_bridge_cpp::msg::ChatMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llm_bridge_cpp::msg::ChatMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llm_bridge_cpp::msg::ChatMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llm_bridge_cpp::msg::ChatMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llm_bridge_cpp::msg::ChatMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llm_bridge_cpp::msg::ChatMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llm_bridge_cpp::msg::ChatMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llm_bridge_cpp__msg__ChatMessage
    std::shared_ptr<llm_bridge_cpp::msg::ChatMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llm_bridge_cpp__msg__ChatMessage
    std::shared_ptr<llm_bridge_cpp::msg::ChatMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChatMessage_ & other) const
  {
    if (this->role != other.role) {
      return false;
    }
    if (this->parts != other.parts) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChatMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChatMessage_

// alias to use template instance with default allocator
using ChatMessage =
  llm_bridge_cpp::msg::ChatMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace llm_bridge_cpp

#endif  // LLM_BRIDGE_CPP__MSG__DETAIL__CHAT_MESSAGE__STRUCT_HPP_
