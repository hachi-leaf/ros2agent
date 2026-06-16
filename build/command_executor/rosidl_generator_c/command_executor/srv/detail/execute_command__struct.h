// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from command_executor:srv/ExecuteCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "command_executor/srv/execute_command.h"


#ifndef COMMAND_EXECUTOR__SRV__DETAIL__EXECUTE_COMMAND__STRUCT_H_
#define COMMAND_EXECUTOR__SRV__DETAIL__EXECUTE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ExecuteCommand in the package command_executor.
typedef struct command_executor__srv__ExecuteCommand_Request
{
  /// 要执行的命令
  rosidl_runtime_c__String command;
} command_executor__srv__ExecuteCommand_Request;

// Struct for a sequence of command_executor__srv__ExecuteCommand_Request.
typedef struct command_executor__srv__ExecuteCommand_Request__Sequence
{
  command_executor__srv__ExecuteCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} command_executor__srv__ExecuteCommand_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'output'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ExecuteCommand in the package command_executor.
typedef struct command_executor__srv__ExecuteCommand_Response
{
  /// 命令退出码（0 成功）
  int32_t exit_code;
  /// stdout + stderr 输出
  rosidl_runtime_c__String output;
} command_executor__srv__ExecuteCommand_Response;

// Struct for a sequence of command_executor__srv__ExecuteCommand_Response.
typedef struct command_executor__srv__ExecuteCommand_Response__Sequence
{
  command_executor__srv__ExecuteCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} command_executor__srv__ExecuteCommand_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  command_executor__srv__ExecuteCommand_Event__request__MAX_SIZE = 1
};
// response
enum
{
  command_executor__srv__ExecuteCommand_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ExecuteCommand in the package command_executor.
typedef struct command_executor__srv__ExecuteCommand_Event
{
  service_msgs__msg__ServiceEventInfo info;
  command_executor__srv__ExecuteCommand_Request__Sequence request;
  command_executor__srv__ExecuteCommand_Response__Sequence response;
} command_executor__srv__ExecuteCommand_Event;

// Struct for a sequence of command_executor__srv__ExecuteCommand_Event.
typedef struct command_executor__srv__ExecuteCommand_Event__Sequence
{
  command_executor__srv__ExecuteCommand_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} command_executor__srv__ExecuteCommand_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMAND_EXECUTOR__SRV__DETAIL__EXECUTE_COMMAND__STRUCT_H_
