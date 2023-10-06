// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tmf882x_interfaces:msg/TMF882XMeasure.idl
// generated code does not contain a copyright notice
#include "tmf882x_interfaces/msg/detail/tmf882_x_measure__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `reference_hist`
// Member `hists`
// Member `depths_1`
// Member `confs_1`
// Member `depths_2`
// Member `confs_2`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `histogram_type`
#include "rosidl_runtime_c/string_functions.h"

bool
tmf882x_interfaces__msg__TMF882XMeasure__init(tmf882x_interfaces__msg__TMF882XMeasure * msg)
{
  if (!msg) {
    return false;
  }
  // num_zones
  // num_bins
  // reference_hist
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->reference_hist, 0)) {
    tmf882x_interfaces__msg__TMF882XMeasure__fini(msg);
    return false;
  }
  // hists
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->hists, 0)) {
    tmf882x_interfaces__msg__TMF882XMeasure__fini(msg);
    return false;
  }
  // i2c_address
  // measurement_num
  // temperature
  // num_valid_results
  // tick
  // depths_1
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->depths_1, 0)) {
    tmf882x_interfaces__msg__TMF882XMeasure__fini(msg);
    return false;
  }
  // confs_1
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->confs_1, 0)) {
    tmf882x_interfaces__msg__TMF882XMeasure__fini(msg);
    return false;
  }
  // depths_2
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->depths_2, 0)) {
    tmf882x_interfaces__msg__TMF882XMeasure__fini(msg);
    return false;
  }
  // confs_2
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->confs_2, 0)) {
    tmf882x_interfaces__msg__TMF882XMeasure__fini(msg);
    return false;
  }
  // histogram_type
  if (!rosidl_runtime_c__String__init(&msg->histogram_type)) {
    tmf882x_interfaces__msg__TMF882XMeasure__fini(msg);
    return false;
  }
  return true;
}

void
tmf882x_interfaces__msg__TMF882XMeasure__fini(tmf882x_interfaces__msg__TMF882XMeasure * msg)
{
  if (!msg) {
    return;
  }
  // num_zones
  // num_bins
  // reference_hist
  rosidl_runtime_c__int64__Sequence__fini(&msg->reference_hist);
  // hists
  rosidl_runtime_c__int64__Sequence__fini(&msg->hists);
  // i2c_address
  // measurement_num
  // temperature
  // num_valid_results
  // tick
  // depths_1
  rosidl_runtime_c__int64__Sequence__fini(&msg->depths_1);
  // confs_1
  rosidl_runtime_c__int64__Sequence__fini(&msg->confs_1);
  // depths_2
  rosidl_runtime_c__int64__Sequence__fini(&msg->depths_2);
  // confs_2
  rosidl_runtime_c__int64__Sequence__fini(&msg->confs_2);
  // histogram_type
  rosidl_runtime_c__String__fini(&msg->histogram_type);
}

bool
tmf882x_interfaces__msg__TMF882XMeasure__are_equal(const tmf882x_interfaces__msg__TMF882XMeasure * lhs, const tmf882x_interfaces__msg__TMF882XMeasure * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num_zones
  if (lhs->num_zones != rhs->num_zones) {
    return false;
  }
  // num_bins
  if (lhs->num_bins != rhs->num_bins) {
    return false;
  }
  // reference_hist
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->reference_hist), &(rhs->reference_hist)))
  {
    return false;
  }
  // hists
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->hists), &(rhs->hists)))
  {
    return false;
  }
  // i2c_address
  if (lhs->i2c_address != rhs->i2c_address) {
    return false;
  }
  // measurement_num
  if (lhs->measurement_num != rhs->measurement_num) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // num_valid_results
  if (lhs->num_valid_results != rhs->num_valid_results) {
    return false;
  }
  // tick
  if (lhs->tick != rhs->tick) {
    return false;
  }
  // depths_1
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->depths_1), &(rhs->depths_1)))
  {
    return false;
  }
  // confs_1
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->confs_1), &(rhs->confs_1)))
  {
    return false;
  }
  // depths_2
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->depths_2), &(rhs->depths_2)))
  {
    return false;
  }
  // confs_2
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->confs_2), &(rhs->confs_2)))
  {
    return false;
  }
  // histogram_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->histogram_type), &(rhs->histogram_type)))
  {
    return false;
  }
  return true;
}

bool
tmf882x_interfaces__msg__TMF882XMeasure__copy(
  const tmf882x_interfaces__msg__TMF882XMeasure * input,
  tmf882x_interfaces__msg__TMF882XMeasure * output)
{
  if (!input || !output) {
    return false;
  }
  // num_zones
  output->num_zones = input->num_zones;
  // num_bins
  output->num_bins = input->num_bins;
  // reference_hist
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->reference_hist), &(output->reference_hist)))
  {
    return false;
  }
  // hists
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->hists), &(output->hists)))
  {
    return false;
  }
  // i2c_address
  output->i2c_address = input->i2c_address;
  // measurement_num
  output->measurement_num = input->measurement_num;
  // temperature
  output->temperature = input->temperature;
  // num_valid_results
  output->num_valid_results = input->num_valid_results;
  // tick
  output->tick = input->tick;
  // depths_1
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->depths_1), &(output->depths_1)))
  {
    return false;
  }
  // confs_1
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->confs_1), &(output->confs_1)))
  {
    return false;
  }
  // depths_2
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->depths_2), &(output->depths_2)))
  {
    return false;
  }
  // confs_2
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->confs_2), &(output->confs_2)))
  {
    return false;
  }
  // histogram_type
  if (!rosidl_runtime_c__String__copy(
      &(input->histogram_type), &(output->histogram_type)))
  {
    return false;
  }
  return true;
}

tmf882x_interfaces__msg__TMF882XMeasure *
tmf882x_interfaces__msg__TMF882XMeasure__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tmf882x_interfaces__msg__TMF882XMeasure * msg = (tmf882x_interfaces__msg__TMF882XMeasure *)allocator.allocate(sizeof(tmf882x_interfaces__msg__TMF882XMeasure), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tmf882x_interfaces__msg__TMF882XMeasure));
  bool success = tmf882x_interfaces__msg__TMF882XMeasure__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tmf882x_interfaces__msg__TMF882XMeasure__destroy(tmf882x_interfaces__msg__TMF882XMeasure * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tmf882x_interfaces__msg__TMF882XMeasure__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tmf882x_interfaces__msg__TMF882XMeasure__Sequence__init(tmf882x_interfaces__msg__TMF882XMeasure__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tmf882x_interfaces__msg__TMF882XMeasure * data = NULL;

  if (size) {
    data = (tmf882x_interfaces__msg__TMF882XMeasure *)allocator.zero_allocate(size, sizeof(tmf882x_interfaces__msg__TMF882XMeasure), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tmf882x_interfaces__msg__TMF882XMeasure__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tmf882x_interfaces__msg__TMF882XMeasure__fini(&data[i - 1]);
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
tmf882x_interfaces__msg__TMF882XMeasure__Sequence__fini(tmf882x_interfaces__msg__TMF882XMeasure__Sequence * array)
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
      tmf882x_interfaces__msg__TMF882XMeasure__fini(&array->data[i]);
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

tmf882x_interfaces__msg__TMF882XMeasure__Sequence *
tmf882x_interfaces__msg__TMF882XMeasure__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tmf882x_interfaces__msg__TMF882XMeasure__Sequence * array = (tmf882x_interfaces__msg__TMF882XMeasure__Sequence *)allocator.allocate(sizeof(tmf882x_interfaces__msg__TMF882XMeasure__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tmf882x_interfaces__msg__TMF882XMeasure__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tmf882x_interfaces__msg__TMF882XMeasure__Sequence__destroy(tmf882x_interfaces__msg__TMF882XMeasure__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tmf882x_interfaces__msg__TMF882XMeasure__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tmf882x_interfaces__msg__TMF882XMeasure__Sequence__are_equal(const tmf882x_interfaces__msg__TMF882XMeasure__Sequence * lhs, const tmf882x_interfaces__msg__TMF882XMeasure__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tmf882x_interfaces__msg__TMF882XMeasure__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tmf882x_interfaces__msg__TMF882XMeasure__Sequence__copy(
  const tmf882x_interfaces__msg__TMF882XMeasure__Sequence * input,
  tmf882x_interfaces__msg__TMF882XMeasure__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tmf882x_interfaces__msg__TMF882XMeasure);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tmf882x_interfaces__msg__TMF882XMeasure * data =
      (tmf882x_interfaces__msg__TMF882XMeasure *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tmf882x_interfaces__msg__TMF882XMeasure__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tmf882x_interfaces__msg__TMF882XMeasure__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tmf882x_interfaces__msg__TMF882XMeasure__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
