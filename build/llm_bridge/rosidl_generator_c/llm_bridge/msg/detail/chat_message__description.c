// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from llm_bridge:msg/ChatMessage.idl
// generated code does not contain a copyright notice

#include "llm_bridge/msg/detail/chat_message__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_llm_bridge
const rosidl_type_hash_t *
llm_bridge__msg__ChatMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xec, 0x2a, 0xa7, 0x4b, 0x5d, 0x14, 0xad, 0x77,
      0xd4, 0x4d, 0xed, 0xc4, 0x7e, 0x5b, 0xe1, 0xa9,
      0xbb, 0x75, 0xb1, 0x09, 0x79, 0xa7, 0x1d, 0x74,
      0xec, 0xa5, 0xa9, 0x3f, 0x36, 0xe4, 0x71, 0xe6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "llm_bridge/msg/detail/content_part__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t llm_bridge__msg__ContentPart__EXPECTED_HASH = {1, {
    0xa5, 0xc1, 0xfd, 0x83, 0x6e, 0xf5, 0xec, 0xba,
    0xdc, 0x47, 0x2b, 0x8d, 0x6c, 0x71, 0x4e, 0x01,
    0x6b, 0xed, 0xc9, 0x39, 0x89, 0x86, 0x94, 0x58,
    0x27, 0xb5, 0x7c, 0x22, 0xe3, 0x46, 0x06, 0x19,
  }};
#endif

static char llm_bridge__msg__ChatMessage__TYPE_NAME[] = "llm_bridge/msg/ChatMessage";
static char llm_bridge__msg__ContentPart__TYPE_NAME[] = "llm_bridge/msg/ContentPart";

// Define type names, field names, and default values
static char llm_bridge__msg__ChatMessage__FIELD_NAME__role[] = "role";
static char llm_bridge__msg__ChatMessage__FIELD_NAME__parts[] = "parts";

static rosidl_runtime_c__type_description__Field llm_bridge__msg__ChatMessage__FIELDS[] = {
  {
    {llm_bridge__msg__ChatMessage__FIELD_NAME__role, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {llm_bridge__msg__ChatMessage__FIELD_NAME__parts, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {llm_bridge__msg__ContentPart__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription llm_bridge__msg__ChatMessage__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {llm_bridge__msg__ContentPart__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
llm_bridge__msg__ChatMessage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {llm_bridge__msg__ChatMessage__TYPE_NAME, 26, 26},
      {llm_bridge__msg__ChatMessage__FIELDS, 2, 2},
    },
    {llm_bridge__msg__ChatMessage__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&llm_bridge__msg__ContentPart__EXPECTED_HASH, llm_bridge__msg__ContentPart__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = llm_bridge__msg__ContentPart__get_type_description(NULL)->type_description.fields;
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
llm_bridge__msg__ChatMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {llm_bridge__msg__ChatMessage__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 97, 97},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
llm_bridge__msg__ChatMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *llm_bridge__msg__ChatMessage__get_individual_type_description_source(NULL),
    sources[1] = *llm_bridge__msg__ContentPart__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
