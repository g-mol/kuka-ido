// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kuka_msgs_pkg:msg/WheelData.idl
// generated code does not contain a copyright notice

#ifndef KUKA_MSGS_PKG__MSG__DETAIL__WHEEL_DATA__STRUCT_HPP_
#define KUKA_MSGS_PKG__MSG__DETAIL__WHEEL_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__kuka_msgs_pkg__msg__WheelData __attribute__((deprecated))
#else
# define DEPRECATED__kuka_msgs_pkg__msg__WheelData __declspec(deprecated)
#endif

namespace kuka_msgs_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelData_
{
  using Type = WheelData_<ContainerAllocator>;

  explicit WheelData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0;
      this->velocity = 0.0;
    }
  }

  explicit WheelData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0;
      this->velocity = 0.0;
    }
  }

  // field types and members
  using _position_type =
    double;
  _position_type position;
  using _velocity_type =
    double;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__position(
    const double & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kuka_msgs_pkg::msg::WheelData_<ContainerAllocator> *;
  using ConstRawPtr =
    const kuka_msgs_pkg::msg::WheelData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kuka_msgs_pkg::msg::WheelData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kuka_msgs_pkg::msg::WheelData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kuka_msgs_pkg::msg::WheelData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kuka_msgs_pkg::msg::WheelData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kuka_msgs_pkg::msg::WheelData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kuka_msgs_pkg::msg::WheelData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kuka_msgs_pkg::msg::WheelData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kuka_msgs_pkg::msg::WheelData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kuka_msgs_pkg__msg__WheelData
    std::shared_ptr<kuka_msgs_pkg::msg::WheelData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kuka_msgs_pkg__msg__WheelData
    std::shared_ptr<kuka_msgs_pkg::msg::WheelData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelData_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelData_

// alias to use template instance with default allocator
using WheelData =
  kuka_msgs_pkg::msg::WheelData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kuka_msgs_pkg

#endif  // KUKA_MSGS_PKG__MSG__DETAIL__WHEEL_DATA__STRUCT_HPP_
