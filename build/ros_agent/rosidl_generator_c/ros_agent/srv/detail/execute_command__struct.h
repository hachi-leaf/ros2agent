// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_agent:srv/ExecuteCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_agent/srv/execute_command.h"


#ifndef ROS_AGENT__SRV__DETAIL__EXECUTE_COMMAND__STRUCT_H_
#define ROS_AGENT__SRV__DETAIL__EXECUTE_COMMAND__STRUCT_H_

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

/// Struct defined in srv/ExecuteCommand in the package ros_agent.
typedef struct ros_agent__srv__ExecuteCommand_Request
{
  rosidl_runtime_c__String command;
} ros_agent__srv__ExecuteCommand_Request;

// Struct for a sequence of ros_agent__srv__ExecuteCommand_Request.
typedef struct ros_agent__srv__ExecuteCommand_Request__Sequence
{
  ros_agent__srv__ExecuteCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_agent__srv__ExecuteCommand_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'output'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ExecuteCommand in the package ros_agent.
typedef struct ros_agent__srv__ExecuteCommand_Response
{
  int32_t exit_code;
  rosidl_runtime_c__String output;
} ros_agent__srv__ExecuteCommand_Response;

// Struct for a sequence of ros_agent__srv__ExecuteCommand_Response.
typedef struct ros_agent__srv__ExecuteCommand_Response__Sequence
{
  ros_agent__srv__ExecuteCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_agent__srv__ExecuteCommand_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ros_agent__srv__ExecuteCommand_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ros_agent__srv__ExecuteCommand_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ExecuteCommand in the package ros_agent.
typedef struct ros_agent__srv__ExecuteCommand_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ros_agent__srv__ExecuteCommand_Request__Sequence request;
  ros_agent__srv__ExecuteCommand_Response__Sequence response;
} ros_agent__srv__ExecuteCommand_Event;

// Struct for a sequence of ros_agent__srv__ExecuteCommand_Event.
typedef struct ros_agent__srv__ExecuteCommand_Event__Sequence
{
  ros_agent__srv__ExecuteCommand_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_agent__srv__ExecuteCommand_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_AGENT__SRV__DETAIL__EXECUTE_COMMAND__STRUCT_H_
