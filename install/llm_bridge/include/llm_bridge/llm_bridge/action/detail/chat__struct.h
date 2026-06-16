// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from llm_bridge:action/Chat.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "llm_bridge/action/chat.h"


#ifndef LLM_BRIDGE__ACTION__DETAIL__CHAT__STRUCT_H_
#define LLM_BRIDGE__ACTION__DETAIL__CHAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'messages'
#include "llm_bridge/msg/detail/chat_message__struct.h"

/// Struct defined in action/Chat in the package llm_bridge.
typedef struct llm_bridge__action__Chat_Goal
{
  /// 完整对话上下文
  llm_bridge__msg__ChatMessage__Sequence messages;
  /// true=流式, false=阻塞
  bool stream;
} llm_bridge__action__Chat_Goal;

// Struct for a sequence of llm_bridge__action__Chat_Goal.
typedef struct llm_bridge__action__Chat_Goal__Sequence
{
  llm_bridge__action__Chat_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_bridge__action__Chat_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'content'
// Member 'error_msg'
#include "rosidl_runtime_c/string.h"
// Member 'updated_messages'
// already included above
// #include "llm_bridge/msg/detail/chat_message__struct.h"

/// Struct defined in action/Chat in the package llm_bridge.
typedef struct llm_bridge__action__Chat_Result
{
  /// 最终回复文本
  rosidl_runtime_c__String content;
  /// 加入assistant回复后的完整上下文
  llm_bridge__msg__ChatMessage__Sequence updated_messages;
  bool success;
  rosidl_runtime_c__String error_msg;
} llm_bridge__action__Chat_Result;

// Struct for a sequence of llm_bridge__action__Chat_Result.
typedef struct llm_bridge__action__Chat_Result__Sequence
{
  llm_bridge__action__Chat_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_bridge__action__Chat_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'partial_content'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Chat in the package llm_bridge.
typedef struct llm_bridge__action__Chat_Feedback
{
  /// 流式增量文本
  rosidl_runtime_c__String partial_content;
} llm_bridge__action__Chat_Feedback;

// Struct for a sequence of llm_bridge__action__Chat_Feedback.
typedef struct llm_bridge__action__Chat_Feedback__Sequence
{
  llm_bridge__action__Chat_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_bridge__action__Chat_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "llm_bridge/action/detail/chat__struct.h"

/// Struct defined in action/Chat in the package llm_bridge.
typedef struct llm_bridge__action__Chat_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  llm_bridge__action__Chat_Goal goal;
} llm_bridge__action__Chat_SendGoal_Request;

// Struct for a sequence of llm_bridge__action__Chat_SendGoal_Request.
typedef struct llm_bridge__action__Chat_SendGoal_Request__Sequence
{
  llm_bridge__action__Chat_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_bridge__action__Chat_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Chat in the package llm_bridge.
typedef struct llm_bridge__action__Chat_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} llm_bridge__action__Chat_SendGoal_Response;

// Struct for a sequence of llm_bridge__action__Chat_SendGoal_Response.
typedef struct llm_bridge__action__Chat_SendGoal_Response__Sequence
{
  llm_bridge__action__Chat_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_bridge__action__Chat_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  llm_bridge__action__Chat_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  llm_bridge__action__Chat_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Chat in the package llm_bridge.
typedef struct llm_bridge__action__Chat_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  llm_bridge__action__Chat_SendGoal_Request__Sequence request;
  llm_bridge__action__Chat_SendGoal_Response__Sequence response;
} llm_bridge__action__Chat_SendGoal_Event;

// Struct for a sequence of llm_bridge__action__Chat_SendGoal_Event.
typedef struct llm_bridge__action__Chat_SendGoal_Event__Sequence
{
  llm_bridge__action__Chat_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_bridge__action__Chat_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Chat in the package llm_bridge.
typedef struct llm_bridge__action__Chat_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} llm_bridge__action__Chat_GetResult_Request;

// Struct for a sequence of llm_bridge__action__Chat_GetResult_Request.
typedef struct llm_bridge__action__Chat_GetResult_Request__Sequence
{
  llm_bridge__action__Chat_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_bridge__action__Chat_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "llm_bridge/action/detail/chat__struct.h"

/// Struct defined in action/Chat in the package llm_bridge.
typedef struct llm_bridge__action__Chat_GetResult_Response
{
  int8_t status;
  llm_bridge__action__Chat_Result result;
} llm_bridge__action__Chat_GetResult_Response;

// Struct for a sequence of llm_bridge__action__Chat_GetResult_Response.
typedef struct llm_bridge__action__Chat_GetResult_Response__Sequence
{
  llm_bridge__action__Chat_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_bridge__action__Chat_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  llm_bridge__action__Chat_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  llm_bridge__action__Chat_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Chat in the package llm_bridge.
typedef struct llm_bridge__action__Chat_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  llm_bridge__action__Chat_GetResult_Request__Sequence request;
  llm_bridge__action__Chat_GetResult_Response__Sequence response;
} llm_bridge__action__Chat_GetResult_Event;

// Struct for a sequence of llm_bridge__action__Chat_GetResult_Event.
typedef struct llm_bridge__action__Chat_GetResult_Event__Sequence
{
  llm_bridge__action__Chat_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_bridge__action__Chat_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "llm_bridge/action/detail/chat__struct.h"

/// Struct defined in action/Chat in the package llm_bridge.
typedef struct llm_bridge__action__Chat_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  llm_bridge__action__Chat_Feedback feedback;
} llm_bridge__action__Chat_FeedbackMessage;

// Struct for a sequence of llm_bridge__action__Chat_FeedbackMessage.
typedef struct llm_bridge__action__Chat_FeedbackMessage__Sequence
{
  llm_bridge__action__Chat_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_bridge__action__Chat_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLM_BRIDGE__ACTION__DETAIL__CHAT__STRUCT_H_
