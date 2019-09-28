# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from rosbridge_msgs/ConnectedClients.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import genpy
import rosbridge_msgs.msg

class ConnectedClients(genpy.Message):
  _md5sum = "d0d53b0c0aa23aa7e4cf52f49bca4b69"
  _type = "rosbridge_msgs/ConnectedClients"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """ConnectedClient[] clients

================================================================================
MSG: rosbridge_msgs/ConnectedClient
string ip_address
time connection_time
"""
  __slots__ = ['clients']
  _slot_types = ['rosbridge_msgs/ConnectedClient[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       clients

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ConnectedClients, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.clients is None:
        self.clients = []
    else:
      self.clients = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.clients)
      buff.write(_struct_I.pack(length))
      for val1 in self.clients:
        _x = val1.ip_address
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v1 = val1.connection_time
        _x = _v1
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.clients is None:
        self.clients = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.clients = []
      for i in range(0, length):
        val1 = rosbridge_msgs.msg.ConnectedClient()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.ip_address = str[start:end].decode('utf-8')
        else:
          val1.ip_address = str[start:end]
        _v2 = val1.connection_time
        _x = _v2
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        self.clients.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.clients)
      buff.write(_struct_I.pack(length))
      for val1 in self.clients:
        _x = val1.ip_address
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _v3 = val1.connection_time
        _x = _v3
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.clients is None:
        self.clients = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.clients = []
      for i in range(0, length):
        val1 = rosbridge_msgs.msg.ConnectedClient()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.ip_address = str[start:end].decode('utf-8')
        else:
          val1.ip_address = str[start:end]
        _v4 = val1.connection_time
        _x = _v4
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        self.clients.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I
