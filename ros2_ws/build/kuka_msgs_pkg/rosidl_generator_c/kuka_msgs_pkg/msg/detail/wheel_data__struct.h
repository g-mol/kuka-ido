// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from kuka_msgs_pkg:msg/WheelData.idl
// generated code does not contain a copyright notice

#ifndef KUKA_MSGS_PKG__MSG__DETAIL__WHEEL_DATA__STRUCT_H_
#define KUKA_MSGS_PKG__MSG__DETAIL__WHEEL_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/WheelData in the package kuka_msgs_pkg.
typedef struct kuka_msgs_pkg__msg__WheelData
{
  double position;
  double velocity;
} kuka_msgs_pkg__msg__WheelData;

// Struct for a sequence of kuka_msgs_pkg__msg__WheelData.
typedef struct kuka_msgs_pkg__msg__WheelData__Sequence
{
  kuka_msgs_pkg__msg__WheelData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} kuka_msgs_pkg__msg__WheelData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // KUKA_MSGS_PKG__MSG__DETAIL__WHEEL_DATA__STRUCT_H_
