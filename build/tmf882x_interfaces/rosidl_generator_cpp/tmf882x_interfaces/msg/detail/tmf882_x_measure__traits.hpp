// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tmf882x_interfaces:msg/TMF882XMeasure.idl
// generated code does not contain a copyright notice

#ifndef TMF882X_INTERFACES__MSG__DETAIL__TMF882_X_MEASURE__TRAITS_HPP_
#define TMF882X_INTERFACES__MSG__DETAIL__TMF882_X_MEASURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tmf882x_interfaces/msg/detail/tmf882_x_measure__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tmf882x_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TMF882XMeasure & msg,
  std::ostream & out)
{
  out << "{";
  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: num_zones
  {
    out << "num_zones: ";
    rosidl_generator_traits::value_to_yaml(msg.num_zones, out);
    out << ", ";
  }

  // member: num_bins
  {
    out << "num_bins: ";
    rosidl_generator_traits::value_to_yaml(msg.num_bins, out);
    out << ", ";
  }

  // member: reference_hist
  {
    if (msg.reference_hist.size() == 0) {
      out << "reference_hist: []";
    } else {
      out << "reference_hist: [";
      size_t pending_items = msg.reference_hist.size();
      for (auto item : msg.reference_hist) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: hists
  {
    if (msg.hists.size() == 0) {
      out << "hists: []";
    } else {
      out << "hists: [";
      size_t pending_items = msg.hists.size();
      for (auto item : msg.hists) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: i2c_address
  {
    out << "i2c_address: ";
    rosidl_generator_traits::value_to_yaml(msg.i2c_address, out);
    out << ", ";
  }

  // member: measurement_num
  {
    out << "measurement_num: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_num, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: num_valid_results
  {
    out << "num_valid_results: ";
    rosidl_generator_traits::value_to_yaml(msg.num_valid_results, out);
    out << ", ";
  }

  // member: tick
  {
    out << "tick: ";
    rosidl_generator_traits::value_to_yaml(msg.tick, out);
    out << ", ";
  }

  // member: depths_1
  {
    if (msg.depths_1.size() == 0) {
      out << "depths_1: []";
    } else {
      out << "depths_1: [";
      size_t pending_items = msg.depths_1.size();
      for (auto item : msg.depths_1) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: confs_1
  {
    if (msg.confs_1.size() == 0) {
      out << "confs_1: []";
    } else {
      out << "confs_1: [";
      size_t pending_items = msg.confs_1.size();
      for (auto item : msg.confs_1) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: depths_2
  {
    if (msg.depths_2.size() == 0) {
      out << "depths_2: []";
    } else {
      out << "depths_2: [";
      size_t pending_items = msg.depths_2.size();
      for (auto item : msg.depths_2) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: confs_2
  {
    if (msg.confs_2.size() == 0) {
      out << "confs_2: []";
    } else {
      out << "confs_2: [";
      size_t pending_items = msg.confs_2.size();
      for (auto item : msg.confs_2) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: histogram_type
  {
    out << "histogram_type: ";
    rosidl_generator_traits::value_to_yaml(msg.histogram_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TMF882XMeasure & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: num_zones
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_zones: ";
    rosidl_generator_traits::value_to_yaml(msg.num_zones, out);
    out << "\n";
  }

  // member: num_bins
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_bins: ";
    rosidl_generator_traits::value_to_yaml(msg.num_bins, out);
    out << "\n";
  }

  // member: reference_hist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reference_hist.size() == 0) {
      out << "reference_hist: []\n";
    } else {
      out << "reference_hist:\n";
      for (auto item : msg.reference_hist) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: hists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hists.size() == 0) {
      out << "hists: []\n";
    } else {
      out << "hists:\n";
      for (auto item : msg.hists) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: i2c_address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i2c_address: ";
    rosidl_generator_traits::value_to_yaml(msg.i2c_address, out);
    out << "\n";
  }

  // member: measurement_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measurement_num: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_num, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: num_valid_results
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_valid_results: ";
    rosidl_generator_traits::value_to_yaml(msg.num_valid_results, out);
    out << "\n";
  }

  // member: tick
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tick: ";
    rosidl_generator_traits::value_to_yaml(msg.tick, out);
    out << "\n";
  }

  // member: depths_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.depths_1.size() == 0) {
      out << "depths_1: []\n";
    } else {
      out << "depths_1:\n";
      for (auto item : msg.depths_1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: confs_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.confs_1.size() == 0) {
      out << "confs_1: []\n";
    } else {
      out << "confs_1:\n";
      for (auto item : msg.confs_1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: depths_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.depths_2.size() == 0) {
      out << "depths_2: []\n";
    } else {
      out << "depths_2:\n";
      for (auto item : msg.depths_2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: confs_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.confs_2.size() == 0) {
      out << "confs_2: []\n";
    } else {
      out << "confs_2:\n";
      for (auto item : msg.confs_2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: histogram_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "histogram_type: ";
    rosidl_generator_traits::value_to_yaml(msg.histogram_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TMF882XMeasure & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tmf882x_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tmf882x_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tmf882x_interfaces::msg::TMF882XMeasure & msg,
  std::ostream & out, size_t indentation = 0)
{
  tmf882x_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tmf882x_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const tmf882x_interfaces::msg::TMF882XMeasure & msg)
{
  return tmf882x_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tmf882x_interfaces::msg::TMF882XMeasure>()
{
  return "tmf882x_interfaces::msg::TMF882XMeasure";
}

template<>
inline const char * name<tmf882x_interfaces::msg::TMF882XMeasure>()
{
  return "tmf882x_interfaces/msg/TMF882XMeasure";
}

template<>
struct has_fixed_size<tmf882x_interfaces::msg::TMF882XMeasure>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tmf882x_interfaces::msg::TMF882XMeasure>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tmf882x_interfaces::msg::TMF882XMeasure>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TMF882X_INTERFACES__MSG__DETAIL__TMF882_X_MEASURE__TRAITS_HPP_
