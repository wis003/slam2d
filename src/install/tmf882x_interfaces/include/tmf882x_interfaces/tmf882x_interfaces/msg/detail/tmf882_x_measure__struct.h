// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tmf882x_interfaces:msg/TMF882XMeasure.idl
// generated code does not contain a copyright notice

#ifndef TMF882X_INTERFACES__MSG__DETAIL__TMF882_X_MEASURE__STRUCT_H_
#define TMF882X_INTERFACES__MSG__DETAIL__TMF882_X_MEASURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'reference_hist'
// Member 'hists'
// Member 'depths_1'
// Member 'confs_1'
// Member 'depths_2'
// Member 'confs_2'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'histogram_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TMF882XMeasure in the package tmf882x_interfaces.
typedef struct tmf882x_interfaces__msg__TMF882XMeasure
{
  int64_t num_zones;
  int64_t num_bins;
  rosidl_runtime_c__int64__Sequence reference_hist;
  rosidl_runtime_c__int64__Sequence hists;
  int64_t i2c_address;
  int64_t measurement_num;
  int64_t temperature;
  int64_t num_valid_results;
  int64_t tick;
  rosidl_runtime_c__int64__Sequence depths_1;
  rosidl_runtime_c__int64__Sequence confs_1;
  rosidl_runtime_c__int64__Sequence depths_2;
  rosidl_runtime_c__int64__Sequence confs_2;
  rosidl_runtime_c__String histogram_type;
} tmf882x_interfaces__msg__TMF882XMeasure;

// Struct for a sequence of tmf882x_interfaces__msg__TMF882XMeasure.
typedef struct tmf882x_interfaces__msg__TMF882XMeasure__Sequence
{
  tmf882x_interfaces__msg__TMF882XMeasure * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tmf882x_interfaces__msg__TMF882XMeasure__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMF882X_INTERFACES__MSG__DETAIL__TMF882_X_MEASURE__STRUCT_H_
