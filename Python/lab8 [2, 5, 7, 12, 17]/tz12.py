# 141, Суптеля Владислав
# 【Дата】:「09.04.20」
# 12. Створити клас для зберігання комплексних чисел. Реалізувати операції над комплексними числами: додавання, віднімання,
# множення, ділення, пару, зведення в ступінь, добування кореня. Передбачити можливість зміни форми запису комплексного числа:
# алгебраїчна форма, тригонометрическая форма, експоненціальна форма.

import math
# import cmath

class ComplexNum:
    def __init__(self, real, imag=0.0):
        self.real = real
        self.imag = imag

        m, n = None, None  # θ?

        self.rect_to_polar()

    def __add__(self, other):
        return ComplexNum(self.real + other.real, self.imag + other.imag)

    def __sub__(self, other):
        return ComplexNum(self.real - other.real, self.imag - other.imag)

    def __mul__(self, other):
        return ComplexNum(self.real * other.real - self.imag * other.imag,
                          self.imag * other.real + self.real * other.imag)

    def __truediv__(self, other):
        sfr, sfi, otr, oti = self.real, self.imag, other.real, other.imag
        r = float(otr ** 2 + oti ** 2)
        return ComplexNum((sfr * otr + sfi * oti) / r, (sfi * otr - sfr * oti) / r)

    def __pow__(self, other: int):
        return ComplexNum((self.n ** other) * math.cos(other * self.m),
                          (self.n ** other) * math.sin(other * self.m))

    def roots(self, base):
        roots = []
        for k in range(0, base + 1):
            root = ComplexNum(math.sqrt(self.n) * (math.cos(self.m + 2 * math.pi * k) / base),
                              math.sqrt(self.n) * (math.sin(self.m + 2 * math.pi * k) / base))
            roots.append(root)
        return roots

    # Rectangular form: a+bi
    # Polar form: r(cos(θ)+i⋅sin(θ))
    # Exponential form: r⋅e^i(θ)

    def rect_to_polar(self):
        self.n = math.sqrt((self.real ** 2) + (self.imag ** 2))
        self.m = math.atan(self.imag / self.real)

    def print_rect(self):
        print(f'Алгебраїчна форма:     {self.real}+{self.imag}i')

    def print_polar(self):
        print(f'Тригонометрична форма: {self.n} * (cos {self.m} + isin {self.n})')

    def print_expo(self):
        print(f'Експоненціальна форма: {self.n} * e^i({self.m})')


complexNum = ComplexNum(13, math.sqrt(37))
complexNum.print_rect()
complexNum.print_polar()
complexNum.print_expo()
