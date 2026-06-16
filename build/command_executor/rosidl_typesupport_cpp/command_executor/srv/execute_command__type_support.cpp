// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from command_executor:srv/ExecuteCommand.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "command_executor/srv/detail/execute_command__functions.h"
#include "command_executor/srv/detail/execute_command__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace command_executor
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ExecuteCommand_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteCommand_Request_type_support_ids_t;

static const _ExecuteCommand_Request_type_support_ids_t _ExecuteCommand_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ExecuteCommand_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteCommand_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteCommand_Request_type_support_symbol_names_t _ExecuteCommand_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, command_executor, srv, ExecuteCommand_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, command_executor, srv, ExecuteCommand_Request)),
  }
};

typedef struct _ExecuteCommand_Request_type_support_data_t
{
  void * data[2];
} _ExecuteCommand_Request_type_support_data_t;

static _ExecuteCommand_Request_type_support_data_t _ExecuteCommand_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteCommand_Request_message_typesupport_map = {
  2,
  "command_executor",
  &_ExecuteCommand_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteCommand_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteCommand_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteCommand_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteCommand_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &command_executor__srv__ExecuteCommand_Request__get_type_hash,
  &command_executor__srv__ExecuteCommand_Request__get_type_description,
  &command_executor__srv__ExecuteCommand_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace command_executor

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<command_executor::srv::ExecuteCommand_Request>()
{
  return &::command_executor::srv::rosidl_typesupport_cpp::ExecuteCommand_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, command_executor, srv, ExecuteCommand_Request)() {
  return get_message_type_support_handle<command_executor::srv::ExecuteCommand_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "command_executor/srv/detail/execute_command__functions.h"
// already included above
// #include "command_executor/srv/detail/execute_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace command_executor
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ExecuteCommand_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteCommand_Response_type_support_ids_t;

static const _ExecuteCommand_Response_type_support_ids_t _ExecuteCommand_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ExecuteCommand_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteCommand_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteCommand_Response_type_support_symbol_names_t _ExecuteCommand_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, command_executor, srv, ExecuteCommand_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, command_executor, srv, ExecuteCommand_Response)),
  }
};

typedef struct _ExecuteCommand_Response_type_support_data_t
{
  void * data[2];
} _ExecuteCommand_Response_type_support_data_t;

static _ExecuteCommand_Response_type_support_data_t _ExecuteCommand_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteCommand_Response_message_typesupport_map = {
  2,
  "command_executor",
  &_ExecuteCommand_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteCommand_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteCommand_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteCommand_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteCommand_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &command_executor__srv__ExecuteCommand_Response__get_type_hash,
  &command_executor__srv__ExecuteCommand_Response__get_type_description,
  &command_executor__srv__ExecuteCommand_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace command_executor

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<command_executor::srv::ExecuteCommand_Response>()
{
  return &::command_executor::srv::rosidl_typesupport_cpp::ExecuteCommand_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, command_executor, srv, ExecuteCommand_Response)() {
  return get_message_type_support_handle<command_executor::srv::ExecuteCommand_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "command_executor/srv/detail/execute_command__functions.h"
// already included above
// #include "command_executor/srv/detail/execute_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace command_executor
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ExecuteCommand_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteCommand_Event_type_support_ids_t;

static const _ExecuteCommand_Event_type_support_ids_t _ExecuteCommand_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ExecuteCommand_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteCommand_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteCommand_Event_type_support_symbol_names_t _ExecuteCommand_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, command_executor, srv, ExecuteCommand_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, command_executor, srv, ExecuteCommand_Event)),
  }
};

typedef struct _ExecuteCommand_Event_type_support_data_t
{
  void * data[2];
} _ExecuteCommand_Event_type_support_data_t;

static _ExecuteCommand_Event_type_support_data_t _ExecuteCommand_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteCommand_Event_message_typesupport_map = {
  2,
  "command_executor",
  &_ExecuteCommand_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteCommand_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteCommand_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteCommand_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteCommand_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &command_executor__srv__ExecuteCommand_Event__get_type_hash,
  &command_executor__srv__ExecuteCommand_Event__get_type_description,
  &command_executor__srv__ExecuteCommand_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace command_executor

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<command_executor::srv::ExecuteCommand_Event>()
{
  return &::command_executor::srv::rosidl_typesupport_cpp::ExecuteCommand_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, command_executor, srv, ExecuteCommand_Event)() {
  return get_message_type_support_handle<command_executor::srv::ExecuteCommand_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "command_executor/srv/detail/execute_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace command_executor
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ExecuteCommand_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteCommand_type_support_ids_t;

static const _ExecuteCommand_type_support_ids_t _ExecuteCommand_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ExecuteCommand_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteCommand_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteCommand_type_support_symbol_names_t _ExecuteCommand_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, command_executor, srv, ExecuteCommand)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, command_executor, srv, ExecuteCommand)),
  }
};

typedef struct _ExecuteCommand_type_support_data_t
{
  void * data[2];
} _ExecuteCommand_type_support_data_t;

static _ExecuteCommand_type_support_data_t _ExecuteCommand_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteCommand_service_typesupport_map = {
  2,
  "command_executor",
  &_ExecuteCommand_service_typesupport_ids.typesupport_identifier[0],
  &_ExecuteCommand_service_typesupport_symbol_names.symbol_name[0],
  &_ExecuteCommand_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ExecuteCommand_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteCommand_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<command_executor::srv::ExecuteCommand_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<command_executor::srv::ExecuteCommand_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<command_executor::srv::ExecuteCommand_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<command_executor::srv::ExecuteCommand>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<command_executor::srv::ExecuteCommand>,
  &command_executor__srv__ExecuteCommand__get_type_hash,
  &command_executor__srv__ExecuteCommand__get_type_description,
  &command_executor__srv__ExecuteCommand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace command_executor

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<command_executor::srv::ExecuteCommand>()
{
  return &::command_executor::srv::rosidl_typesupport_cpp::ExecuteCommand_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, command_executor, srv, ExecuteCommand)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<command_executor::srv::ExecuteCommand>();
}

#ifdef __cplusplus
}
#endif
