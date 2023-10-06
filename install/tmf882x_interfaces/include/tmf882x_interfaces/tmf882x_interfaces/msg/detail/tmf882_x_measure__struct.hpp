// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tmf882x_interfaces:msg/TMF882XMeasure.idl
// generated code does not contain a copyright notice

#ifndef TMF882X_INTERFACES__MSG__DETAIL__TMF882_X_MEASURE__STRUCT_HPP_
#define TMF882X_INTERFACES__MSG__DETAIL__TMF882_X_MEASURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tmf882x_interfaces__msg__TMF882XMeasure __attribute__((deprecated))
#else
# define DEPRECATED__tmf882x_interfaces__msg__TMF882XMeasure __declspec(deprecated)
#endif

namespace tmf882x_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TMF882XMeasure_
{
  using Type = TMF882XMeasure_<ContainerAllocator>;

  explicit TMF882XMeasure_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_zones = 0ll;
      this->num_bins = 0ll;
      this->i2c_address = 0ll;
      this->measurement_num = 0ll;
      this->temperature = 0ll;
      this->num_valid_results = 0ll;
      this->tick = 0ll;
      this->histogram_type = "";
    }
  }

  explicit TMF882XMeasure_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : histogram_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_zones = 0ll;
      this->num_bins = 0ll;
      this->i2c_address = 0ll;
      this->measurement_num = 0ll;
      this->temperature = 0ll;
      this->num_valid_results = 0ll;
      this->tick = 0ll;
      this->histogram_type = "";
    }
  }

  // field types and members
  using _num_zones_type =
    int64_t;
  _num_zones_type num_zones;
  using _num_bins_type =
    int64_t;
  _num_bins_type num_bins;
  using _reference_hist_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _reference_hist_type reference_hist;
  using _hists_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _hists_type hists;
  using _i2c_address_type =
    int64_t;
  _i2c_address_type i2c_address;
  using _measurement_num_type =
    int64_t;
  _measurement_num_type measurement_num;
  using _temperature_type =
    int64_t;
  _temperature_type temperature;
  using _num_valid_results_type =
    int64_t;
  _num_valid_results_type num_valid_results;
  using _tick_type =
    int64_t;
  _tick_type tick;
  using _depths_1_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _depths_1_type depths_1;
  using _confs_1_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _confs_1_type confs_1;
  using _depths_2_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _depths_2_type depths_2;
  using _confs_2_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _confs_2_type confs_2;
  using _histogram_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _histogram_type_type histogram_type;

  // setters for named parameter idiom
  Type & set__num_zones(
    const int64_t & _arg)
  {
    this->num_zones = _arg;
    return *this;
  }
  Type & set__num_bins(
    const int64_t & _arg)
  {
    this->num_bins = _arg;
    return *this;
  }
  Type & set__reference_hist(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->reference_hist = _arg;
    return *this;
  }
  Type & set__hists(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->hists = _arg;
    return *this;
  }
  Type & set__i2c_address(
    const int64_t & _arg)
  {
    this->i2c_address = _arg;
    return *this;
  }
  Type & set__measurement_num(
    const int64_t & _arg)
  {
    this->measurement_num = _arg;
    return *this;
  }
  Type & set__temperature(
    const int64_t & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__num_valid_results(
    const int64_t & _arg)
  {
    this->num_valid_results = _arg;
    return *this;
  }
  Type & set__tick(
    const int64_t & _arg)
  {
    this->tick = _arg;
    return *this;
  }
  Type & set__depths_1(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->depths_1 = _arg;
    return *this;
  }
  Type & set__confs_1(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->confs_1 = _arg;
    return *this;
  }
  Type & set__depths_2(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->depths_2 = _arg;
    return *this;
  }
  Type & set__confs_2(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->confs_2 = _arg;
    return *this;
  }
  Type & set__histogram_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->histogram_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tmf882x_interfaces::msg::TMF882XMeasure_<ContainerAllocator> *;
  using ConstRawPtr =
    const tmf882x_interfaces::msg::TMF882XMeasure_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tmf882x_interfaces::msg::TMF882XMeasure_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tmf882x_interfaces::msg::TMF882XMeasure_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tmf882x_interfaces::msg::TMF882XMeasure_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tmf882x_interfaces::msg::TMF882XMeasure_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tmf882x_interfaces::msg::TMF882XMeasure_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tmf882x_interfaces::msg::TMF882XMeasure_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tmf882x_interfaces::msg::TMF882XMeasure_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tmf882x_interfaces::msg::TMF882XMeasure_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tmf882x_interfaces__msg__TMF882XMeasure
    std::shared_ptr<tmf882x_interfaces::msg::TMF882XMeasure_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tmf882x_interfaces__msg__TMF882XMeasure
    std::shared_ptr<tmf882x_interfaces::msg::TMF882XMeasure_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TMF882XMeasure_ & other) const
  {
    if (this->num_zones != other.num_zones) {
      return false;
    }
    if (this->num_bins != other.num_bins) {
      return false;
    }
    if (this->reference_hist != other.reference_hist) {
      return false;
    }
    if (this->hists != other.hists) {
      return false;
    }
    if (this->i2c_address != other.i2c_address) {
      return false;
    }
    if (this->measurement_num != other.measurement_num) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->num_valid_results != other.num_valid_results) {
      return false;
    }
    if (this->tick != other.tick) {
      return false;
    }
    if (this->depths_1 != other.depths_1) {
      return false;
    }
    if (this->confs_1 != other.confs_1) {
      return false;
    }
    if (this->depths_2 != other.depths_2) {
      return false;
    }
    if (this->confs_2 != other.confs_2) {
      return false;
    }
    if (this->histogram_type != other.histogram_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const TMF882XMeasure_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TMF882XMeasure_

// alias to use template instance with default allocator
using TMF882XMeasure =
  tmf882x_interfaces::msg::TMF882XMeasure_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tmf882x_interfaces

#endif  // TMF882X_INTERFACES__MSG__DETAIL__TMF882_X_MEASURE__STRUCT_HPP_
