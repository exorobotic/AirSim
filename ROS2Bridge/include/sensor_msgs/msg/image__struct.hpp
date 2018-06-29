// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__IMAGE__STRUCT_HPP_
#define SENSOR_MSGS__MSG__IMAGE__STRUCT_HPP_

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32) && defined(ERROR)
  #undef ERROR
#endif

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies
#include "std_msgs/msg/header.hpp"  // header

#ifndef _WIN32
# define DEPRECATED_sensor_msgs_msg_Image __attribute__((deprecated))
#else
# define DEPRECATED_sensor_msgs_msg_Image __declspec(deprecated)
#endif

namespace sensor_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Image_
{
  using Type = Image_<ContainerAllocator>;

  explicit Image_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0ul;
      this->width = 0ul;
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->encoding = "";
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_bigendian = 0;
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->step = 0ul;
    }
  }

  explicit Image_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    encoding(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0ul;
      this->width = 0ul;
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->encoding = "";
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_bigendian = 0;
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->step = 0ul;
    }
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _height_type =
      uint32_t;
  _height_type height;
  using _width_type =
      uint32_t;
  _width_type width;
  using _encoding_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _encoding_type encoding;
  using _is_bigendian_type =
      uint8_t;
  _is_bigendian_type is_bigendian;
  using _step_type =
      uint32_t;
  _step_type step;
  using _data_type =
      std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__height(
    const uint32_t & _arg)
  {
    this->height = _arg;
    return this;
  }
  Type * set__width(
    const uint32_t & _arg)
  {
    this->width = _arg;
    return this;
  }
  Type * set__encoding(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->encoding = _arg;
    return this;
  }
  Type * set__is_bigendian(
    const uint8_t & _arg)
  {
    this->is_bigendian = _arg;
    return this;
  }
  Type * set__step(
    const uint32_t & _arg)
  {
    this->step = _arg;
    return this;
  }
  Type * set__data(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->data = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      sensor_msgs::msg::Image_<ContainerAllocator> *;
  using ConstRawPtr =
      const sensor_msgs::msg::Image_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<sensor_msgs::msg::Image_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<sensor_msgs::msg::Image_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::Image_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::Image_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_msgs::msg::Image_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<sensor_msgs::msg::Image_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<sensor_msgs::msg::Image_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<sensor_msgs::msg::Image_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_sensor_msgs_msg_Image
    std::shared_ptr<sensor_msgs::msg::Image_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_sensor_msgs_msg_Image
    std::shared_ptr<sensor_msgs::msg::Image_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Image_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->encoding != other.encoding) {
      return false;
    }
    if (this->is_bigendian != other.is_bigendian) {
      return false;
    }
    if (this->step != other.step) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Image_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Image_

// alias to use template instance with default allocator
using Image =
    sensor_msgs::msg::Image_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace sensor_msgs

#endif  // SENSOR_MSGS__MSG__IMAGE__STRUCT_HPP_
