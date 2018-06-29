// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__QUATERNION_STAMPED__STRUCT_HPP_
#define GEOMETRY_MSGS__MSG__QUATERNION_STAMPED__STRUCT_HPP_

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
#include "geometry_msgs/msg/quaternion.hpp"  // quaternion
#include "std_msgs/msg/header.hpp"  // header

#ifndef _WIN32
# define DEPRECATED_geometry_msgs_msg_QuaternionStamped __attribute__((deprecated))
#else
# define DEPRECATED_geometry_msgs_msg_QuaternionStamped __declspec(deprecated)
#endif

namespace geometry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct QuaternionStamped_
{
  using Type = QuaternionStamped_<ContainerAllocator>;

  explicit QuaternionStamped_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init),
    quaternion(_init)
  {
    (void)_init;
  }

  explicit QuaternionStamped_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    quaternion(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _quaternion_type =
      geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _quaternion_type quaternion;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__quaternion(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->quaternion = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      geometry_msgs::msg::QuaternionStamped_<ContainerAllocator> *;
  using ConstRawPtr =
      const geometry_msgs::msg::QuaternionStamped_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<geometry_msgs::msg::QuaternionStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<geometry_msgs::msg::QuaternionStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      geometry_msgs::msg::QuaternionStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<geometry_msgs::msg::QuaternionStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      geometry_msgs::msg::QuaternionStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<geometry_msgs::msg::QuaternionStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<geometry_msgs::msg::QuaternionStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<geometry_msgs::msg::QuaternionStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_geometry_msgs_msg_QuaternionStamped
    std::shared_ptr<geometry_msgs::msg::QuaternionStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_geometry_msgs_msg_QuaternionStamped
    std::shared_ptr<geometry_msgs::msg::QuaternionStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QuaternionStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->quaternion != other.quaternion) {
      return false;
    }
    return true;
  }
  bool operator!=(const QuaternionStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QuaternionStamped_

// alias to use template instance with default allocator
using QuaternionStamped =
    geometry_msgs::msg::QuaternionStamped_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__QUATERNION_STAMPED__STRUCT_HPP_
