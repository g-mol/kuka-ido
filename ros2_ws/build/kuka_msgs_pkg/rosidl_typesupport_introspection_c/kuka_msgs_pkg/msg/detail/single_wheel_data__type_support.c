// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kuka_msgs_pkg:msg/SingleWheelData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kuka_msgs_pkg/msg/detail/single_wheel_data__rosidl_typesupport_introspection_c.h"
#include "kuka_msgs_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kuka_msgs_pkg/msg/detail/single_wheel_data__functions.h"
#include "kuka_msgs_pkg/msg/detail/single_wheel_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void kuka_msgs_pkg__msg__SingleWheelData__rosidl_typesupport_introspection_c__SingleWheelData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kuka_msgs_pkg__msg__SingleWheelData__init(message_memory);
}

void kuka_msgs_pkg__msg__SingleWheelData__rosidl_typesupport_introspection_c__SingleWheelData_fini_function(void * message_memory)
{
  kuka_msgs_pkg__msg__SingleWheelData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember kuka_msgs_pkg__msg__SingleWheelData__rosidl_typesupport_introspection_c__SingleWheelData_message_member_array[1] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kuka_msgs_pkg__msg__SingleWheelData, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kuka_msgs_pkg__msg__SingleWheelData__rosidl_typesupport_introspection_c__SingleWheelData_message_members = {
  "kuka_msgs_pkg__msg",  // message namespace
  "SingleWheelData",  // message name
  1,  // number of fields
  sizeof(kuka_msgs_pkg__msg__SingleWheelData),
  kuka_msgs_pkg__msg__SingleWheelData__rosidl_typesupport_introspection_c__SingleWheelData_message_member_array,  // message members
  kuka_msgs_pkg__msg__SingleWheelData__rosidl_typesupport_introspection_c__SingleWheelData_init_function,  // function to initialize message memory (memory has to be allocated)
  kuka_msgs_pkg__msg__SingleWheelData__rosidl_typesupport_introspection_c__SingleWheelData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kuka_msgs_pkg__msg__SingleWheelData__rosidl_typesupport_introspection_c__SingleWheelData_message_type_support_handle = {
  0,
  &kuka_msgs_pkg__msg__SingleWheelData__rosidl_typesupport_introspection_c__SingleWheelData_message_members,
  get_message_typesupport_handle_function,
  &kuka_msgs_pkg__msg__SingleWheelData__get_type_hash,
  &kuka_msgs_pkg__msg__SingleWheelData__get_type_description,
  &kuka_msgs_pkg__msg__SingleWheelData__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kuka_msgs_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kuka_msgs_pkg, msg, SingleWheelData)() {
  if (!kuka_msgs_pkg__msg__SingleWheelData__rosidl_typesupport_introspection_c__SingleWheelData_message_type_support_handle.typesupport_identifier) {
    kuka_msgs_pkg__msg__SingleWheelData__rosidl_typesupport_introspection_c__SingleWheelData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kuka_msgs_pkg__msg__SingleWheelData__rosidl_typesupport_introspection_c__SingleWheelData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
