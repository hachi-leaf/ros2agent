// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from llm_bridge_cpp:msg/ChatMessage.idl
// generated code does not contain a copyright notice
#include "llm_bridge_cpp/msg/detail/chat_message__rosidl_typesupport_fastrtps_cpp.hpp"
#include "llm_bridge_cpp/msg/detail/chat_message__functions.h"
#include "llm_bridge_cpp/msg/detail/chat_message__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace llm_bridge_cpp
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const llm_bridge_cpp::msg::ContentPart &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  llm_bridge_cpp::msg::ContentPart &);
size_t get_serialized_size(
  const llm_bridge_cpp::msg::ContentPart &,
  size_t current_alignment);
size_t
max_serialized_size_ContentPart(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const llm_bridge_cpp::msg::ContentPart &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const llm_bridge_cpp::msg::ContentPart &,
  size_t current_alignment);
size_t
max_serialized_size_key_ContentPart(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace llm_bridge_cpp


namespace llm_bridge_cpp
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llm_bridge_cpp
cdr_serialize(
  const llm_bridge_cpp::msg::ChatMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: role
  cdr << ros_message.role;

  // Member: parts
  {
    size_t size = ros_message.parts.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      llm_bridge_cpp::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.parts[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llm_bridge_cpp
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  llm_bridge_cpp::msg::ChatMessage & ros_message)
{
  // Member: role
  cdr >> ros_message.role;

  // Member: parts
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.parts.resize(size);
    for (size_t i = 0; i < size; i++) {
      llm_bridge_cpp::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.parts[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llm_bridge_cpp
get_serialized_size(
  const llm_bridge_cpp::msg::ChatMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: role
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.role.size() + 1);

  // Member: parts
  {
    size_t array_size = ros_message.parts.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        llm_bridge_cpp::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.parts[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llm_bridge_cpp
max_serialized_size_ChatMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: role
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // Member: parts
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        llm_bridge_cpp::msg::typesupport_fastrtps_cpp::max_serialized_size_ContentPart(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = llm_bridge_cpp::msg::ChatMessage;
    is_plain =
      (
      offsetof(DataType, parts) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llm_bridge_cpp
cdr_serialize_key(
  const llm_bridge_cpp::msg::ChatMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: role
  cdr << ros_message.role;

  // Member: parts
  {
    size_t size = ros_message.parts.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      llm_bridge_cpp::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.parts[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llm_bridge_cpp
get_serialized_size_key(
  const llm_bridge_cpp::msg::ChatMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: role
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.role.size() + 1);

  // Member: parts
  {
    size_t array_size = ros_message.parts.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        llm_bridge_cpp::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.parts[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_llm_bridge_cpp
max_serialized_size_key_ChatMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: role
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: parts
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        llm_bridge_cpp::msg::typesupport_fastrtps_cpp::max_serialized_size_key_ContentPart(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = llm_bridge_cpp::msg::ChatMessage;
    is_plain =
      (
      offsetof(DataType, parts) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _ChatMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const llm_bridge_cpp::msg::ChatMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ChatMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<llm_bridge_cpp::msg::ChatMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ChatMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const llm_bridge_cpp::msg::ChatMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ChatMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ChatMessage(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ChatMessage__callbacks = {
  "llm_bridge_cpp::msg",
  "ChatMessage",
  _ChatMessage__cdr_serialize,
  _ChatMessage__cdr_deserialize,
  _ChatMessage__get_serialized_size,
  _ChatMessage__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ChatMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ChatMessage__callbacks,
  get_message_typesupport_handle_function,
  &llm_bridge_cpp__msg__ChatMessage__get_type_hash,
  &llm_bridge_cpp__msg__ChatMessage__get_type_description,
  &llm_bridge_cpp__msg__ChatMessage__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace llm_bridge_cpp

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_llm_bridge_cpp
const rosidl_message_type_support_t *
get_message_type_support_handle<llm_bridge_cpp::msg::ChatMessage>()
{
  return &llm_bridge_cpp::msg::typesupport_fastrtps_cpp::_ChatMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, llm_bridge_cpp, msg, ChatMessage)() {
  return &llm_bridge_cpp::msg::typesupport_fastrtps_cpp::_ChatMessage__handle;
}

#ifdef __cplusplus
}
#endif
