// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kuka_msgs_pkg:msg/SingleWheelData.idl
// generated code does not contain a copyright notice

#include "kuka_msgs_pkg/msg/detail/single_wheel_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kuka_msgs_pkg
const rosidl_type_hash_t *
kuka_msgs_pkg__msg__SingleWheelData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x58, 0xef, 0x23, 0xee, 0x4c, 0x73, 0xb9, 0x4d,
      0x8d, 0x54, 0x77, 0x22, 0x58, 0xe2, 0x3e, 0xe3,
      0x32, 0xd5, 0xfb, 0x7d, 0xea, 0x97, 0xe1, 0x0a,
      0xe4, 0xbc, 0x1c, 0xe6, 0x4b, 0x86, 0x25, 0x1e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kuka_msgs_pkg__msg__SingleWheelData__TYPE_NAME[] = "kuka_msgs_pkg/msg/SingleWheelData";

// Define type names, field names, and default values
static char kuka_msgs_pkg__msg__SingleWheelData__FIELD_NAME__position[] = "position";

static rosidl_runtime_c__type_description__Field kuka_msgs_pkg__msg__SingleWheelData__FIELDS[] = {
  {
    {kuka_msgs_pkg__msg__SingleWheelData__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kuka_msgs_pkg__msg__SingleWheelData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kuka_msgs_pkg__msg__SingleWheelData__TYPE_NAME, 33, 33},
      {kuka_msgs_pkg__msg__SingleWheelData__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 position";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kuka_msgs_pkg__msg__SingleWheelData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kuka_msgs_pkg__msg__SingleWheelData__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 17, 17},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kuka_msgs_pkg__msg__SingleWheelData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kuka_msgs_pkg__msg__SingleWheelData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
