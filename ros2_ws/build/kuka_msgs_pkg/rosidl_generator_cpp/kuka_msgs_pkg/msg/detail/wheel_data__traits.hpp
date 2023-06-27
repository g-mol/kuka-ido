// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kuka_msgs_pkg:msg/WheelData.idl
// generated code does not contain a copyright notice

#ifndef KUKA_MSGS_PKG__MSG__DETAIL__WHEEL_DATA__TRAITS_HPP_
#define KUKA_MSGS_PKG__MSG__DETAIL__WHEEL_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "kuka_msgs_pkg/msg/detail/wheel_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace kuka_msgs_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelData & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WheelData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace kuka_msgs_pkg

namespace rosidl_generator_traits
{

[[deprecated("use kuka_msgs_pkg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const kuka_msgs_pkg::msg::WheelData & msg,
  std::ostream & out, size_t indentation = 0)
{
  kuka_msgs_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use kuka_msgs_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const kuka_msgs_pkg::msg::WheelData & msg)
{
  return kuka_msgs_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<kuka_msgs_pkg::msg::WheelData>()
{
  return "kuka_msgs_pkg::msg::WheelData";
}

template<>
inline const char * name<kuka_msgs_pkg::msg::WheelData>()
{
  return "kuka_msgs_pkg/msg/WheelData";
}

template<>
struct has_fixed_size<kuka_msgs_pkg::msg::WheelData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kuka_msgs_pkg::msg::WheelData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kuka_msgs_pkg::msg::WheelData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KUKA_MSGS_PKG__MSG__DETAIL__WHEEL_DATA__TRAITS_HPP_
