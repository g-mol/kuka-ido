// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kuka_msgs_pkg:msg/SingleWheelData.idl
// generated code does not contain a copyright notice

#ifndef KUKA_MSGS_PKG__MSG__DETAIL__SINGLE_WHEEL_DATA__BUILDER_HPP_
#define KUKA_MSGS_PKG__MSG__DETAIL__SINGLE_WHEEL_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "kuka_msgs_pkg/msg/detail/single_wheel_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace kuka_msgs_pkg
{

namespace msg
{

namespace builder
{

class Init_SingleWheelData_position
{
public:
  Init_SingleWheelData_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::kuka_msgs_pkg::msg::SingleWheelData position(::kuka_msgs_pkg::msg::SingleWheelData::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kuka_msgs_pkg::msg::SingleWheelData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kuka_msgs_pkg::msg::SingleWheelData>()
{
  return kuka_msgs_pkg::msg::builder::Init_SingleWheelData_position();
}

}  // namespace kuka_msgs_pkg

#endif  // KUKA_MSGS_PKG__MSG__DETAIL__SINGLE_WHEEL_DATA__BUILDER_HPP_
