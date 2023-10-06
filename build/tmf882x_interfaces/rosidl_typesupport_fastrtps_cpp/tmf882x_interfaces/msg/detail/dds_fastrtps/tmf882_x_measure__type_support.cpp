// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tmf882x_interfaces:msg/TMF882XMeasure.idl
// generated code does not contain a copyright notice
#include "tmf882x_interfaces/msg/detail/tmf882_x_measure__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tmf882x_interfaces/msg/detail/tmf882_x_measure__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace tmf882x_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tmf882x_interfaces
cdr_serialize(
  const tmf882x_interfaces::msg::TMF882XMeasure & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: num_zones
  cdr << ros_message.num_zones;
  // Member: num_bins
  cdr << ros_message.num_bins;
  // Member: reference_hist
  {
    cdr << ros_message.reference_hist;
  }
  // Member: hists
  {
    cdr << ros_message.hists;
  }
  // Member: i2c_address
  cdr << ros_message.i2c_address;
  // Member: measurement_num
  cdr << ros_message.measurement_num;
  // Member: temperature
  cdr << ros_message.temperature;
  // Member: num_valid_results
  cdr << ros_message.num_valid_results;
  // Member: tick
  cdr << ros_message.tick;
  // Member: depths_1
  {
    cdr << ros_message.depths_1;
  }
  // Member: confs_1
  {
    cdr << ros_message.confs_1;
  }
  // Member: depths_2
  {
    cdr << ros_message.depths_2;
  }
  // Member: confs_2
  {
    cdr << ros_message.confs_2;
  }
  // Member: histogram_type
  cdr << ros_message.histogram_type;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tmf882x_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tmf882x_interfaces::msg::TMF882XMeasure & ros_message)
{
  // Member: num_zones
  cdr >> ros_message.num_zones;

  // Member: num_bins
  cdr >> ros_message.num_bins;

  // Member: reference_hist
  {
    cdr >> ros_message.reference_hist;
  }

  // Member: hists
  {
    cdr >> ros_message.hists;
  }

  // Member: i2c_address
  cdr >> ros_message.i2c_address;

  // Member: measurement_num
  cdr >> ros_message.measurement_num;

  // Member: temperature
  cdr >> ros_message.temperature;

  // Member: num_valid_results
  cdr >> ros_message.num_valid_results;

  // Member: tick
  cdr >> ros_message.tick;

  // Member: depths_1
  {
    cdr >> ros_message.depths_1;
  }

  // Member: confs_1
  {
    cdr >> ros_message.confs_1;
  }

  // Member: depths_2
  {
    cdr >> ros_message.depths_2;
  }

  // Member: confs_2
  {
    cdr >> ros_message.confs_2;
  }

  // Member: histogram_type
  cdr >> ros_message.histogram_type;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tmf882x_interfaces
get_serialized_size(
  const tmf882x_interfaces::msg::TMF882XMeasure & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: num_zones
  {
    size_t item_size = sizeof(ros_message.num_zones);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_bins
  {
    size_t item_size = sizeof(ros_message.num_bins);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reference_hist
  {
    size_t array_size = ros_message.reference_hist.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.reference_hist[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hists
  {
    size_t array_size = ros_message.hists.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.hists[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: i2c_address
  {
    size_t item_size = sizeof(ros_message.i2c_address);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: measurement_num
  {
    size_t item_size = sizeof(ros_message.measurement_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature
  {
    size_t item_size = sizeof(ros_message.temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_valid_results
  {
    size_t item_size = sizeof(ros_message.num_valid_results);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tick
  {
    size_t item_size = sizeof(ros_message.tick);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: depths_1
  {
    size_t array_size = ros_message.depths_1.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.depths_1[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: confs_1
  {
    size_t array_size = ros_message.confs_1.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.confs_1[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: depths_2
  {
    size_t array_size = ros_message.depths_2.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.depths_2[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: confs_2
  {
    size_t array_size = ros_message.confs_2.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.confs_2[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: histogram_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.histogram_type.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tmf882x_interfaces
max_serialized_size_TMF882XMeasure(
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


  // Member: num_zones
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: num_bins
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: reference_hist
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: hists
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: i2c_address
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: measurement_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: num_valid_results
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tick
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: depths_1
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: confs_1
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: depths_2
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: confs_2
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: histogram_type
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

static bool _TMF882XMeasure__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tmf882x_interfaces::msg::TMF882XMeasure *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TMF882XMeasure__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tmf882x_interfaces::msg::TMF882XMeasure *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TMF882XMeasure__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tmf882x_interfaces::msg::TMF882XMeasure *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TMF882XMeasure__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TMF882XMeasure(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TMF882XMeasure__callbacks = {
  "tmf882x_interfaces::msg",
  "TMF882XMeasure",
  _TMF882XMeasure__cdr_serialize,
  _TMF882XMeasure__cdr_deserialize,
  _TMF882XMeasure__get_serialized_size,
  _TMF882XMeasure__max_serialized_size
};

static rosidl_message_type_support_t _TMF882XMeasure__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TMF882XMeasure__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tmf882x_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tmf882x_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<tmf882x_interfaces::msg::TMF882XMeasure>()
{
  return &tmf882x_interfaces::msg::typesupport_fastrtps_cpp::_TMF882XMeasure__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tmf882x_interfaces, msg, TMF882XMeasure)() {
  return &tmf882x_interfaces::msg::typesupport_fastrtps_cpp::_TMF882XMeasure__handle;
}

#ifdef __cplusplus
}
#endif
