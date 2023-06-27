// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kuka_msgs_pkg:msg/SingleWheelData.idl
// generated code does not contain a copyright notice

#ifndef KUKA_MSGS_PKG__MSG__DETAIL__SINGLE_WHEEL_DATA__STRUCT_H_
#define KUKA_MSGS_PKG__MSG__DETAIL__SINGLE_WHEEL_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/SingleWheelData in the package kuka_msgs_pkg.
typedef struct kuka_msgs_pkg__msg__SingleWheelData
{
  float position;
} kuka_msgs_pkg__msg__SingleWheelData;

// Struct for a sequence of kuka_msgs_pkg__msg__SingleWheelData.
typedef struct kuka_msgs_pkg__msg__SingleWheelData__Sequence
{
  kuka_msgs_pkg__msg__SingleWheelData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kuka_msgs_pkg__msg__SingleWheelData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KUKA_MSGS_PKG__MSG__DETAIL__SINGLE_WHEEL_DATA__STRUCT_H_
