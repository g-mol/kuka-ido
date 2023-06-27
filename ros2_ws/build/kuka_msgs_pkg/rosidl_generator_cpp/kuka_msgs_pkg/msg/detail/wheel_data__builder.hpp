// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kuka_msgs_pkg:msg/WheelData.idl
// generated code does not contain a copyright notice

#ifndef KUKA_MSGS_PKG__MSG__DETAIL__WHEEL_DATA__BUILDER_HPP_
#define KUKA_MSGS_PKG__MSG__DETAIL__WHEEL_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kuka_msgs_pkg/msg/detail/wheel_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kuka_msgs_pkg
{

namespace msg
{

namespace builder
{

class Init_WheelData_velocity
{
public:
  explicit Init_WheelData_velocity(::kuka_msgs_pkg::msg::WheelData & msg)
  : msg_(msg)
  {}
  ::kuka_msgs_pkg::msg::WheelData velocity(::kuka_msgs_pkg::msg::WheelData::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kuka_msgs_pkg::msg::WheelData msg_;
};

class Init_WheelData_position
{
public:
  Init_WheelData_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelData_velocity position(::kuka_msgs_pkg::msg::WheelData::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_WheelData_velocity(msg_);
  }

private:
  ::kuka_msgs_pkg::msg::WheelData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kuka_msgs_pkg::msg::WheelData>()
{
  return kuka_msgs_pkg::msg::builder::Init_WheelData_position();
}

}  // namespace kuka_msgs_pkg

#endif  // KUKA_MSGS_PKG__MSG__DETAIL__WHEEL_DATA__BUILDER_HPP_
