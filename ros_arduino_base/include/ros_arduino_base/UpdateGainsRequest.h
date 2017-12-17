// Generated by gencpp from file ros_arduino_base/UpdateGainsRequest.msg
// DO NOT EDIT!


#ifndef ROS_ARDUINO_BASE_MESSAGE_UPDATEGAINSREQUEST_H
#define ROS_ARDUINO_BASE_MESSAGE_UPDATEGAINSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_arduino_base
{
template <class ContainerAllocator>
struct UpdateGainsRequest_
{
  typedef UpdateGainsRequest_<ContainerAllocator> Type;

  UpdateGainsRequest_()
    : gains()  {
      gains.assign(0.0);
  }
  UpdateGainsRequest_(const ContainerAllocator& _alloc)
    : gains()  {
  (void)_alloc;
      gains.assign(0.0);
  }



   typedef boost::array<float, 6>  _gains_type;
  _gains_type gains;




  typedef boost::shared_ptr< ::ros_arduino_base::UpdateGainsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_arduino_base::UpdateGainsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct UpdateGainsRequest_

typedef ::ros_arduino_base::UpdateGainsRequest_<std::allocator<void> > UpdateGainsRequest;

typedef boost::shared_ptr< ::ros_arduino_base::UpdateGainsRequest > UpdateGainsRequestPtr;
typedef boost::shared_ptr< ::ros_arduino_base::UpdateGainsRequest const> UpdateGainsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_arduino_base::UpdateGainsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_arduino_base::UpdateGainsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_arduino_base

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_arduino_base::UpdateGainsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_arduino_base::UpdateGainsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_arduino_base::UpdateGainsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_arduino_base::UpdateGainsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_arduino_base::UpdateGainsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_arduino_base::UpdateGainsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_arduino_base::UpdateGainsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c27a47d6801c677e4ddacbb17806ce73";
  }

  static const char* value(const ::ros_arduino_base::UpdateGainsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc27a47d6801c677eULL;
  static const uint64_t static_value2 = 0x4ddacbb17806ce73ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_arduino_base::UpdateGainsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_arduino_base/UpdateGainsRequest";
  }

  static const char* value(const ::ros_arduino_base::UpdateGainsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_arduino_base::UpdateGainsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[6] gains\n\
";
  }

  static const char* value(const ::ros_arduino_base::UpdateGainsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_arduino_base::UpdateGainsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.gains);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UpdateGainsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_arduino_base::UpdateGainsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_arduino_base::UpdateGainsRequest_<ContainerAllocator>& v)
  {
    s << indent << "gains[]" << std::endl;
    for (size_t i = 0; i < v.gains.size(); ++i)
    {
      s << indent << "  gains[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.gains[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_ARDUINO_BASE_MESSAGE_UPDATEGAINSREQUEST_H
