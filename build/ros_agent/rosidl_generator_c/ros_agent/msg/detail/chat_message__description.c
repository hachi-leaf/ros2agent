// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_agent:msg/ChatMessage.idl
// generated code does not contain a copyright notice

#include "ros_agent/msg/detail/chat_message__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_agent
const rosidl_type_hash_t *
ros_agent__msg__ChatMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc6, 0xc3, 0x1a, 0x56, 0x5c, 0x48, 0x45, 0x36,
      0x9a, 0xeb, 0x1d, 0x88, 0x75, 0x41, 0x57, 0x3e,
      0x53, 0xa5, 0xdc, 0x8b, 0x97, 0x5e, 0x83, 0xa7,
      0xb1, 0xe0, 0xdd, 0x38, 0xf4, 0x49, 0x24, 0xea,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ros_agent/msg/detail/content_part__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ros_agent__msg__ContentPart__EXPECTED_HASH = {1, {
    0xb2, 0xdc, 0x5e, 0x63, 0x67, 0xd4, 0xe3, 0xb7,
    0x7f, 0xd2, 0x62, 0xa9, 0xfe, 0x00, 0x2c, 0x6e,
    0xfc, 0x33, 0x0a, 0x40, 0x97, 0x43, 0x1a, 0x36,
    0x4b, 0xb8, 0x5c, 0xe2, 0xe9, 0xc6, 0xd5, 0xf3,
  }};
#endif

static char ros_agent__msg__ChatMessage__TYPE_NAME[] = "ros_agent/msg/ChatMessage";
static char ros_agent__msg__ContentPart__TYPE_NAME[] = "ros_agent/msg/ContentPart";

// Define type names, field names, and default values
static char ros_agent__msg__ChatMessage__FIELD_NAME__role[] = "role";
static char ros_agent__msg__ChatMessage__FIELD_NAME__parts[] = "parts";

static rosidl_runtime_c__type_description__Field ros_agent__msg__ChatMessage__FIELDS[] = {
  {
    {ros_agent__msg__ChatMessage__FIELD_NAME__role, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_agent__msg__ChatMessage__FIELD_NAME__parts, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ros_agent__msg__ContentPart__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros_agent__msg__ChatMessage__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ros_agent__msg__ContentPart__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_agent__msg__ChatMessage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_agent__msg__ChatMessage__TYPE_NAME, 25, 25},
      {ros_agent__msg__ChatMessage__FIELDS, 2, 2},
    },
    {ros_agent__msg__ChatMessage__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ros_agent__msg__ContentPart__EXPECTED_HASH, ros_agent__msg__ContentPart__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ros_agent__msg__ContentPart__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string role\n"
  "ContentPart[] parts";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_agent__msg__ChatMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_agent__msg__ChatMessage__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 31, 31},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_agent__msg__ChatMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_agent__msg__ChatMessage__get_individual_type_description_source(NULL),
    sources[1] = *ros_agent__msg__ContentPart__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
