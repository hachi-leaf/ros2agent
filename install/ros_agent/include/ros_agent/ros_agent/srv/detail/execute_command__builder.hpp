// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_agent:srv/ExecuteCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_agent/srv/execute_command.hpp"


#ifndef ROS_AGENT__SRV__DETAIL__EXECUTE_COMMAND__BUILDER_HPP_
#define ROS_AGENT__SRV__DETAIL__EXECUTE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_agent/srv/detail/execute_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_agent
{

namespace srv
{

namespace builder
{

class Init_ExecuteCommand_Request_command
{
public:
  Init_ExecuteCommand_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_agent::srv::ExecuteCommand_Request command(::ros_agent::srv::ExecuteCommand_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_agent::srv::ExecuteCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_agent::srv::ExecuteCommand_Request>()
{
  return ros_agent::srv::builder::Init_ExecuteCommand_Request_command();
}

}  // namespace ros_agent


namespace ros_agent
{

namespace srv
{

namespace builder
{

class Init_ExecuteCommand_Response_output
{
public:
  explicit Init_ExecuteCommand_Response_output(::ros_agent::srv::ExecuteCommand_Response & msg)
  : msg_(msg)
  {}
  ::ros_agent::srv::ExecuteCommand_Response output(::ros_agent::srv::ExecuteCommand_Response::_output_type arg)
  {
    msg_.output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_agent::srv::ExecuteCommand_Response msg_;
};

class Init_ExecuteCommand_Response_exit_code
{
public:
  Init_ExecuteCommand_Response_exit_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteCommand_Response_output exit_code(::ros_agent::srv::ExecuteCommand_Response::_exit_code_type arg)
  {
    msg_.exit_code = std::move(arg);
    return Init_ExecuteCommand_Response_output(msg_);
  }

private:
  ::ros_agent::srv::ExecuteCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_agent::srv::ExecuteCommand_Response>()
{
  return ros_agent::srv::builder::Init_ExecuteCommand_Response_exit_code();
}

}  // namespace ros_agent


namespace ros_agent
{

namespace srv
{

namespace builder
{

class Init_ExecuteCommand_Event_response
{
public:
  explicit Init_ExecuteCommand_Event_response(::ros_agent::srv::ExecuteCommand_Event & msg)
  : msg_(msg)
  {}
  ::ros_agent::srv::ExecuteCommand_Event response(::ros_agent::srv::ExecuteCommand_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_agent::srv::ExecuteCommand_Event msg_;
};

class Init_ExecuteCommand_Event_request
{
public:
  explicit Init_ExecuteCommand_Event_request(::ros_agent::srv::ExecuteCommand_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteCommand_Event_response request(::ros_agent::srv::ExecuteCommand_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteCommand_Event_response(msg_);
  }

private:
  ::ros_agent::srv::ExecuteCommand_Event msg_;
};

class Init_ExecuteCommand_Event_info
{
public:
  Init_ExecuteCommand_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteCommand_Event_request info(::ros_agent::srv::ExecuteCommand_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteCommand_Event_request(msg_);
  }

private:
  ::ros_agent::srv::ExecuteCommand_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_agent::srv::ExecuteCommand_Event>()
{
  return ros_agent::srv::builder::Init_ExecuteCommand_Event_info();
}

}  // namespace ros_agent

#endif  // ROS_AGENT__SRV__DETAIL__EXECUTE_COMMAND__BUILDER_HPP_
