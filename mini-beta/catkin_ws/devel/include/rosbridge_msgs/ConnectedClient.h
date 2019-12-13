// Generated by gencpp from file rosbridge_msgs/ConnectedClient.msg
// DO NOT EDIT!


#ifndef ROSBRIDGE_MSGS_MESSAGE_CONNECTEDCLIENT_H
#define ROSBRIDGE_MSGS_MESSAGE_CONNECTEDCLIENT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosbridge_msgs
{
template <class ContainerAllocator>
struct ConnectedClient_
{
  typedef ConnectedClient_<ContainerAllocator> Type;

  ConnectedClient_()
    : ip_address()
    , connection_time()  {
    }
  ConnectedClient_(const ContainerAllocator& _alloc)
    : ip_address(_alloc)
    , connection_time()  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _ip_address_type;
  _ip_address_type ip_address;

   typedef ros::Time _connection_time_type;
  _connection_time_type connection_time;





  typedef boost::shared_ptr< ::rosbridge_msgs::ConnectedClient_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosbridge_msgs::ConnectedClient_<ContainerAllocator> const> ConstPtr;

}; // struct ConnectedClient_

typedef ::rosbridge_msgs::ConnectedClient_<std::allocator<void> > ConnectedClient;

typedef boost::shared_ptr< ::rosbridge_msgs::ConnectedClient > ConnectedClientPtr;
typedef boost::shared_ptr< ::rosbridge_msgs::ConnectedClient const> ConnectedClientConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosbridge_msgs::ConnectedClient_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosbridge_msgs::ConnectedClient_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosbridge_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'rosbridge_msgs': ['/home/pi/catkin_ws/src/rosbridge_suite/rosbridge_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosbridge_msgs::ConnectedClient_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosbridge_msgs::ConnectedClient_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosbridge_msgs::ConnectedClient_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosbridge_msgs::ConnectedClient_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbridge_msgs::ConnectedClient_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbridge_msgs::ConnectedClient_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosbridge_msgs::ConnectedClient_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7f2187ce389b39b2b3bb2a3957e54c04";
  }

  static const char* value(const ::rosbridge_msgs::ConnectedClient_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7f2187ce389b39b2ULL;
  static const uint64_t static_value2 = 0xb3bb2a3957e54c04ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosbridge_msgs::ConnectedClient_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosbridge_msgs/ConnectedClient";
  }

  static const char* value(const ::rosbridge_msgs::ConnectedClient_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosbridge_msgs::ConnectedClient_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string ip_address\n"
"time connection_time\n"
;
  }

  static const char* value(const ::rosbridge_msgs::ConnectedClient_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosbridge_msgs::ConnectedClient_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ip_address);
      stream.next(m.connection_time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConnectedClient_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosbridge_msgs::ConnectedClient_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosbridge_msgs::ConnectedClient_<ContainerAllocator>& v)
  {
    s << indent << "ip_address: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.ip_address);
    s << indent << "connection_time: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.connection_time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSBRIDGE_MSGS_MESSAGE_CONNECTEDCLIENT_H
