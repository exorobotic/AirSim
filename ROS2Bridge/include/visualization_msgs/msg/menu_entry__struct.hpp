// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__MENU_ENTRY__STRUCT_HPP_
#define VISUALIZATION_MSGS__MSG__MENU_ENTRY__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED_visualization_msgs_msg_MenuEntry __attribute__((deprecated))
#else
# define DEPRECATED_visualization_msgs_msg_MenuEntry __declspec(deprecated)
#endif

namespace visualization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MenuEntry_
{
  using Type = MenuEntry_<ContainerAllocator>;

  explicit MenuEntry_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->parent_id = 0ul;
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->title = "";
      this->command = "";
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_type = 0;
    }
  }

  explicit MenuEntry_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : title(_alloc),
    command(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->parent_id = 0ul;
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->title = "";
      this->command = "";
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->command_type = 0;
    }
  }

  // field types and members
  using _id_type =
      uint32_t;
  _id_type id;
  using _parent_id_type =
      uint32_t;
  _parent_id_type parent_id;
  using _title_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _title_type title;
  using _command_type =
      std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _command_type command;
  using _command_type_type =
      uint8_t;
  _command_type_type command_type;

  // setters for named parameter idiom
  Type * set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return this;
  }
  Type * set__parent_id(
    const uint32_t & _arg)
  {
    this->parent_id = _arg;
    return this;
  }
  Type * set__title(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->title = _arg;
    return this;
  }
  Type * set__command(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->command = _arg;
    return this;
  }
  Type * set__command_type(
    const uint8_t & _arg)
  {
    this->command_type = _arg;
    return this;
  }

  // constants
  enum { FEEDBACK = 0u };
  enum { ROSRUN = 1u };
  enum { ROSLAUNCH = 2u };

  // pointer types
  using RawPtr =
      visualization_msgs::msg::MenuEntry_<ContainerAllocator> *;
  using ConstRawPtr =
      const visualization_msgs::msg::MenuEntry_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<visualization_msgs::msg::MenuEntry_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<visualization_msgs::msg::MenuEntry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::msg::MenuEntry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<visualization_msgs::msg::MenuEntry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      visualization_msgs::msg::MenuEntry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<visualization_msgs::msg::MenuEntry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<visualization_msgs::msg::MenuEntry_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<visualization_msgs::msg::MenuEntry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_visualization_msgs_msg_MenuEntry
    std::shared_ptr<visualization_msgs::msg::MenuEntry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_visualization_msgs_msg_MenuEntry
    std::shared_ptr<visualization_msgs::msg::MenuEntry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MenuEntry_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->parent_id != other.parent_id) {
      return false;
    }
    if (this->title != other.title) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->command_type != other.command_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const MenuEntry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MenuEntry_

// alias to use template instance with default allocator
using MenuEntry =
    visualization_msgs::msg::MenuEntry_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace visualization_msgs

#endif  // VISUALIZATION_MSGS__MSG__MENU_ENTRY__STRUCT_HPP_
