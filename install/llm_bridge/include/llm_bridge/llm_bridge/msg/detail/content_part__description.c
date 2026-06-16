// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from llm_bridge:msg/ContentPart.idl
// generated code does not contain a copyright notice

#include "llm_bridge/msg/detail/content_part__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_llm_bridge
const rosidl_type_hash_t *
llm_bridge__msg__ContentPart__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa5, 0xc1, 0xfd, 0x83, 0x6e, 0xf5, 0xec, 0xba,
      0xdc, 0x47, 0x2b, 0x8d, 0x6c, 0x71, 0x4e, 0x01,
      0x6b, 0xed, 0xc9, 0x39, 0x89, 0x86, 0x94, 0x58,
      0x27, 0xb5, 0x7c, 0x22, 0xe3, 0x46, 0x06, 0x19,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char llm_bridge__msg__ContentPart__TYPE_NAME[] = "llm_bridge/msg/ContentPart";

// Define type names, field names, and default values
static char llm_bridge__msg__ContentPart__FIELD_NAME__type[] = "type";
static char llm_bridge__msg__ContentPart__FIELD_NAME__text[] = "text";
static char llm_bridge__msg__ContentPart__FIELD_NAME__image_url[] = "image_url";

static rosidl_runtime_c__type_description__Field llm_bridge__msg__ContentPart__FIELDS[] = {
  {
    {llm_bridge__msg__ContentPart__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {llm_bridge__msg__ContentPart__FIELD_NAME__text, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {llm_bridge__msg__ContentPart__FIELD_NAME__image_url, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
llm_bridge__msg__ContentPart__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {llm_bridge__msg__ContentPart__TYPE_NAME, 26, 26},
      {llm_bridge__msg__ContentPart__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string type        # \\xe5\\x8f\\xaf\\xe5\\x8f\\x96 \"text\" \\xe6\\x88\\x96 \"image_url\"\n"
  "string text        # type=\"text\"\\xe6\\x97\\xb6\\xe6\\x9c\\x89\\xe6\\x95\\x88\n"
  "string image_url   # type=\"image_url\"\\xe6\\x97\\xb6\\xe6\\x9c\\x89\\xe6\\x95\\x88";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
llm_bridge__msg__ContentPart__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {llm_bridge__msg__ContentPart__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 121, 121},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
llm_bridge__msg__ContentPart__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *llm_bridge__msg__ContentPart__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
