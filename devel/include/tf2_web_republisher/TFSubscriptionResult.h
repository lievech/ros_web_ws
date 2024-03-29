// Generated by gencpp from file tf2_web_republisher/TFSubscriptionResult.msg
// DO NOT EDIT!


#ifndef TF2_WEB_REPUBLISHER_MESSAGE_TFSUBSCRIPTIONRESULT_H
#define TF2_WEB_REPUBLISHER_MESSAGE_TFSUBSCRIPTIONRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace tf2_web_republisher
{
template <class ContainerAllocator>
struct TFSubscriptionResult_
{
  typedef TFSubscriptionResult_<ContainerAllocator> Type;

  TFSubscriptionResult_()
    {
    }
  TFSubscriptionResult_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> const> ConstPtr;

}; // struct TFSubscriptionResult_

typedef ::tf2_web_republisher::TFSubscriptionResult_<std::allocator<void> > TFSubscriptionResult;

typedef boost::shared_ptr< ::tf2_web_republisher::TFSubscriptionResult > TFSubscriptionResultPtr;
typedef boost::shared_ptr< ::tf2_web_republisher::TFSubscriptionResult const> TFSubscriptionResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace tf2_web_republisher

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'tf2_web_republisher': ['/home/lhn/ros_web_ws/devel/share/tf2_web_republisher/msg', '/home/lhn/ros_web_ws/src/tf2_web_republisher/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'roscpp': ['/opt/ros/kinetic/share/roscpp/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tf2_web_republisher/TFSubscriptionResult";
  }

  static const char* value(const ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# result\n\
";
  }

  static const char* value(const ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TFSubscriptionResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // TF2_WEB_REPUBLISHER_MESSAGE_TFSUBSCRIPTIONRESULT_H
