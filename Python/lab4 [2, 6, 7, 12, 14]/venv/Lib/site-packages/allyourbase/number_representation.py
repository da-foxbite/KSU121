from abc import ABCMeta, abstractmethod
from decimal import *
import re


class NumberRepresentation(metaclass=ABCMeta):

    def __init__(self, base: int, max_precision=10):
        """
        Creates number representation with source or target base
        :param base: source or target base
        :type base: int
        :param max_precision: number of decimal places to go
        :type max_precision: int
        """

        self.base = base
        self.precision = max_precision
        self.positive = True
        self.integ = Decimal('0')
        self.fract = Decimal('0.0')

    @abstractmethod
    def from_base(self, value: str, delimiter="", rounding=True):
        """
        Converts from the specified base to internal number structure
        :param value: string representation of the number
        :type value: str
        :param delimiter: text delimiter to use between characters if necessary (defaults to empty)
        :type delimiter: str
        :param rounding: round to precision
        :type rounding:bool
        :return: arbitrary precision number
        :rtype: Decimal
        """
        pass

    @abstractmethod
    def to_base(self, value: Decimal, delimiter="", rounding=True):
        """
        Converts from the internal number structure to a list of strings
        :param value: arbitrary precision number
        :type value: Decimal
        :param delimiter: text delimiter to use between characters if necessary (defaults to empty)
        :type delimiter: str
        :param rounding: round to precision
        :type rounding:bool
        :return: number represented in new base as a list
        :rtype: list of str
        """
        pass

    def to_base_string(self, value: Decimal):
        """
        Converts from the internal number structure to a single string
        :param value: arbitrary precision number
        :type value: int
        :return: number represented in new base as a string
        :rtype: str
        """
        return self.delimiter.join(self.to_base(value))

    def clean_up_number_string(self, value: str, delimiter=""):
        """
        spring cleaning on the string
        :param value: string representation of the number
        :type value: str
        :param delimiter: delimiter between digits, defaults to ""
        :type delimiter: str
        :return: cleaned string, split into integer and fractional parts
        :rtype: tuple of str
        """
        value = value.strip().upper()

        if delimiter != "":
            parts = value.split(delimiter)
            value = ""
            for n in range(len(parts)):
                parts[n] = re.sub(r'\s*', '', parts[n])

            value = delimiter.join(parts)
            value = re.sub(r'\s*\.\s*', '.', value)
        else:
            value = re.sub(r'\s*', '', value)

        if value[0:1] == '-.':
            value = "0" + value[1:]
        if value[0] == '.':
            value = "0" + value
        parts = value.split('.', 2)
        i = parts[0]
        if len(parts) > 1:
            f = parts[1]
        else:
            f = ""
        self.positive = i[0] != '-'
        if not self.positive:
            i = i[1:]
        return i, f

    def clean_up_number(self, value: Decimal):
        """
        spring cleaning on the internal value
        :param value: arbitrary precision representation of the number
        :return: cleaned value, split into integer and fractional parts
        :rtype: tuple of Decimal
        """
        (istr, fstr) = self.clean_up_number_string(str(value))

        i = Decimal(istr)
        f = Decimal("0." + fstr)

        return i, f

    @staticmethod
    def frac(value: Decimal):
        return Decimal(abs(value) - int(abs(value))).copy_sign(value)