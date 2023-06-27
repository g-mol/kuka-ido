// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kuka_msgs_pkg:msg/WheelData.idl
// generated code does not contain a copyright notice
#include "kuka_msgs_pkg/msg/detail/wheel_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
kuka_msgs_pkg__msg__WheelData__init(kuka_msgs_pkg__msg__WheelData * msg)
{
  if (!msg) {
    return false;
  }
  // position
  // velocity
  return true;
}

void
kuka_msgs_pkg__msg__WheelData__fini(kuka_msgs_pkg__msg__WheelData * msg)
{
  if (!msg) {
    return;
  }
  // position
  // velocity
}

bool
kuka_msgs_pkg__msg__WheelData__are_equal(const kuka_msgs_pkg__msg__WheelData * lhs, const kuka_msgs_pkg__msg__WheelData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  return true;
}

bool
kuka_msgs_pkg__msg__WheelData__copy(
  const kuka_msgs_pkg__msg__WheelData * input,
  kuka_msgs_pkg__msg__WheelData * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  output->position = input->position;
  // velocity
  output->velocity = input->velocity;
  return true;
}

kuka_msgs_pkg__msg__WheelData *
kuka_msgs_pkg__msg__WheelData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kuka_msgs_pkg__msg__WheelData * msg = (kuka_msgs_pkg__msg__WheelData *)allocator.allocate(sizeof(kuka_msgs_pkg__msg__WheelData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kuka_msgs_pkg__msg__WheelData));
  bool success = kuka_msgs_pkg__msg__WheelData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
kuka_msgs_pkg__msg__WheelData__destroy(kuka_msgs_pkg__msg__WheelData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    kuka_msgs_pkg__msg__WheelData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
kuka_msgs_pkg__msg__WheelData__Sequence__init(kuka_msgs_pkg__msg__WheelData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kuka_msgs_pkg__msg__WheelData * data = NULL;

  if (size) {
    data = (kuka_msgs_pkg__msg__WheelData *)allocator.zero_allocate(size, sizeof(kuka_msgs_pkg__msg__WheelData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kuka_msgs_pkg__msg__WheelData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kuka_msgs_pkg__msg__WheelData__fini(&data[i - 1]);
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
kuka_msgs_pkg__msg__WheelData__Sequence__fini(kuka_msgs_pkg__msg__WheelData__Sequence * array)
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
      kuka_msgs_pkg__msg__WheelData__fini(&array->data[i]);
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

kuka_msgs_pkg__msg__WheelData__Sequence *
kuka_msgs_pkg__msg__WheelData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  kuka_msgs_pkg__msg__WheelData__Sequence * array = (kuka_msgs_pkg__msg__WheelData__Sequence *)allocator.allocate(sizeof(kuka_msgs_pkg__msg__WheelData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = kuka_msgs_pkg__msg__WheelData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
kuka_msgs_pkg__msg__WheelData__Sequence__destroy(kuka_msgs_pkg__msg__WheelData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    kuka_msgs_pkg__msg__WheelData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
kuka_msgs_pkg__msg__WheelData__Sequence__are_equal(const kuka_msgs_pkg__msg__WheelData__Sequence * lhs, const kuka_msgs_pkg__msg__WheelData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kuka_msgs_pkg__msg__WheelData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kuka_msgs_pkg__msg__WheelData__Sequence__copy(
  const kuka_msgs_pkg__msg__WheelData__Sequence * input,
  kuka_msgs_pkg__msg__WheelData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kuka_msgs_pkg__msg__WheelData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    kuka_msgs_pkg__msg__WheelData * data =
      (kuka_msgs_pkg__msg__WheelData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kuka_msgs_pkg__msg__WheelData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          kuka_msgs_pkg__msg__WheelData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!kuka_msgs_pkg__msg__WheelData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
