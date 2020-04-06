# Copyright (c) 2015 David Woods. All rights reserved.
#
# License:
#   The MIT License
#
# See the file "LICENSE" for terms & conditions for usage, and a DISCLAIMER OF
# ALL WARRANTIES.
#

"""
    ALL YOUR BASE:

    All Your Base is a python library for converting number strings from any base to number strings of any other base.

    This library was created to make the following improvements on existing base conversion libraries out there:

    - Can convert both integers and floats
    - Uses Decimal package to allow for arbitrary precision / number of digits
    - Uses Decimal package to avoid binary rounding errors
    - Is not limited to base 36, 62, 64 due to available characters. Can convert to/from any integer base from 2 to
      whatever you like. (higher bases use delimited decimal format)



    INSTALLATION:

    Pip is preferred::

    > pip install allyourbase

    You can also install manually::

    > python setup.py install



    USAGE:

    > from allyourbase import BaseConvert
    > from decimal import Decimal
    >
    > numrep = BaseConvert(source_base=34)
    > numrep.decode("GKFT9")
    Decimal('22185791')
    >
    > numrep = BaseConvert(10, 16, max_precision=8)
    > numrep.encode(Decimal('4991.58791200'))
    "137F.9681669D"
    >
    > numrep = BaseConvert(source_base=16, destination_base=42)
    > numrep.convert("137F.9681669D", destination_delimiter=":", destination_max_precision=4)
    "2:34:35.24:29:3:9"

"""

from .standard_number import StandardNumber
from .large_base_number import LargeBaseNumber
from decimal import Decimal


class BaseConvert(object):
    """
    convert numbers (in string representation) from one base to another
    """

    def __init__(self, source_base=10, destination_base=16,
                 source_delimiter="", destination_delimiter="",
                 max_precision=10, rounding=True):
        """
        :param source_base: FROM base
        :type source_base: int
        :param destination_base: TO base
        :type destination_base: int
        :param source_delimiter: delimiter string for input
        :type source_delimiter: str
        :param destination_delimiter: delimiter string for output
        :type destination_delimiter: str
        :param max_precision: precision / decimal places (default 10)
        :type max_precision: int
        :param rounding: round (True) or just truncate (False)?
        :type rounding: bool
        """

        self.from_base = source_base
        self.to_base = destination_base
        self.source_delim = source_delimiter
        self.dest_delim = destination_delimiter
        self.precision = max_precision
        self.rounding = rounding

    def encode(self, value, base=None, delimiter=None, max_precision=None, rounding=None):
        """
        :param base: TO base
        :type base: int
        :param value: input value. Decimal or str is preferred for precision. Int can also be used.
        :param delimiter: delimiter string for output, used for bases > 36
        :type delimiter: str
        :param max_precision: precision / decimal places (default 10)
        :type max_precision: int
        :param rounding: round (True) or just truncate (False)?
        :type rounding: bool
        :return: string representing value in target base
        :rtype: str
        """
        if base is None:
            base = self.to_base
        if delimiter is None:
            delimiter = self.dest_delim
        if max_precision is None:
            max_precision = self.precision
        if rounding is None:
            rounding = self.rounding

        torep = self.__get_number_representation(base, max_precision)
        return torep.to_base(Decimal(value), delimiter, rounding)

    def decode(self, value: str, base=None, delimiter=None, max_precision=None, rounding=None):
        """
        :param base: FROM base
        :type base: int
        :param value: input value
        :type value: str
        :param delimiter: delimiter string for input, needed for bases > 36
        :type delimiter: str
        :param max_precision: precision / decimal places (default 10)
        :type max_precision: int
        :param rounding: round (True) or just truncate (False)?
        :type rounding: bool
        :return: coverted value to base10
        :rtype: Decimal
        """
        if base is None:
            base = self.from_base
        if delimiter is None:
            delimiter = self.source_delim
        if max_precision is None:
            max_precision = self.precision
        if rounding is None:
            rounding = self.rounding

        fromrep = self.__get_number_representation(base, max_precision)
        return fromrep.from_base(value, delimiter, rounding)

    def convert(self, value: str, source_base=None, destination_base=None, source_delimiter=None,
                destination_delimiter=None, source_max_precision=None, destination_max_precision=None, rounding=None):
        """
        :param source_base: FROM base
        :type source_base: int
        :param destination_base: TO base
        :type destination_base: int
        :param value: input value
        :type value: str
        :param source_delimiter: delimiter string for input, needed for bases > 36
        :type source_delimiter: str
        :param destination_delimiter: delimiter string for output, used for bases > 36
        :type destination_delimiter: str
        :param source_max_precision: precision / decimal places (default 10) for decoding
        :type source_max_precision: int
        :param destination_max_precision: precision / decimal places (default 10) for encoding
        :type destination_max_precision: int
        :param rounding: round (True) or just truncate (False)?
        :type rounding: bool
        :return: string of output
        :rtype: str
        """

        return self.encode(self.decode(str(value), base=source_base, delimiter=source_delimiter,
                                       max_precision=source_max_precision, rounding=rounding),
                           base=destination_base, delimiter=destination_delimiter,
                           max_precision=destination_max_precision, rounding=rounding)

    def __get_number_representation(self, base=None, max_precision=None):
        """
        Factory for creating number representations
        :param base: FROM or TO base
        :type base: int
        :param max_precision: precision / decimal places (default 10)
        :type max_precision: int
        :return: NumberRepresentation inherited class
        :rtype: _NumberRepresentation
        """
        if base is None:
            base = self.from_base
        if max_precision is None:
            max_precision = self.precision

        if base != int(base):
            raise Exception("illegal base. must be an integer greater than 1.")
        if base > 36:
            return LargeBaseNumber(base, max_precision)
        elif 2 <= base <= 36:
            return StandardNumber(base, max_precision)
        else:
            raise Exception("illegal base. must be an integer greater than 1.")