// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from kuka_msgs_pkg:msg/SingleWheelData.idl
// generated code does not contain a copyright notice

#ifndef KUKA_MSGS_PKG__MSG__DETAIL__SINGLE_WHEEL_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define KUKA_MSGS_PKG__MSG__DETAIL__SINGLE_WHEEL_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "kuka_msgs_pkg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "kuka_msgs_pkg/msg/detail/single_wheel_data__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace kuka_msgs_pkg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kuka_msgs_pkg
cdr_serialize(
  const kuka_msgs_pkg::msg::SingleWheelData & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kuka_msgs_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  kuka_msgs_pkg::msg::SingleWheelData & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kuka_msgs_pkg
get_serialized_size(
  const kuka_msgs_pkg::msg::SingleWheelData & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kuka_msgs_pkg
max_serialized_size_SingleWheelData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace kuka_msgs_pkg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kuka_msgs_pkg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kuka_msgs_pkg, msg, SingleWheelData)();

#ifdef __cplusplus
}
#endif

#endif  // KUKA_MSGS_PKG__MSG__DETAIL__SINGLE_WHEEL_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
