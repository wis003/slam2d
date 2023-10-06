// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tmf882x_interfaces:msg/TMF882XMeasure.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tmf882x_interfaces/msg/detail/tmf882_x_measure__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tmf882x_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TMF882XMeasure_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tmf882x_interfaces::msg::TMF882XMeasure(_init);
}

void TMF882XMeasure_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tmf882x_interfaces::msg::TMF882XMeasure *>(message_memory);
  typed_message->~TMF882XMeasure();
}

size_t size_function__TMF882XMeasure__reference_hist(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TMF882XMeasure__reference_hist(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TMF882XMeasure__reference_hist(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__TMF882XMeasure__reference_hist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__TMF882XMeasure__reference_hist(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__TMF882XMeasure__reference_hist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__TMF882XMeasure__reference_hist(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__TMF882XMeasure__reference_hist(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TMF882XMeasure__hists(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TMF882XMeasure__hists(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TMF882XMeasure__hists(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__TMF882XMeasure__hists(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__TMF882XMeasure__hists(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__TMF882XMeasure__hists(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__TMF882XMeasure__hists(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__TMF882XMeasure__hists(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TMF882XMeasure__depths_1(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TMF882XMeasure__depths_1(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TMF882XMeasure__depths_1(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__TMF882XMeasure__depths_1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__TMF882XMeasure__depths_1(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__TMF882XMeasure__depths_1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__TMF882XMeasure__depths_1(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__TMF882XMeasure__depths_1(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TMF882XMeasure__confs_1(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TMF882XMeasure__confs_1(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TMF882XMeasure__confs_1(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__TMF882XMeasure__confs_1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__TMF882XMeasure__confs_1(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__TMF882XMeasure__confs_1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__TMF882XMeasure__confs_1(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__TMF882XMeasure__confs_1(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TMF882XMeasure__depths_2(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TMF882XMeasure__depths_2(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TMF882XMeasure__depths_2(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__TMF882XMeasure__depths_2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__TMF882XMeasure__depths_2(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__TMF882XMeasure__depths_2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__TMF882XMeasure__depths_2(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__TMF882XMeasure__depths_2(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TMF882XMeasure__confs_2(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TMF882XMeasure__confs_2(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TMF882XMeasure__confs_2(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__TMF882XMeasure__confs_2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__TMF882XMeasure__confs_2(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__TMF882XMeasure__confs_2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__TMF882XMeasure__confs_2(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__TMF882XMeasure__confs_2(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TMF882XMeasure_message_member_array[14] = {
  {
    "num_zones",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces::msg::TMF882XMeasure, num_zones),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_bins",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces::msg::TMF882XMeasure, num_bins),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reference_hist",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces::msg::TMF882XMeasure, reference_hist),  // bytes offset in struct
    nullptr,  // default value
    size_function__TMF882XMeasure__reference_hist,  // size() function pointer
    get_const_function__TMF882XMeasure__reference_hist,  // get_const(index) function pointer
    get_function__TMF882XMeasure__reference_hist,  // get(index) function pointer
    fetch_function__TMF882XMeasure__reference_hist,  // fetch(index, &value) function pointer
    assign_function__TMF882XMeasure__reference_hist,  // assign(index, value) function pointer
    resize_function__TMF882XMeasure__reference_hist  // resize(index) function pointer
  },
  {
    "hists",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces::msg::TMF882XMeasure, hists),  // bytes offset in struct
    nullptr,  // default value
    size_function__TMF882XMeasure__hists,  // size() function pointer
    get_const_function__TMF882XMeasure__hists,  // get_const(index) function pointer
    get_function__TMF882XMeasure__hists,  // get(index) function pointer
    fetch_function__TMF882XMeasure__hists,  // fetch(index, &value) function pointer
    assign_function__TMF882XMeasure__hists,  // assign(index, value) function pointer
    resize_function__TMF882XMeasure__hists  // resize(index) function pointer
  },
  {
    "i2c_address",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces::msg::TMF882XMeasure, i2c_address),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "measurement_num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces::msg::TMF882XMeasure, measurement_num),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "temperature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces::msg::TMF882XMeasure, temperature),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_valid_results",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces::msg::TMF882XMeasure, num_valid_results),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tick",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces::msg::TMF882XMeasure, tick),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "depths_1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces::msg::TMF882XMeasure, depths_1),  // bytes offset in struct
    nullptr,  // default value
    size_function__TMF882XMeasure__depths_1,  // size() function pointer
    get_const_function__TMF882XMeasure__depths_1,  // get_const(index) function pointer
    get_function__TMF882XMeasure__depths_1,  // get(index) function pointer
    fetch_function__TMF882XMeasure__depths_1,  // fetch(index, &value) function pointer
    assign_function__TMF882XMeasure__depths_1,  // assign(index, value) function pointer
    resize_function__TMF882XMeasure__depths_1  // resize(index) function pointer
  },
  {
    "confs_1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces::msg::TMF882XMeasure, confs_1),  // bytes offset in struct
    nullptr,  // default value
    size_function__TMF882XMeasure__confs_1,  // size() function pointer
    get_const_function__TMF882XMeasure__confs_1,  // get_const(index) function pointer
    get_function__TMF882XMeasure__confs_1,  // get(index) function pointer
    fetch_function__TMF882XMeasure__confs_1,  // fetch(index, &value) function pointer
    assign_function__TMF882XMeasure__confs_1,  // assign(index, value) function pointer
    resize_function__TMF882XMeasure__confs_1  // resize(index) function pointer
  },
  {
    "depths_2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces::msg::TMF882XMeasure, depths_2),  // bytes offset in struct
    nullptr,  // default value
    size_function__TMF882XMeasure__depths_2,  // size() function pointer
    get_const_function__TMF882XMeasure__depths_2,  // get_const(index) function pointer
    get_function__TMF882XMeasure__depths_2,  // get(index) function pointer
    fetch_function__TMF882XMeasure__depths_2,  // fetch(index, &value) function pointer
    assign_function__TMF882XMeasure__depths_2,  // assign(index, value) function pointer
    resize_function__TMF882XMeasure__depths_2  // resize(index) function pointer
  },
  {
    "confs_2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces::msg::TMF882XMeasure, confs_2),  // bytes offset in struct
    nullptr,  // default value
    size_function__TMF882XMeasure__confs_2,  // size() function pointer
    get_const_function__TMF882XMeasure__confs_2,  // get_const(index) function pointer
    get_function__TMF882XMeasure__confs_2,  // get(index) function pointer
    fetch_function__TMF882XMeasure__confs_2,  // fetch(index, &value) function pointer
    assign_function__TMF882XMeasure__confs_2,  // assign(index, value) function pointer
    resize_function__TMF882XMeasure__confs_2  // resize(index) function pointer
  },
  {
    "histogram_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tmf882x_interfaces::msg::TMF882XMeasure, histogram_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TMF882XMeasure_message_members = {
  "tmf882x_interfaces::msg",  // message namespace
  "TMF882XMeasure",  // message name
  14,  // number of fields
  sizeof(tmf882x_interfaces::msg::TMF882XMeasure),
  TMF882XMeasure_message_member_array,  // message members
  TMF882XMeasure_init_function,  // function to initialize message memory (memory has to be allocated)
  TMF882XMeasure_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TMF882XMeasure_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TMF882XMeasure_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tmf882x_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tmf882x_interfaces::msg::TMF882XMeasure>()
{
  return &::tmf882x_interfaces::msg::rosidl_typesupport_introspection_cpp::TMF882XMeasure_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tmf882x_interfaces, msg, TMF882XMeasure)() {
  return &::tmf882x_interfaces::msg::rosidl_typesupport_introspection_cpp::TMF882XMeasure_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
