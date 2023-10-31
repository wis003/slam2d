// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tmf882x_interfaces:msg/TMF882XMeasure.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tmf882x_interfaces/msg/detail/tmf882_x_measure__rosidl_typesupport_introspection_c.h"
#include "tmf882x_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tmf882x_interfaces/msg/detail/tmf882_x_measure__functions.h"
#include "tmf882x_interfaces/msg/detail/tmf882_x_measure__struct.h"


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

#ifdef __cplusplus
extern "C"
{
#endif

void tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__TMF882XMeasure_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tmf882x_interfaces__msg__TMF882XMeasure__init(message_memory);
}

void tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__TMF882XMeasure_fini_function(void * message_memory)
{
  tmf882x_interfaces__msg__TMF882XMeasure__fini(message_memory);
}

size_t tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__size_function__TMF882XMeasure__reference_hist(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_const_function__TMF882XMeasure__reference_hist(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_function__TMF882XMeasure__reference_hist(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__fetch_function__TMF882XMeasure__reference_hist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_const_function__TMF882XMeasure__reference_hist(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__assign_function__TMF882XMeasure__reference_hist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_function__TMF882XMeasure__reference_hist(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__resize_function__TMF882XMeasure__reference_hist(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__size_function__TMF882XMeasure__hists(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_const_function__TMF882XMeasure__hists(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_function__TMF882XMeasure__hists(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__fetch_function__TMF882XMeasure__hists(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_const_function__TMF882XMeasure__hists(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__assign_function__TMF882XMeasure__hists(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_function__TMF882XMeasure__hists(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__resize_function__TMF882XMeasure__hists(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__size_function__TMF882XMeasure__depths_1(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_const_function__TMF882XMeasure__depths_1(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_function__TMF882XMeasure__depths_1(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__fetch_function__TMF882XMeasure__depths_1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_const_function__TMF882XMeasure__depths_1(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__assign_function__TMF882XMeasure__depths_1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_function__TMF882XMeasure__depths_1(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__resize_function__TMF882XMeasure__depths_1(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__size_function__TMF882XMeasure__confs_1(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_const_function__TMF882XMeasure__confs_1(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_function__TMF882XMeasure__confs_1(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__fetch_function__TMF882XMeasure__confs_1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_const_function__TMF882XMeasure__confs_1(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__assign_function__TMF882XMeasure__confs_1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_function__TMF882XMeasure__confs_1(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__resize_function__TMF882XMeasure__confs_1(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__size_function__TMF882XMeasure__depths_2(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_const_function__TMF882XMeasure__depths_2(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_function__TMF882XMeasure__depths_2(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__fetch_function__TMF882XMeasure__depths_2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_const_function__TMF882XMeasure__depths_2(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__assign_function__TMF882XMeasure__depths_2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_function__TMF882XMeasure__depths_2(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__resize_function__TMF882XMeasure__depths_2(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__size_function__TMF882XMeasure__confs_2(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_const_function__TMF882XMeasure__confs_2(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_function__TMF882XMeasure__confs_2(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__fetch_function__TMF882XMeasure__confs_2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_const_function__TMF882XMeasure__confs_2(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__assign_function__TMF882XMeasure__confs_2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_function__TMF882XMeasure__confs_2(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__resize_function__TMF882XMeasure__confs_2(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__TMF882XMeasure_message_member_array[15] = {
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces__msg__TMF882XMeasure, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_zones",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces__msg__TMF882XMeasure, num_zones),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_bins",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces__msg__TMF882XMeasure, num_bins),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_hist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces__msg__TMF882XMeasure, reference_hist),  // bytes offset in struct
    NULL,  // default value
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__size_function__TMF882XMeasure__reference_hist,  // size() function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_const_function__TMF882XMeasure__reference_hist,  // get_const(index) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_function__TMF882XMeasure__reference_hist,  // get(index) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__fetch_function__TMF882XMeasure__reference_hist,  // fetch(index, &value) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__assign_function__TMF882XMeasure__reference_hist,  // assign(index, value) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__resize_function__TMF882XMeasure__reference_hist  // resize(index) function pointer
  },
  {
    "hists",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces__msg__TMF882XMeasure, hists),  // bytes offset in struct
    NULL,  // default value
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__size_function__TMF882XMeasure__hists,  // size() function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_const_function__TMF882XMeasure__hists,  // get_const(index) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_function__TMF882XMeasure__hists,  // get(index) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__fetch_function__TMF882XMeasure__hists,  // fetch(index, &value) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__assign_function__TMF882XMeasure__hists,  // assign(index, value) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__resize_function__TMF882XMeasure__hists  // resize(index) function pointer
  },
  {
    "i2c_address",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces__msg__TMF882XMeasure, i2c_address),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "measurement_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces__msg__TMF882XMeasure, measurement_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces__msg__TMF882XMeasure, temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_valid_results",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces__msg__TMF882XMeasure, num_valid_results),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tick",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces__msg__TMF882XMeasure, tick),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depths_1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces__msg__TMF882XMeasure, depths_1),  // bytes offset in struct
    NULL,  // default value
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__size_function__TMF882XMeasure__depths_1,  // size() function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_const_function__TMF882XMeasure__depths_1,  // get_const(index) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_function__TMF882XMeasure__depths_1,  // get(index) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__fetch_function__TMF882XMeasure__depths_1,  // fetch(index, &value) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__assign_function__TMF882XMeasure__depths_1,  // assign(index, value) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__resize_function__TMF882XMeasure__depths_1  // resize(index) function pointer
  },
  {
    "confs_1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces__msg__TMF882XMeasure, confs_1),  // bytes offset in struct
    NULL,  // default value
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__size_function__TMF882XMeasure__confs_1,  // size() function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_const_function__TMF882XMeasure__confs_1,  // get_const(index) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_function__TMF882XMeasure__confs_1,  // get(index) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__fetch_function__TMF882XMeasure__confs_1,  // fetch(index, &value) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__assign_function__TMF882XMeasure__confs_1,  // assign(index, value) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__resize_function__TMF882XMeasure__confs_1  // resize(index) function pointer
  },
  {
    "depths_2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces__msg__TMF882XMeasure, depths_2),  // bytes offset in struct
    NULL,  // default value
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__size_function__TMF882XMeasure__depths_2,  // size() function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_const_function__TMF882XMeasure__depths_2,  // get_const(index) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_function__TMF882XMeasure__depths_2,  // get(index) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__fetch_function__TMF882XMeasure__depths_2,  // fetch(index, &value) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__assign_function__TMF882XMeasure__depths_2,  // assign(index, value) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__resize_function__TMF882XMeasure__depths_2  // resize(index) function pointer
  },
  {
    "confs_2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces__msg__TMF882XMeasure, confs_2),  // bytes offset in struct
    NULL,  // default value
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__size_function__TMF882XMeasure__confs_2,  // size() function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_const_function__TMF882XMeasure__confs_2,  // get_const(index) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__get_function__TMF882XMeasure__confs_2,  // get(index) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__fetch_function__TMF882XMeasure__confs_2,  // fetch(index, &value) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__assign_function__TMF882XMeasure__confs_2,  // assign(index, value) function pointer
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__resize_function__TMF882XMeasure__confs_2  // resize(index) function pointer
  },
  {
    "histogram_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces__msg__TMF882XMeasure, histogram_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__TMF882XMeasure_message_members = {
  "tmf882x_interfaces__msg",  // message namespace
  "TMF882XMeasure",  // message name
  15,  // number of fields
  sizeof(tmf882x_interfaces__msg__TMF882XMeasure),
  tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__TMF882XMeasure_message_member_array,  // message members
  tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__TMF882XMeasure_init_function,  // function to initialize message memory (memory has to be allocated)
  tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__TMF882XMeasure_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__TMF882XMeasure_message_type_support_handle = {
  0,
  &tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__TMF882XMeasure_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tmf882x_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tmf882x_interfaces, msg, TMF882XMeasure)() {
  if (!tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__TMF882XMeasure_message_type_support_handle.typesupport_identifier) {
    tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__TMF882XMeasure_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tmf882x_interfaces__msg__TMF882XMeasure__rosidl_typesupport_introspection_c__TMF882XMeasure_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
