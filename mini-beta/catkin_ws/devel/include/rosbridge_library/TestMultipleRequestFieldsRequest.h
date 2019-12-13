// Generated by gencpp from file rosbridge_library/TestMultipleRequestFieldsRequest.msg
// DO NOT EDIT!


#ifndef ROSBRIDGE_LIBRARY_MESSAGE_TESTMULTIPLEREQUESTFIELDSREQUEST_H
#define ROSBRIDGE_LIBRARY_MESSAGE_TESTMULTIPLEREQUESTFIELDSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosbridge_library
{
template <class ContainerAllocator>
struct TestMultipleRequestFieldsRequest_
{
  typedef TestMultipleRequestFieldsRequest_<ContainerAllocator> Type;

  TestMultipleRequestFieldsRequest_()
    : int(0)
    , float(0.0)
    , string()
    , bool(false)  {
    }
  TestMultipleRequestFieldsRequest_(const ContainerAllocator& _alloc)
    : int(0)
    , float(0.0)
    , string(_alloc)
    , bool(false)  {
  (void)_alloc;
    }



   typedef int32_t _int_type;
  _int_type int;

   typedef float _float_type;
  _float_type float;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _string_type;
  _string_type string;

   typedef uint8_t _bool_type;
  _bool_type bool;





  typedef boost::shared_ptr< ::rosbridge_library::TestMultipleRequestFieldsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosbridge_library::TestMultipleRequestFieldsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TestMultipleRequestFieldsRequest_

typedef ::rosbridge_library::TestMultipleRequestFieldsRequest_<std::allocator<void> > TestMultipleRequestFieldsRequest;

typedef boost::shared_ptr< ::rosbridge_library::TestMultipleRequestFieldsRequest > TestMultipleRequestFieldsRequestPtr;
typedef boost::shared_ptr< ::rosbridge_library::TestMultipleRequestFieldsRequest const> TestMultipleRequestFieldsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosbridge_library::TestMultipleRequestFieldsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosbridge_library::TestMultipleRequestFieldsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosbridge_library

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'rosbridge_library': ['/home/pi/catkin_ws/src/rosbridge_suite/rosbridge_library/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosbridge_library::TestMultipleRequestFieldsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosbridge_library::TestMultipleRequestFieldsRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosbridge_library::TestMultipleRequestFieldsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosbridge_library::TestMultipleRequestFieldsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbridge_library::TestMultipleRequestFieldsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbridge_library::TestMultipleRequestFieldsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosbridge_library::TestMultipleRequestFieldsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6cce9fb727dd0f31d504d7d198a1f4ef";
  }

  static const char* value(const ::rosbridge_library::TestMultipleRequestFieldsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6cce9fb727dd0f31ULL;
  static const uint64_t static_value2 = 0xd504d7d198a1f4efULL;
};

template<class ContainerAllocator>
struct DataType< ::rosbridge_library::TestMultipleRequestFieldsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosbridge_library/TestMultipleRequestFieldsRequest";
  }

  static const char* value(const ::rosbridge_library::TestMultipleRequestFieldsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosbridge_library::TestMultipleRequestFieldsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 int\n"
"float32 float\n"
"string string\n"
"bool bool\n"
;
  }

  static const char* value(const ::rosbridge_library::TestMultipleRequestFieldsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosbridge_library::TestMultipleRequestFieldsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.int);
      stream.next(m.float);
      stream.next(m.string);
      stream.next(m.bool);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TestMultipleRequestFieldsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosbridge_library::TestMultipleRequestFieldsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosbridge_library::TestMultipleRequestFieldsRequest_<ContainerAllocator>& v)
  {
    s << indent << "int: ";
    Printer<int32_t>::stream(s, indent + "  ", v.int);
    s << indent << "float: ";
    Printer<float>::stream(s, indent + "  ", v.float);
    s << indent << "string: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.string);
    s << indent << "bool: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.bool);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSBRIDGE_LIBRARY_MESSAGE_TESTMULTIPLEREQUESTFIELDSREQUEST_H
