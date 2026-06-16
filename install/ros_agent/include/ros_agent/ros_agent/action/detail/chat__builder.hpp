// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_agent:action/Chat.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_agent/action/chat.hpp"


#ifndef ROS_AGENT__ACTION__DETAIL__CHAT__BUILDER_HPP_
#define ROS_AGENT__ACTION__DETAIL__CHAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_agent/action/detail/chat__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_agent
{

namespace action
{

namespace builder
{

class Init_Chat_Goal_reasoning_effort
{
public:
  explicit Init_Chat_Goal_reasoning_effort(::ros_agent::action::Chat_Goal & msg)
  : msg_(msg)
  {}
  ::ros_agent::action::Chat_Goal reasoning_effort(::ros_agent::action::Chat_Goal::_reasoning_effort_type arg)
  {
    msg_.reasoning_effort = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_agent::action::Chat_Goal msg_;
};

class Init_Chat_Goal_truncation_strategy
{
public:
  explicit Init_Chat_Goal_truncation_strategy(::ros_agent::action::Chat_Goal & msg)
  : msg_(msg)
  {}
  Init_Chat_Goal_reasoning_effort truncation_strategy(::ros_agent::action::Chat_Goal::_truncation_strategy_type arg)
  {
    msg_.truncation_strategy = std::move(arg);
    return Init_Chat_Goal_reasoning_effort(msg_);
  }

private:
  ::ros_agent::action::Chat_Goal msg_;
};

class Init_Chat_Goal_max_context_tokens
{
public:
  explicit Init_Chat_Goal_max_context_tokens(::ros_agent::action::Chat_Goal & msg)
  : msg_(msg)
  {}
  Init_Chat_Goal_truncation_strategy max_context_tokens(::ros_agent::action::Chat_Goal::_max_context_tokens_type arg)
  {
    msg_.max_context_tokens = std::move(arg);
    return Init_Chat_Goal_truncation_strategy(msg_);
  }

private:
  ::ros_agent::action::Chat_Goal msg_;
};

class Init_Chat_Goal_stream
{
public:
  explicit Init_Chat_Goal_stream(::ros_agent::action::Chat_Goal & msg)
  : msg_(msg)
  {}
  Init_Chat_Goal_max_context_tokens stream(::ros_agent::action::Chat_Goal::_stream_type arg)
  {
    msg_.stream = std::move(arg);
    return Init_Chat_Goal_max_context_tokens(msg_);
  }

private:
  ::ros_agent::action::Chat_Goal msg_;
};

class Init_Chat_Goal_messages
{
public:
  Init_Chat_Goal_messages()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Chat_Goal_stream messages(::ros_agent::action::Chat_Goal::_messages_type arg)
  {
    msg_.messages = std::move(arg);
    return Init_Chat_Goal_stream(msg_);
  }

private:
  ::ros_agent::action::Chat_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_agent::action::Chat_Goal>()
{
  return ros_agent::action::builder::Init_Chat_Goal_messages();
}

}  // namespace ros_agent


namespace ros_agent
{

namespace action
{

namespace builder
{

class Init_Chat_Result_total_tokens
{
public:
  explicit Init_Chat_Result_total_tokens(::ros_agent::action::Chat_Result & msg)
  : msg_(msg)
  {}
  ::ros_agent::action::Chat_Result total_tokens(::ros_agent::action::Chat_Result::_total_tokens_type arg)
  {
    msg_.total_tokens = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_agent::action::Chat_Result msg_;
};

class Init_Chat_Result_completion_tokens
{
public:
  explicit Init_Chat_Result_completion_tokens(::ros_agent::action::Chat_Result & msg)
  : msg_(msg)
  {}
  Init_Chat_Result_total_tokens completion_tokens(::ros_agent::action::Chat_Result::_completion_tokens_type arg)
  {
    msg_.completion_tokens = std::move(arg);
    return Init_Chat_Result_total_tokens(msg_);
  }

private:
  ::ros_agent::action::Chat_Result msg_;
};

class Init_Chat_Result_prompt_tokens
{
public:
  explicit Init_Chat_Result_prompt_tokens(::ros_agent::action::Chat_Result & msg)
  : msg_(msg)
  {}
  Init_Chat_Result_completion_tokens prompt_tokens(::ros_agent::action::Chat_Result::_prompt_tokens_type arg)
  {
    msg_.prompt_tokens = std::move(arg);
    return Init_Chat_Result_completion_tokens(msg_);
  }

private:
  ::ros_agent::action::Chat_Result msg_;
};

class Init_Chat_Result_error_msg
{
public:
  explicit Init_Chat_Result_error_msg(::ros_agent::action::Chat_Result & msg)
  : msg_(msg)
  {}
  Init_Chat_Result_prompt_tokens error_msg(::ros_agent::action::Chat_Result::_error_msg_type arg)
  {
    msg_.error_msg = std::move(arg);
    return Init_Chat_Result_prompt_tokens(msg_);
  }

private:
  ::ros_agent::action::Chat_Result msg_;
};

class Init_Chat_Result_success
{
public:
  explicit Init_Chat_Result_success(::ros_agent::action::Chat_Result & msg)
  : msg_(msg)
  {}
  Init_Chat_Result_error_msg success(::ros_agent::action::Chat_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Chat_Result_error_msg(msg_);
  }

private:
  ::ros_agent::action::Chat_Result msg_;
};

class Init_Chat_Result_updated_messages
{
public:
  explicit Init_Chat_Result_updated_messages(::ros_agent::action::Chat_Result & msg)
  : msg_(msg)
  {}
  Init_Chat_Result_success updated_messages(::ros_agent::action::Chat_Result::_updated_messages_type arg)
  {
    msg_.updated_messages = std::move(arg);
    return Init_Chat_Result_success(msg_);
  }

private:
  ::ros_agent::action::Chat_Result msg_;
};

class Init_Chat_Result_reasoning_content
{
public:
  explicit Init_Chat_Result_reasoning_content(::ros_agent::action::Chat_Result & msg)
  : msg_(msg)
  {}
  Init_Chat_Result_updated_messages reasoning_content(::ros_agent::action::Chat_Result::_reasoning_content_type arg)
  {
    msg_.reasoning_content = std::move(arg);
    return Init_Chat_Result_updated_messages(msg_);
  }

private:
  ::ros_agent::action::Chat_Result msg_;
};

class Init_Chat_Result_content
{
public:
  Init_Chat_Result_content()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Chat_Result_reasoning_content content(::ros_agent::action::Chat_Result::_content_type arg)
  {
    msg_.content = std::move(arg);
    return Init_Chat_Result_reasoning_content(msg_);
  }

private:
  ::ros_agent::action::Chat_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_agent::action::Chat_Result>()
{
  return ros_agent::action::builder::Init_Chat_Result_content();
}

}  // namespace ros_agent


namespace ros_agent
{

namespace action
{

namespace builder
{

class Init_Chat_Feedback_partial_reasoning
{
public:
  explicit Init_Chat_Feedback_partial_reasoning(::ros_agent::action::Chat_Feedback & msg)
  : msg_(msg)
  {}
  ::ros_agent::action::Chat_Feedback partial_reasoning(::ros_agent::action::Chat_Feedback::_partial_reasoning_type arg)
  {
    msg_.partial_reasoning = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_agent::action::Chat_Feedback msg_;
};

class Init_Chat_Feedback_partial_content
{
public:
  Init_Chat_Feedback_partial_content()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Chat_Feedback_partial_reasoning partial_content(::ros_agent::action::Chat_Feedback::_partial_content_type arg)
  {
    msg_.partial_content = std::move(arg);
    return Init_Chat_Feedback_partial_reasoning(msg_);
  }

private:
  ::ros_agent::action::Chat_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_agent::action::Chat_Feedback>()
{
  return ros_agent::action::builder::Init_Chat_Feedback_partial_content();
}

}  // namespace ros_agent


namespace ros_agent
{

namespace action
{

namespace builder
{

class Init_Chat_SendGoal_Request_goal
{
public:
  explicit Init_Chat_SendGoal_Request_goal(::ros_agent::action::Chat_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ros_agent::action::Chat_SendGoal_Request goal(::ros_agent::action::Chat_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_agent::action::Chat_SendGoal_Request msg_;
};

class Init_Chat_SendGoal_Request_goal_id
{
public:
  Init_Chat_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Chat_SendGoal_Request_goal goal_id(::ros_agent::action::Chat_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Chat_SendGoal_Request_goal(msg_);
  }

private:
  ::ros_agent::action::Chat_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_agent::action::Chat_SendGoal_Request>()
{
  return ros_agent::action::builder::Init_Chat_SendGoal_Request_goal_id();
}

}  // namespace ros_agent


namespace ros_agent
{

namespace action
{

namespace builder
{

class Init_Chat_SendGoal_Response_stamp
{
public:
  explicit Init_Chat_SendGoal_Response_stamp(::ros_agent::action::Chat_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ros_agent::action::Chat_SendGoal_Response stamp(::ros_agent::action::Chat_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_agent::action::Chat_SendGoal_Response msg_;
};

class Init_Chat_SendGoal_Response_accepted
{
public:
  Init_Chat_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Chat_SendGoal_Response_stamp accepted(::ros_agent::action::Chat_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Chat_SendGoal_Response_stamp(msg_);
  }

private:
  ::ros_agent::action::Chat_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_agent::action::Chat_SendGoal_Response>()
{
  return ros_agent::action::builder::Init_Chat_SendGoal_Response_accepted();
}

}  // namespace ros_agent


namespace ros_agent
{

namespace action
{

namespace builder
{

class Init_Chat_SendGoal_Event_response
{
public:
  explicit Init_Chat_SendGoal_Event_response(::ros_agent::action::Chat_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::ros_agent::action::Chat_SendGoal_Event response(::ros_agent::action::Chat_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_agent::action::Chat_SendGoal_Event msg_;
};

class Init_Chat_SendGoal_Event_request
{
public:
  explicit Init_Chat_SendGoal_Event_request(::ros_agent::action::Chat_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Chat_SendGoal_Event_response request(::ros_agent::action::Chat_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Chat_SendGoal_Event_response(msg_);
  }

private:
  ::ros_agent::action::Chat_SendGoal_Event msg_;
};

class Init_Chat_SendGoal_Event_info
{
public:
  Init_Chat_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Chat_SendGoal_Event_request info(::ros_agent::action::Chat_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Chat_SendGoal_Event_request(msg_);
  }

private:
  ::ros_agent::action::Chat_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_agent::action::Chat_SendGoal_Event>()
{
  return ros_agent::action::builder::Init_Chat_SendGoal_Event_info();
}

}  // namespace ros_agent


namespace ros_agent
{

namespace action
{

namespace builder
{

class Init_Chat_GetResult_Request_goal_id
{
public:
  Init_Chat_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_agent::action::Chat_GetResult_Request goal_id(::ros_agent::action::Chat_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_agent::action::Chat_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_agent::action::Chat_GetResult_Request>()
{
  return ros_agent::action::builder::Init_Chat_GetResult_Request_goal_id();
}

}  // namespace ros_agent


namespace ros_agent
{

namespace action
{

namespace builder
{

class Init_Chat_GetResult_Response_result
{
public:
  explicit Init_Chat_GetResult_Response_result(::ros_agent::action::Chat_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ros_agent::action::Chat_GetResult_Response result(::ros_agent::action::Chat_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_agent::action::Chat_GetResult_Response msg_;
};

class Init_Chat_GetResult_Response_status
{
public:
  Init_Chat_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Chat_GetResult_Response_result status(::ros_agent::action::Chat_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Chat_GetResult_Response_result(msg_);
  }

private:
  ::ros_agent::action::Chat_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_agent::action::Chat_GetResult_Response>()
{
  return ros_agent::action::builder::Init_Chat_GetResult_Response_status();
}

}  // namespace ros_agent


namespace ros_agent
{

namespace action
{

namespace builder
{

class Init_Chat_GetResult_Event_response
{
public:
  explicit Init_Chat_GetResult_Event_response(::ros_agent::action::Chat_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::ros_agent::action::Chat_GetResult_Event response(::ros_agent::action::Chat_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_agent::action::Chat_GetResult_Event msg_;
};

class Init_Chat_GetResult_Event_request
{
public:
  explicit Init_Chat_GetResult_Event_request(::ros_agent::action::Chat_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Chat_GetResult_Event_response request(::ros_agent::action::Chat_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Chat_GetResult_Event_response(msg_);
  }

private:
  ::ros_agent::action::Chat_GetResult_Event msg_;
};

class Init_Chat_GetResult_Event_info
{
public:
  Init_Chat_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Chat_GetResult_Event_request info(::ros_agent::action::Chat_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Chat_GetResult_Event_request(msg_);
  }

private:
  ::ros_agent::action::Chat_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_agent::action::Chat_GetResult_Event>()
{
  return ros_agent::action::builder::Init_Chat_GetResult_Event_info();
}

}  // namespace ros_agent


namespace ros_agent
{

namespace action
{

namespace builder
{

class Init_Chat_FeedbackMessage_feedback
{
public:
  explicit Init_Chat_FeedbackMessage_feedback(::ros_agent::action::Chat_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ros_agent::action::Chat_FeedbackMessage feedback(::ros_agent::action::Chat_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_agent::action::Chat_FeedbackMessage msg_;
};

class Init_Chat_FeedbackMessage_goal_id
{
public:
  Init_Chat_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Chat_FeedbackMessage_feedback goal_id(::ros_agent::action::Chat_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Chat_FeedbackMessage_feedback(msg_);
  }

private:
  ::ros_agent::action::Chat_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_agent::action::Chat_FeedbackMessage>()
{
  return ros_agent::action::builder::Init_Chat_FeedbackMessage_goal_id();
}

}  // namespace ros_agent

#endif  // ROS_AGENT__ACTION__DETAIL__CHAT__BUILDER_HPP_
