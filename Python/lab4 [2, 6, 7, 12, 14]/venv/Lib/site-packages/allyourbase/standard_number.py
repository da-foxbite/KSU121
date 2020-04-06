from decimal import *
from .number_representation import NumberRepresentation


class StandardNumber(NumberRepresentation):

    def __init__(self, base: int, max_precision=10):
        super(StandardNumber, self).__init__(base, max_precision)

        self.digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

    def from_base(self, value: str, delimiter="", rounding=True):
        (self.integ, self.fract) = self.clean_up_number_string(value, delimiter)
        eprec = ((len(self.fract) + len(self.integ)) * 2)
        extcontext = Context(prec=eprec, Emin=eprec*-2, Emax=eprec*2)
        setcontext(extcontext)

        # integer part
        n = Decimal('0')
        for i in range(len(self.integ)):
            n *= self.base
            n += self.digits.index(self.integ[i])

        # fraction part
        f = Decimal('0')
        if self.fract is not "" and self.fract is not "0" and self.fract is not "0.0":
            for i in range(len(self.fract)):
                f *= Decimal(self.base)
                f += Decimal(self.digits.index(self.fract[i]))
            invf = Decimal(pow(Decimal(self.base), Decimal(0 - (len(self.fract)))))
            f *= invf

        combined_value = Decimal('0')
        if rounding:
            with localcontext() as ctx:
                ctx.prec = self.precision + len(str(Decimal(n)))
                combined_value += n
                combined_value += f
        else:
            with localcontext() as ctx:
                ctx.prec = self.precision + len(str(Decimal(n)))
                ctx.rounding = ROUND_DOWN
                combined_value += n
                combined_value += f

        if not self.positive:
            combined_value = 0 - combined_value

        return combined_value

    def to_base(self, value: Decimal, delimiter="", rounding=True):
        if value == Decimal('0'):
            return "0"

        (self.integ, self.fract) = self.clean_up_number(value)
        eprec = ((len(str(self.fract)) + len(str(self.integ))) * 2)
        extcontext = Context(prec=eprec, Emin=eprec*-2, Emax=eprec*2)
        setcontext(extcontext)

        # integer part
        remainder = self.integ
        idigits = []
        while remainder > 0:
            tmp = remainder % self.base
            idigits.insert(0, self.digits[int(tmp)])
            remainder = (remainder - tmp) / self.base

        # fraction part
        remainder = self.fract
        fdigits = []
        # this extracts necessary + 1 digits, to allow for rounding
        while remainder > 0 and len(fdigits) <= self.precision:
            remainder *= self.base
            tmp = int(remainder)
            remainder = self.frac(remainder)
            fdigits.append(self.digits[int(tmp)])

        if remainder != 0 and rounding:
            if self.digits.index(fdigits[-1]) >= self.base/2.0:
                fdigits = self.round(fdigits)
            else:
                # if it would be rounding down, we still need to strip off the
                # last character that was used to determine rounding
                fdigits = fdigits[:-1]
        elif remainder != 0 and not rounding:
            # if not rounding, strip off the last digit that would have been
            # used for rounding
            fdigits = fdigits[:-1]

        numstr = delimiter.join(idigits).lstrip('0')
        if len(numstr) == 0:
            numstr = "0"

        if len(fdigits) > 0:
            numstr += "."
            numstr += delimiter.join(fdigits).rstrip('0')

        if not self.positive:
            numstr = "-" + numstr

        return numstr

    def round(self, value: [str]):
        """
        rounds any number, not just non-decimal
        :param value: string of number
        :type value: list of str
        :return: string, new rounded number
        """
        if self.digits.index(value[-1]) >= self.base/2.0:
            v = self.digits.index(value[-2]) + 1
            if v < self.base:
                value[-2] = self.digits[v]
                value = value[:-1]
            else:
                value = self.round(value[:-1])

        return value