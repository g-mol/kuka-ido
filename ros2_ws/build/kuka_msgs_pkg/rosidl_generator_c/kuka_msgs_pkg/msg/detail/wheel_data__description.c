// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from kuka_msgs_pkg:msg/WheelData.idl
// generated code does not contain a copyright notice

#include "kuka_msgs_pkg/msg/detail/wheel_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_kuka_msgs_pkg
const rosidl_type_hash_t *
kuka_msgs_pkg__msg__WheelData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1b, 0xcf, 0x70, 0x3f, 0x3d, 0x71, 0x8a, 0xee,
      0x78, 0xb2, 0x28, 0x6a, 0xe9, 0x34, 0xc6, 0x74,
      0x56, 0x21, 0xff, 0x16, 0x8a, 0xcc, 0x59, 0xc2,
      0xe2, 0x75, 0x04, 0x9e, 0x4a, 0x63, 0x53, 0x42,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char kuka_msgs_pkg__msg__WheelData__TYPE_NAME[] = "kuka_msgs_pkg/msg/WheelData";

// Define type names, field names, and default values
static char kuka_msgs_pkg__msg__WheelData__FIELD_NAME__position[] = "position";
static char kuka_msgs_pkg__msg__WheelData__FIELD_NAME__velocity[] = "velocity";

static rosidl_runtime_c__type_description__Field kuka_msgs_pkg__msg__WheelData__FIELDS[] = {
  {
    {kuka_msgs_pkg__msg__WheelData__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {kuka_msgs_pkg__msg__WheelData__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
kuka_msgs_pkg__msg__WheelData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {kuka_msgs_pkg__msg__WheelData__TYPE_NAME, 27, 27},
      {kuka_msgs_pkg__msg__WheelData__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 position\n"
  "float64 velocity";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
kuka_msgs_pkg__msg__WheelData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {kuka_msgs_pkg__msg__WheelData__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 34, 34},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
kuka_msgs_pkg__msg__WheelData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *kuka_msgs_pkg__msg__WheelData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
