// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from llm_bridge_cpp:msg/ContentPart.idl
// generated code does not contain a copyright notice

#include "llm_bridge_cpp/msg/detail/content_part__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_llm_bridge_cpp
const rosidl_type_hash_t *
llm_bridge_cpp__msg__ContentPart__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7c, 0x40, 0xc5, 0x14, 0x6c, 0x81, 0x53, 0x5a,
      0x9b, 0x15, 0x09, 0x95, 0x40, 0x42, 0xe2, 0x52,
      0x0d, 0x19, 0xa8, 0x00, 0x4c, 0xa0, 0x83, 0xcc,
      0x44, 0xb3, 0xad, 0xb3, 0xf7, 0x09, 0xca, 0x56,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char llm_bridge_cpp__msg__ContentPart__TYPE_NAME[] = "llm_bridge_cpp/msg/ContentPart";

// Define type names, field names, and default values
static char llm_bridge_cpp__msg__ContentPart__FIELD_NAME__type[] = "type";
static char llm_bridge_cpp__msg__ContentPart__FIELD_NAME__text[] = "text";
static char llm_bridge_cpp__msg__ContentPart__FIELD_NAME__image_url[] = "image_url";

static rosidl_runtime_c__type_description__Field llm_bridge_cpp__msg__ContentPart__FIELDS[] = {
  {
    {llm_bridge_cpp__msg__ContentPart__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {llm_bridge_cpp__msg__ContentPart__FIELD_NAME__text, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {llm_bridge_cpp__msg__ContentPart__FIELD_NAME__image_url, 9, 9},
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
llm_bridge_cpp__msg__ContentPart__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {llm_bridge_cpp__msg__ContentPart__TYPE_NAME, 30, 30},
      {llm_bridge_cpp__msg__ContentPart__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string type        # \"text\" \\xe6\\x88\\x96 \"image_url\"\n"
  "string text        # type=\"text\" \\xe6\\x97\\xb6\\xe6\\x9c\\x89\\xe6\\x95\\x88\n"
  "string image_url   # type=\"image_url\" \\xe6\\x97\\xb6\\xe6\\x9c\\x89\\xe6\\x95\\x88";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
llm_bridge_cpp__msg__ContentPart__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {llm_bridge_cpp__msg__ContentPart__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 121, 121},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
llm_bridge_cpp__msg__ContentPart__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *llm_bridge_cpp__msg__ContentPart__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
