// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tmf882x_interfaces:msg/TMF882XMeasure.idl
// generated code does not contain a copyright notice

#ifndef TMF882X_INTERFACES__MSG__DETAIL__TMF882_X_MEASURE__BUILDER_HPP_
#define TMF882X_INTERFACES__MSG__DETAIL__TMF882_X_MEASURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tmf882x_interfaces/msg/detail/tmf882_x_measure__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tmf882x_interfaces
{

namespace msg
{

namespace builder
{

class Init_TMF882XMeasure_histogram_type
{
public:
  explicit Init_TMF882XMeasure_histogram_type(::tmf882x_interfaces::msg::TMF882XMeasure & msg)
  : msg_(msg)
  {}
  ::tmf882x_interfaces::msg::TMF882XMeasure histogram_type(::tmf882x_interfaces::msg::TMF882XMeasure::_histogram_type_type arg)
  {
    msg_.histogram_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tmf882x_interfaces::msg::TMF882XMeasure msg_;
};

class Init_TMF882XMeasure_confs_2
{
public:
  explicit Init_TMF882XMeasure_confs_2(::tmf882x_interfaces::msg::TMF882XMeasure & msg)
  : msg_(msg)
  {}
  Init_TMF882XMeasure_histogram_type confs_2(::tmf882x_interfaces::msg::TMF882XMeasure::_confs_2_type arg)
  {
    msg_.confs_2 = std::move(arg);
    return Init_TMF882XMeasure_histogram_type(msg_);
  }

private:
  ::tmf882x_interfaces::msg::TMF882XMeasure msg_;
};

class Init_TMF882XMeasure_depths_2
{
public:
  explicit Init_TMF882XMeasure_depths_2(::tmf882x_interfaces::msg::TMF882XMeasure & msg)
  : msg_(msg)
  {}
  Init_TMF882XMeasure_confs_2 depths_2(::tmf882x_interfaces::msg::TMF882XMeasure::_depths_2_type arg)
  {
    msg_.depths_2 = std::move(arg);
    return Init_TMF882XMeasure_confs_2(msg_);
  }

private:
  ::tmf882x_interfaces::msg::TMF882XMeasure msg_;
};

class Init_TMF882XMeasure_confs_1
{
public:
  explicit Init_TMF882XMeasure_confs_1(::tmf882x_interfaces::msg::TMF882XMeasure & msg)
  : msg_(msg)
  {}
  Init_TMF882XMeasure_depths_2 confs_1(::tmf882x_interfaces::msg::TMF882XMeasure::_confs_1_type arg)
  {
    msg_.confs_1 = std::move(arg);
    return Init_TMF882XMeasure_depths_2(msg_);
  }

private:
  ::tmf882x_interfaces::msg::TMF882XMeasure msg_;
};

class Init_TMF882XMeasure_depths_1
{
public:
  explicit Init_TMF882XMeasure_depths_1(::tmf882x_interfaces::msg::TMF882XMeasure & msg)
  : msg_(msg)
  {}
  Init_TMF882XMeasure_confs_1 depths_1(::tmf882x_interfaces::msg::TMF882XMeasure::_depths_1_type arg)
  {
    msg_.depths_1 = std::move(arg);
    return Init_TMF882XMeasure_confs_1(msg_);
  }

private:
  ::tmf882x_interfaces::msg::TMF882XMeasure msg_;
};

class Init_TMF882XMeasure_tick
{
public:
  explicit Init_TMF882XMeasure_tick(::tmf882x_interfaces::msg::TMF882XMeasure & msg)
  : msg_(msg)
  {}
  Init_TMF882XMeasure_depths_1 tick(::tmf882x_interfaces::msg::TMF882XMeasure::_tick_type arg)
  {
    msg_.tick = std::move(arg);
    return Init_TMF882XMeasure_depths_1(msg_);
  }

private:
  ::tmf882x_interfaces::msg::TMF882XMeasure msg_;
};

class Init_TMF882XMeasure_num_valid_results
{
public:
  explicit Init_TMF882XMeasure_num_valid_results(::tmf882x_interfaces::msg::TMF882XMeasure & msg)
  : msg_(msg)
  {}
  Init_TMF882XMeasure_tick num_valid_results(::tmf882x_interfaces::msg::TMF882XMeasure::_num_valid_results_type arg)
  {
    msg_.num_valid_results = std::move(arg);
    return Init_TMF882XMeasure_tick(msg_);
  }

private:
  ::tmf882x_interfaces::msg::TMF882XMeasure msg_;
};

class Init_TMF882XMeasure_temperature
{
public:
  explicit Init_TMF882XMeasure_temperature(::tmf882x_interfaces::msg::TMF882XMeasure & msg)
  : msg_(msg)
  {}
  Init_TMF882XMeasure_num_valid_results temperature(::tmf882x_interfaces::msg::TMF882XMeasure::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_TMF882XMeasure_num_valid_results(msg_);
  }

private:
  ::tmf882x_interfaces::msg::TMF882XMeasure msg_;
};

class Init_TMF882XMeasure_measurement_num
{
public:
  explicit Init_TMF882XMeasure_measurement_num(::tmf882x_interfaces::msg::TMF882XMeasure & msg)
  : msg_(msg)
  {}
  Init_TMF882XMeasure_temperature measurement_num(::tmf882x_interfaces::msg::TMF882XMeasure::_measurement_num_type arg)
  {
    msg_.measurement_num = std::move(arg);
    return Init_TMF882XMeasure_temperature(msg_);
  }

private:
  ::tmf882x_interfaces::msg::TMF882XMeasure msg_;
};

class Init_TMF882XMeasure_i2c_address
{
public:
  explicit Init_TMF882XMeasure_i2c_address(::tmf882x_interfaces::msg::TMF882XMeasure & msg)
  : msg_(msg)
  {}
  Init_TMF882XMeasure_measurement_num i2c_address(::tmf882x_interfaces::msg::TMF882XMeasure::_i2c_address_type arg)
  {
    msg_.i2c_address = std::move(arg);
    return Init_TMF882XMeasure_measurement_num(msg_);
  }

private:
  ::tmf882x_interfaces::msg::TMF882XMeasure msg_;
};

class Init_TMF882XMeasure_hists
{
public:
  explicit Init_TMF882XMeasure_hists(::tmf882x_interfaces::msg::TMF882XMeasure & msg)
  : msg_(msg)
  {}
  Init_TMF882XMeasure_i2c_address hists(::tmf882x_interfaces::msg::TMF882XMeasure::_hists_type arg)
  {
    msg_.hists = std::move(arg);
    return Init_TMF882XMeasure_i2c_address(msg_);
  }

private:
  ::tmf882x_interfaces::msg::TMF882XMeasure msg_;
};

class Init_TMF882XMeasure_reference_hist
{
public:
  explicit Init_TMF882XMeasure_reference_hist(::tmf882x_interfaces::msg::TMF882XMeasure & msg)
  : msg_(msg)
  {}
  Init_TMF882XMeasure_hists reference_hist(::tmf882x_interfaces::msg::TMF882XMeasure::_reference_hist_type arg)
  {
    msg_.reference_hist = std::move(arg);
    return Init_TMF882XMeasure_hists(msg_);
  }

private:
  ::tmf882x_interfaces::msg::TMF882XMeasure msg_;
};

class Init_TMF882XMeasure_num_bins
{
public:
  explicit Init_TMF882XMeasure_num_bins(::tmf882x_interfaces::msg::TMF882XMeasure & msg)
  : msg_(msg)
  {}
  Init_TMF882XMeasure_reference_hist num_bins(::tmf882x_interfaces::msg::TMF882XMeasure::_num_bins_type arg)
  {
    msg_.num_bins = std::move(arg);
    return Init_TMF882XMeasure_reference_hist(msg_);
  }

private:
  ::tmf882x_interfaces::msg::TMF882XMeasure msg_;
};

class Init_TMF882XMeasure_num_zones
{
public:
  Init_TMF882XMeasure_num_zones()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TMF882XMeasure_num_bins num_zones(::tmf882x_interfaces::msg::TMF882XMeasure::_num_zones_type arg)
  {
    msg_.num_zones = std::move(arg);
    return Init_TMF882XMeasure_num_bins(msg_);
  }

private:
  ::tmf882x_interfaces::msg::TMF882XMeasure msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tmf882x_interfaces::msg::TMF882XMeasure>()
{
  return tmf882x_interfaces::msg::builder::Init_TMF882XMeasure_num_zones();
}

}  // namespace tmf882x_interfaces

#endif  // TMF882X_INTERFACES__MSG__DETAIL__TMF882_X_MEASURE__BUILDER_HPP_
