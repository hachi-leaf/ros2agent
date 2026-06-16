// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_agent:msg/ContentPart.idl
// generated code does not contain a copyright notice

#include "ros_agent/msg/detail/content_part__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_agent
const rosidl_type_hash_t *
ros_agent__msg__ContentPart__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb2, 0xdc, 0x5e, 0x63, 0x67, 0xd4, 0xe3, 0xb7,
      0x7f, 0xd2, 0x62, 0xa9, 0xfe, 0x00, 0x2c, 0x6e,
      0xfc, 0x33, 0x0a, 0x40, 0x97, 0x43, 0x1a, 0x36,
      0x4b, 0xb8, 0x5c, 0xe2, 0xe9, 0xc6, 0xd5, 0xf3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_agent__msg__ContentPart__TYPE_NAME[] = "ros_agent/msg/ContentPart";

// Define type names, field names, and default values
static char ros_agent__msg__ContentPart__FIELD_NAME__type[] = "type";
static char ros_agent__msg__ContentPart__FIELD_NAME__text[] = "text";
static char ros_agent__msg__ContentPart__FIELD_NAME__image_url[] = "image_url";

static rosidl_runtime_c__type_description__Field ros_agent__msg__ContentPart__FIELDS[] = {
  {
    {ros_agent__msg__ContentPart__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_agent__msg__ContentPart__FIELD_NAME__text, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_agent__msg__ContentPart__FIELD_NAME__image_url, 9, 9},
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
ros_agent__msg__ContentPart__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_agent__msg__ContentPart__TYPE_NAME, 25, 25},
      {ros_agent__msg__ContentPart__FIELDS, 3, 3},
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
ros_agent__msg__ContentPart__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_agent__msg__ContentPart__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 120, 120},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_agent__msg__ContentPart__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_agent__msg__ContentPart__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
