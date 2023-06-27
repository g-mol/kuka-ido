// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kuka_msgs_pkg:msg/SingleWheelData.idl
// generated code does not contain a copyright notice
#include "kuka_msgs_pkg/msg/detail/single_wheel_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
kuka_msgs_pkg__msg__SingleWheelData__init(kuka_msgs_pkg__msg__SingleWheelData * msg)
{
  if (!msg) {
    return false;
  }
  // position
  return true;
}

void
kuka_msgs_pkg__msg__SingleWheelData__fini(kuka_msgs_pkg__msg__SingleWheelData * msg)
{
  if (!msg) {
    return;
  }
  // position
}

bool
kuka_msgs_pkg__msg__SingleWheelData__are_equal(const kuka_msgs_pkg__msg__SingleWheelData * lhs, const kuka_msgs_pkg__msg__SingleWheelData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  return true;
}

bool
kuka_msgs_pkg__msg__SingleWheelData__copy(
  const kuka_msgs_pkg__msg__SingleWheelData * input,
  kuka_msgs_pkg__msg__SingleWheelData * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  output->position = input->position;
  return true;
}

kuka_msgs_pkg__msg__SingleWheelData *
kuka_msgs_pkg__msg__SingleWheelData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kuka_msgs_pkg__msg__SingleWheelData * msg = (kuka_msgs_pkg__msg__SingleWheelData *)allocator.allocate(sizeof(kuka_msgs_pkg__msg__SingleWheelData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kuka_msgs_pkg__msg__SingleWheelData));
  bool success = kuka_msgs_pkg__msg__SingleWheelData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kuka_msgs_pkg__msg__SingleWheelData__destroy(kuka_msgs_pkg__msg__SingleWheelData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kuka_msgs_pkg__msg__SingleWheelData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kuka_msgs_pkg__msg__SingleWheelData__Sequence__init(kuka_msgs_pkg__msg__SingleWheelData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kuka_msgs_pkg__msg__SingleWheelData * data = NULL;

  if (size) {
    data = (kuka_msgs_pkg__msg__SingleWheelData *)allocator.zero_allocate(size, sizeof(kuka_msgs_pkg__msg__SingleWheelData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kuka_msgs_pkg__msg__SingleWheelData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kuka_msgs_pkg__msg__SingleWheelData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
kuka_msgs_pkg__msg__SingleWheelData__Sequence__fini(kuka_msgs_pkg__msg__SingleWheelData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kuka_msgs_pkg__msg__SingleWheelData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

kuka_msgs_pkg__msg__SingleWheelData__Sequence *
kuka_msgs_pkg__msg__SingleWheelData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kuka_msgs_pkg__msg__SingleWheelData__Sequence * array = (kuka_msgs_pkg__msg__SingleWheelData__Sequence *)allocator.allocate(sizeof(kuka_msgs_pkg__msg__SingleWheelData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kuka_msgs_pkg__msg__SingleWheelData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kuka_msgs_pkg__msg__SingleWheelData__Sequence__destroy(kuka_msgs_pkg__msg__SingleWheelData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kuka_msgs_pkg__msg__SingleWheelData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kuka_msgs_pkg__msg__SingleWheelData__Sequence__are_equal(const kuka_msgs_pkg__msg__SingleWheelData__Sequence * lhs, const kuka_msgs_pkg__msg__SingleWheelData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kuka_msgs_pkg__msg__SingleWheelData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kuka_msgs_pkg__msg__SingleWheelData__Sequence__copy(
  const kuka_msgs_pkg__msg__SingleWheelData__Sequence * input,
  kuka_msgs_pkg__msg__SingleWheelData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kuka_msgs_pkg__msg__SingleWheelData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kuka_msgs_pkg__msg__SingleWheelData * data =
      (kuka_msgs_pkg__msg__SingleWheelData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kuka_msgs_pkg__msg__SingleWheelData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kuka_msgs_pkg__msg__SingleWheelData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kuka_msgs_pkg__msg__SingleWheelData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
