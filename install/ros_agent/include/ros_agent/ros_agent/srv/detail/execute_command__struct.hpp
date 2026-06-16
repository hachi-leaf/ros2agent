// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_agent:srv/ExecuteCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_agent/srv/execute_command.hpp"


#ifndef ROS_AGENT__SRV__DETAIL__EXECUTE_COMMAND__STRUCT_HPP_
#define ROS_AGENT__SRV__DETAIL__EXECUTE_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_agent__srv__ExecuteCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_agent__srv__ExecuteCommand_Request __declspec(deprecated)
#endif

namespace ros_agent
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecuteCommand_Request_
{
  using Type = ExecuteCommand_Request_<ContainerAllocator>;

  explicit ExecuteCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  explicit ExecuteCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_agent::srv::ExecuteCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_agent::srv::ExecuteCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_agent::srv::ExecuteCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_agent::srv::ExecuteCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_agent::srv::ExecuteCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_agent::srv::ExecuteCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_agent::srv::ExecuteCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_agent::srv::ExecuteCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_agent::srv::ExecuteCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_agent::srv::ExecuteCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_agent__srv__ExecuteCommand_Request
    std::shared_ptr<ros_agent::srv::ExecuteCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_agent__srv__ExecuteCommand_Request
    std::shared_ptr<ros_agent::srv::ExecuteCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteCommand_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteCommand_Request_

// alias to use template instance with default allocator
using ExecuteCommand_Request =
  ros_agent::srv::ExecuteCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_agent


#ifndef _WIN32
# define DEPRECATED__ros_agent__srv__ExecuteCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_agent__srv__ExecuteCommand_Response __declspec(deprecated)
#endif

namespace ros_agent
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecuteCommand_Response_
{
  using Type = ExecuteCommand_Response_<ContainerAllocator>;

  explicit ExecuteCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->exit_code = 0l;
      this->output = "";
    }
  }

  explicit ExecuteCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : output(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->exit_code = 0l;
      this->output = "";
    }
  }

  // field types and members
  using _exit_code_type =
    int32_t;
  _exit_code_type exit_code;
  using _output_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _output_type output;

  // setters for named parameter idiom
  Type & set__exit_code(
    const int32_t & _arg)
  {
    this->exit_code = _arg;
    return *this;
  }
  Type & set__output(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->output = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_agent::srv::ExecuteCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_agent::srv::ExecuteCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_agent::srv::ExecuteCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_agent::srv::ExecuteCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_agent::srv::ExecuteCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_agent::srv::ExecuteCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_agent::srv::ExecuteCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_agent::srv::ExecuteCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_agent::srv::ExecuteCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_agent::srv::ExecuteCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_agent__srv__ExecuteCommand_Response
    std::shared_ptr<ros_agent::srv::ExecuteCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_agent__srv__ExecuteCommand_Response
    std::shared_ptr<ros_agent::srv::ExecuteCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteCommand_Response_ & other) const
  {
    if (this->exit_code != other.exit_code) {
      return false;
    }
    if (this->output != other.output) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteCommand_Response_

// alias to use template instance with default allocator
using ExecuteCommand_Response =
  ros_agent::srv::ExecuteCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_agent


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_agent__srv__ExecuteCommand_Event __attribute__((deprecated))
#else
# define DEPRECATED__ros_agent__srv__ExecuteCommand_Event __declspec(deprecated)
#endif

namespace ros_agent
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecuteCommand_Event_
{
  using Type = ExecuteCommand_Event_<ContainerAllocator>;

  explicit ExecuteCommand_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ExecuteCommand_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ros_agent::srv::ExecuteCommand_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_agent::srv::ExecuteCommand_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ros_agent::srv::ExecuteCommand_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_agent::srv::ExecuteCommand_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ros_agent::srv::ExecuteCommand_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_agent::srv::ExecuteCommand_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ros_agent::srv::ExecuteCommand_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_agent::srv::ExecuteCommand_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_agent::srv::ExecuteCommand_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_agent::srv::ExecuteCommand_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_agent::srv::ExecuteCommand_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_agent::srv::ExecuteCommand_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_agent::srv::ExecuteCommand_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_agent::srv::ExecuteCommand_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_agent::srv::ExecuteCommand_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_agent::srv::ExecuteCommand_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_agent::srv::ExecuteCommand_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_agent::srv::ExecuteCommand_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_agent__srv__ExecuteCommand_Event
    std::shared_ptr<ros_agent::srv::ExecuteCommand_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_agent__srv__ExecuteCommand_Event
    std::shared_ptr<ros_agent::srv::ExecuteCommand_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteCommand_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteCommand_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteCommand_Event_

// alias to use template instance with default allocator
using ExecuteCommand_Event =
  ros_agent::srv::ExecuteCommand_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_agent

namespace ros_agent
{

namespace srv
{

struct ExecuteCommand
{
  using Request = ros_agent::srv::ExecuteCommand_Request;
  using Response = ros_agent::srv::ExecuteCommand_Response;
  using Event = ros_agent::srv::ExecuteCommand_Event;
};

}  // namespace srv

}  // namespace ros_agent

#endif  // ROS_AGENT__SRV__DETAIL__EXECUTE_COMMAND__STRUCT_HPP_
