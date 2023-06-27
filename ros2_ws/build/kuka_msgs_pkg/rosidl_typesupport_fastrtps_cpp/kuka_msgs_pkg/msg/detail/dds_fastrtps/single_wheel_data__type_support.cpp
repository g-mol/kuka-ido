// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from kuka_msgs_pkg:msg/SingleWheelData.idl
// generated code does not contain a copyright notice
#include "kuka_msgs_pkg/msg/detail/single_wheel_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "kuka_msgs_pkg/msg/detail/single_wheel_data__functions.h"
#include "kuka_msgs_pkg/msg/detail/single_wheel_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: position
  cdr << ros_message.position;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kuka_msgs_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  kuka_msgs_pkg::msg::SingleWheelData & ros_message)
{
  // Member: position
  cdr >> ros_message.position;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kuka_msgs_pkg
get_serialized_size(
  const kuka_msgs_pkg::msg::SingleWheelData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: position
  {
    size_t item_size = sizeof(ros_message.position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kuka_msgs_pkg
max_serialized_size_SingleWheelData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SingleWheelData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const kuka_msgs_pkg::msg::SingleWheelData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SingleWheelData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<kuka_msgs_pkg::msg::SingleWheelData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SingleWheelData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const kuka_msgs_pkg::msg::SingleWheelData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SingleWheelData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SingleWheelData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SingleWheelData__callbacks = {
  "kuka_msgs_pkg::msg",
  "SingleWheelData",
  _SingleWheelData__cdr_serialize,
  _SingleWheelData__cdr_deserialize,
  _SingleWheelData__get_serialized_size,
  _SingleWheelData__max_serialized_size
};

static rosidl_message_type_support_t _SingleWheelData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SingleWheelData__callbacks,
  get_message_typesupport_handle_function,
  &kuka_msgs_pkg__msg__SingleWheelData__get_type_hash,
  &kuka_msgs_pkg__msg__SingleWheelData__get_type_description,
  &kuka_msgs_pkg__msg__SingleWheelData__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace kuka_msgs_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_kuka_msgs_pkg
const rosidl_message_type_support_t *
get_message_type_support_handle<kuka_msgs_pkg::msg::SingleWheelData>()
{
  return &kuka_msgs_pkg::msg::typesupport_fastrtps_cpp::_SingleWheelData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kuka_msgs_pkg, msg, SingleWheelData)() {
  return &kuka_msgs_pkg::msg::typesupport_fastrtps_cpp::_SingleWheelData__handle;
}

#ifdef __cplusplus
}
#endif
