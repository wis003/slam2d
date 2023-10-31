// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tmf882x_interfaces:msg/TMF882XMeasure.idl
// generated code does not contain a copyright notice
#include "tmf882x_interfaces/msg/detail/tmf882_x_measure__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tmf882x_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tmf882x_interfaces/msg/detail/tmf882_x_measure__struct.h"
#include "tmf882x_interfaces/msg/detail/tmf882_x_measure__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // confs_1, confs_2, depths_1, depths_2, hists, reference_hist
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // confs_1, confs_2, depths_1, depths_2, hists, reference_hist
#include "rosidl_runtime_c/string.h"  // histogram_type
#include "rosidl_runtime_c/string_functions.h"  // histogram_type

// forward declare type support functions


using _TMF882XMeasure__ros_msg_type = tmf882x_interfaces__msg__TMF882XMeasure;

static bool _TMF882XMeasure__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TMF882XMeasure__ros_msg_type * ros_message = static_cast<const _TMF882XMeasure__ros_msg_type *>(untyped_ros_message);
  // Field name: time
  {
    cdr << ros_message->time;
  }

  // Field name: num_zones
  {
    cdr << ros_message->num_zones;
  }

  // Field name: num_bins
  {
    cdr << ros_message->num_bins;
  }

  // Field name: reference_hist
  {
    size_t size = ros_message->reference_hist.size;
    auto array_ptr = ros_message->reference_hist.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: hists
  {
    size_t size = ros_message->hists.size;
    auto array_ptr = ros_message->hists.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: i2c_address
  {
    cdr << ros_message->i2c_address;
  }

  // Field name: measurement_num
  {
    cdr << ros_message->measurement_num;
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  // Field name: num_valid_results
  {
    cdr << ros_message->num_valid_results;
  }

  // Field name: tick
  {
    cdr << ros_message->tick;
  }

  // Field name: depths_1
  {
    size_t size = ros_message->depths_1.size;
    auto array_ptr = ros_message->depths_1.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: confs_1
  {
    size_t size = ros_message->confs_1.size;
    auto array_ptr = ros_message->confs_1.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: depths_2
  {
    size_t size = ros_message->depths_2.size;
    auto array_ptr = ros_message->depths_2.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: confs_2
  {
    size_t size = ros_message->confs_2.size;
    auto array_ptr = ros_message->confs_2.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: histogram_type
  {
    const rosidl_runtime_c__String * str = &ros_message->histogram_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _TMF882XMeasure__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TMF882XMeasure__ros_msg_type * ros_message = static_cast<_TMF882XMeasure__ros_msg_type *>(untyped_ros_message);
  // Field name: time
  {
    cdr >> ros_message->time;
  }

  // Field name: num_zones
  {
    cdr >> ros_message->num_zones;
  }

  // Field name: num_bins
  {
    cdr >> ros_message->num_bins;
  }

  // Field name: reference_hist
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->reference_hist.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->reference_hist);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->reference_hist, size)) {
      fprintf(stderr, "failed to create array for field 'reference_hist'");
      return false;
    }
    auto array_ptr = ros_message->reference_hist.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: hists
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->hists.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->hists);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->hists, size)) {
      fprintf(stderr, "failed to create array for field 'hists'");
      return false;
    }
    auto array_ptr = ros_message->hists.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: i2c_address
  {
    cdr >> ros_message->i2c_address;
  }

  // Field name: measurement_num
  {
    cdr >> ros_message->measurement_num;
  }

  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  // Field name: num_valid_results
  {
    cdr >> ros_message->num_valid_results;
  }

  // Field name: tick
  {
    cdr >> ros_message->tick;
  }

  // Field name: depths_1
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->depths_1.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->depths_1);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->depths_1, size)) {
      fprintf(stderr, "failed to create array for field 'depths_1'");
      return false;
    }
    auto array_ptr = ros_message->depths_1.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: confs_1
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->confs_1.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->confs_1);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->confs_1, size)) {
      fprintf(stderr, "failed to create array for field 'confs_1'");
      return false;
    }
    auto array_ptr = ros_message->confs_1.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: depths_2
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->depths_2.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->depths_2);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->depths_2, size)) {
      fprintf(stderr, "failed to create array for field 'depths_2'");
      return false;
    }
    auto array_ptr = ros_message->depths_2.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: confs_2
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->confs_2.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->confs_2);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->confs_2, size)) {
      fprintf(stderr, "failed to create array for field 'confs_2'");
      return false;
    }
    auto array_ptr = ros_message->confs_2.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: histogram_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->histogram_type.data) {
      rosidl_runtime_c__String__init(&ros_message->histogram_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->histogram_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'histogram_type'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tmf882x_interfaces
size_t get_serialized_size_tmf882x_interfaces__msg__TMF882XMeasure(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TMF882XMeasure__ros_msg_type * ros_message = static_cast<const _TMF882XMeasure__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name time
  {
    size_t item_size = sizeof(ros_message->time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_zones
  {
    size_t item_size = sizeof(ros_message->num_zones);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_bins
  {
    size_t item_size = sizeof(ros_message->num_bins);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reference_hist
  {
    size_t array_size = ros_message->reference_hist.size;
    auto array_ptr = ros_message->reference_hist.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hists
  {
    size_t array_size = ros_message->hists.size;
    auto array_ptr = ros_message->hists.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name i2c_address
  {
    size_t item_size = sizeof(ros_message->i2c_address);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name measurement_num
  {
    size_t item_size = sizeof(ros_message->measurement_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_valid_results
  {
    size_t item_size = sizeof(ros_message->num_valid_results);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tick
  {
    size_t item_size = sizeof(ros_message->tick);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name depths_1
  {
    size_t array_size = ros_message->depths_1.size;
    auto array_ptr = ros_message->depths_1.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name confs_1
  {
    size_t array_size = ros_message->confs_1.size;
    auto array_ptr = ros_message->confs_1.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name depths_2
  {
    size_t array_size = ros_message->depths_2.size;
    auto array_ptr = ros_message->depths_2.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name confs_2
  {
    size_t array_size = ros_message->confs_2.size;
    auto array_ptr = ros_message->confs_2.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name histogram_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->histogram_type.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _TMF882XMeasure__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tmf882x_interfaces__msg__TMF882XMeasure(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tmf882x_interfaces
size_t max_serialized_size_tmf882x_interfaces__msg__TMF882XMeasure(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: num_zones
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: num_bins
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: reference_hist
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: hists
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: i2c_address
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: measurement_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: num_valid_results
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: tick
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: depths_1
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: confs_1
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: depths_2
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: confs_2
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: histogram_type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TMF882XMeasure__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tmf882x_interfaces__msg__TMF882XMeasure(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TMF882XMeasure = {
  "tmf882x_interfaces::msg",
  "TMF882XMeasure",
  _TMF882XMeasure__cdr_serialize,
  _TMF882XMeasure__cdr_deserialize,
  _TMF882XMeasure__get_serialized_size,
  _TMF882XMeasure__max_serialized_size
};

static rosidl_message_type_support_t _TMF882XMeasure__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TMF882XMeasure,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tmf882x_interfaces, msg, TMF882XMeasure)() {
  return &_TMF882XMeasure__type_support;
}

#if defined(__cplusplus)
}
#endif
