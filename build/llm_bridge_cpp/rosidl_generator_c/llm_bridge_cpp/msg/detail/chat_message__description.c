// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from llm_bridge_cpp:msg/ChatMessage.idl
// generated code does not contain a copyright notice

#include "llm_bridge_cpp/msg/detail/chat_message__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_llm_bridge_cpp
const rosidl_type_hash_t *
llm_bridge_cpp__msg__ChatMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0x69, 0x54, 0xa8, 0x12, 0xff, 0x30, 0xb9,
      0xaa, 0xfd, 0xb2, 0x67, 0xc5, 0xd9, 0xc1, 0xd2,
      0x6d, 0xa2, 0xcb, 0xea, 0xc5, 0x4e, 0xc5, 0xc8,
      0x7f, 0x65, 0xa9, 0x31, 0xf9, 0x83, 0x37, 0xe8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "llm_bridge_cpp/msg/detail/content_part__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t llm_bridge_cpp__msg__ContentPart__EXPECTED_HASH = {1, {
    0x7c, 0x40, 0xc5, 0x14, 0x6c, 0x81, 0x53, 0x5a,
    0x9b, 0x15, 0x09, 0x95, 0x40, 0x42, 0xe2, 0x52,
    0x0d, 0x19, 0xa8, 0x00, 0x4c, 0xa0, 0x83, 0xcc,
    0x44, 0xb3, 0xad, 0xb3, 0xf7, 0x09, 0xca, 0x56,
  }};
#endif

static char llm_bridge_cpp__msg__ChatMessage__TYPE_NAME[] = "llm_bridge_cpp/msg/ChatMessage";
static char llm_bridge_cpp__msg__ContentPart__TYPE_NAME[] = "llm_bridge_cpp/msg/ContentPart";

// Define type names, field names, and default values
static char llm_bridge_cpp__msg__ChatMessage__FIELD_NAME__role[] = "role";
static char llm_bridge_cpp__msg__ChatMessage__FIELD_NAME__parts[] = "parts";

static rosidl_runtime_c__type_description__Field llm_bridge_cpp__msg__ChatMessage__FIELDS[] = {
  {
    {llm_bridge_cpp__msg__ChatMessage__FIELD_NAME__role, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {llm_bridge_cpp__msg__ChatMessage__FIELD_NAME__parts, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {llm_bridge_cpp__msg__ContentPart__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription llm_bridge_cpp__msg__ChatMessage__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {llm_bridge_cpp__msg__ContentPart__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
llm_bridge_cpp__msg__ChatMessage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {llm_bridge_cpp__msg__ChatMessage__TYPE_NAME, 30, 30},
      {llm_bridge_cpp__msg__ChatMessage__FIELDS, 2, 2},
    },
    {llm_bridge_cpp__msg__ChatMessage__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&llm_bridge_cpp__msg__ContentPart__EXPECTED_HASH, llm_bridge_cpp__msg__ContentPart__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = llm_bridge_cpp__msg__ContentPart__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string role                   # system / user / assistant\n"
  "ContentPart[] parts           # \\xe5\\xa4\\x9a\\xe6\\xa8\\xa1\\xe6\\x80\\x81\\xe5\\x86\\x85\\xe5\\xae\\xb9\\xe5\\x88\\x97\\xe8\\xa1\\xa8";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
llm_bridge_cpp__msg__ChatMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {llm_bridge_cpp__msg__ChatMessage__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 98, 98},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
llm_bridge_cpp__msg__ChatMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *llm_bridge_cpp__msg__ChatMessage__get_individual_type_description_source(NULL),
    sources[1] = *llm_bridge_cpp__msg__ContentPart__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
