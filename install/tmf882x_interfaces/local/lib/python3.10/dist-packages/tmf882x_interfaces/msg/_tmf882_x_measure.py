# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tmf882x_interfaces:msg/TMF882XMeasure.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'reference_hist'
# Member 'hists'
# Member 'depths_1'
# Member 'confs_1'
# Member 'depths_2'
# Member 'confs_2'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TMF882XMeasure(type):
    """Metaclass of message 'TMF882XMeasure'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tmf882x_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tmf882x_interfaces.msg.TMF882XMeasure')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tmf882_x_measure
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tmf882_x_measure
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tmf882_x_measure
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tmf882_x_measure
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tmf882_x_measure

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TMF882XMeasure(metaclass=Metaclass_TMF882XMeasure):
    """Message class 'TMF882XMeasure'."""

    __slots__ = [
        '_num_zones',
        '_num_bins',
        '_reference_hist',
        '_hists',
        '_i2c_address',
        '_measurement_num',
        '_temperature',
        '_num_valid_results',
        '_tick',
        '_depths_1',
        '_confs_1',
        '_depths_2',
        '_confs_2',
        '_histogram_type',
    ]

    _fields_and_field_types = {
        'num_zones': 'int64',
        'num_bins': 'int64',
        'reference_hist': 'sequence<int64>',
        'hists': 'sequence<int64>',
        'i2c_address': 'int64',
        'measurement_num': 'int64',
        'temperature': 'int64',
        'num_valid_results': 'int64',
        'tick': 'int64',
        'depths_1': 'sequence<int64>',
        'confs_1': 'sequence<int64>',
        'depths_2': 'sequence<int64>',
        'confs_2': 'sequence<int64>',
        'histogram_type': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int64')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.num_zones = kwargs.get('num_zones', int())
        self.num_bins = kwargs.get('num_bins', int())
        self.reference_hist = array.array('q', kwargs.get('reference_hist', []))
        self.hists = array.array('q', kwargs.get('hists', []))
        self.i2c_address = kwargs.get('i2c_address', int())
        self.measurement_num = kwargs.get('measurement_num', int())
        self.temperature = kwargs.get('temperature', int())
        self.num_valid_results = kwargs.get('num_valid_results', int())
        self.tick = kwargs.get('tick', int())
        self.depths_1 = array.array('q', kwargs.get('depths_1', []))
        self.confs_1 = array.array('q', kwargs.get('confs_1', []))
        self.depths_2 = array.array('q', kwargs.get('depths_2', []))
        self.confs_2 = array.array('q', kwargs.get('confs_2', []))
        self.histogram_type = kwargs.get('histogram_type', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.num_zones != other.num_zones:
            return False
        if self.num_bins != other.num_bins:
            return False
        if self.reference_hist != other.reference_hist:
            return False
        if self.hists != other.hists:
            return False
        if self.i2c_address != other.i2c_address:
            return False
        if self.measurement_num != other.measurement_num:
            return False
        if self.temperature != other.temperature:
            return False
        if self.num_valid_results != other.num_valid_results:
            return False
        if self.tick != other.tick:
            return False
        if self.depths_1 != other.depths_1:
            return False
        if self.confs_1 != other.confs_1:
            return False
        if self.depths_2 != other.depths_2:
            return False
        if self.confs_2 != other.confs_2:
            return False
        if self.histogram_type != other.histogram_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def num_zones(self):
        """Message field 'num_zones'."""
        return self._num_zones

    @num_zones.setter
    def num_zones(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_zones' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'num_zones' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._num_zones = value

    @builtins.property
    def num_bins(self):
        """Message field 'num_bins'."""
        return self._num_bins

    @num_bins.setter
    def num_bins(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_bins' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'num_bins' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._num_bins = value

    @builtins.property
    def reference_hist(self):
        """Message field 'reference_hist'."""
        return self._reference_hist

    @reference_hist.setter
    def reference_hist(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'reference_hist' array.array() must have the type code of 'q'"
            self._reference_hist = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'reference_hist' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._reference_hist = array.array('q', value)

    @builtins.property
    def hists(self):
        """Message field 'hists'."""
        return self._hists

    @hists.setter
    def hists(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'hists' array.array() must have the type code of 'q'"
            self._hists = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'hists' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._hists = array.array('q', value)

    @builtins.property
    def i2c_address(self):
        """Message field 'i2c_address'."""
        return self._i2c_address

    @i2c_address.setter
    def i2c_address(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'i2c_address' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'i2c_address' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._i2c_address = value

    @builtins.property
    def measurement_num(self):
        """Message field 'measurement_num'."""
        return self._measurement_num

    @measurement_num.setter
    def measurement_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'measurement_num' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'measurement_num' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._measurement_num = value

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temperature' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'temperature' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._temperature = value

    @builtins.property
    def num_valid_results(self):
        """Message field 'num_valid_results'."""
        return self._num_valid_results

    @num_valid_results.setter
    def num_valid_results(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_valid_results' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'num_valid_results' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._num_valid_results = value

    @builtins.property
    def tick(self):
        """Message field 'tick'."""
        return self._tick

    @tick.setter
    def tick(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tick' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'tick' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._tick = value

    @builtins.property
    def depths_1(self):
        """Message field 'depths_1'."""
        return self._depths_1

    @depths_1.setter
    def depths_1(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'depths_1' array.array() must have the type code of 'q'"
            self._depths_1 = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'depths_1' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._depths_1 = array.array('q', value)

    @builtins.property
    def confs_1(self):
        """Message field 'confs_1'."""
        return self._confs_1

    @confs_1.setter
    def confs_1(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'confs_1' array.array() must have the type code of 'q'"
            self._confs_1 = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'confs_1' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._confs_1 = array.array('q', value)

    @builtins.property
    def depths_2(self):
        """Message field 'depths_2'."""
        return self._depths_2

    @depths_2.setter
    def depths_2(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'depths_2' array.array() must have the type code of 'q'"
            self._depths_2 = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'depths_2' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._depths_2 = array.array('q', value)

    @builtins.property
    def confs_2(self):
        """Message field 'confs_2'."""
        return self._confs_2

    @confs_2.setter
    def confs_2(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'q', \
                "The 'confs_2' array.array() must have the type code of 'q'"
            self._confs_2 = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -9223372036854775808 and val < 9223372036854775808 for val in value)), \
                "The 'confs_2' field must be a set or sequence and each value of type 'int' and each integer in [-9223372036854775808, 9223372036854775807]"
        self._confs_2 = array.array('q', value)

    @builtins.property
    def histogram_type(self):
        """Message field 'histogram_type'."""
        return self._histogram_type

    @histogram_type.setter
    def histogram_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'histogram_type' field must be of type 'str'"
        self._histogram_type = value
