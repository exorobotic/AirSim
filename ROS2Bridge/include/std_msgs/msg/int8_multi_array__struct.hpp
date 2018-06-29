// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__INT8_MULTI_ARRAY__STRUCT_HPP_
#define STD_MSGS__MSG__INT8_MULTI_ARRAY__STRUCT_HPP_

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
#include "std_msgs/msg/multi_array_layout.hpp"  // layout

#ifndef _WIN32
# define DEPRECATED_std_msgs_msg_Int8MultiArray __attribute__((deprecated))
#else
# define DEPRECATED_std_msgs_msg_Int8MultiArray __declspec(deprecated)
#endif

namespace std_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Int8MultiArray_
{
  using Type = Int8MultiArray_<ContainerAllocator>;

  explicit Int8MultiArray_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : layout(_init)
  {
    (void)_init;
  }

  explicit Int8MultiArray_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : layout(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _layout_type =
      std_msgs::msg::MultiArrayLayout_<ContainerAllocator>;
  _layout_type layout;
  using _data_type =
      std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type * set__layout(
    const std_msgs::msg::MultiArrayLayout_<ContainerAllocator> & _arg)
  {
    this->layout = _arg;
    return this;
  }
  Type * set__data(
    const std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other> & _arg)
  {
    this->data = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      std_msgs::msg::Int8MultiArray_<ContainerAllocator> *;
  using ConstRawPtr =
      const std_msgs::msg::Int8MultiArray_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<std_msgs::msg::Int8MultiArray_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<std_msgs::msg::Int8MultiArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      std_msgs::msg::Int8MultiArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<std_msgs::msg::Int8MultiArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      std_msgs::msg::Int8MultiArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<std_msgs::msg::Int8MultiArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<std_msgs::msg::Int8MultiArray_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<std_msgs::msg::Int8MultiArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_std_msgs_msg_Int8MultiArray
    std::shared_ptr<std_msgs::msg::Int8MultiArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_std_msgs_msg_Int8MultiArray
    std::shared_ptr<std_msgs::msg::Int8MultiArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Int8MultiArray_ & other) const
  {
    if (this->layout != other.layout) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Int8MultiArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Int8MultiArray_

// alias to use template instance with default allocator
using Int8MultiArray =
    std_msgs::msg::Int8MultiArray_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace std_msgs

#endif  // STD_MSGS__MSG__INT8_MULTI_ARRAY__STRUCT_HPP_
