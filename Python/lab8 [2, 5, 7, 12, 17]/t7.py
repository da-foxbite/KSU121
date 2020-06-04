# 141, Суптеля Владислав
# 【Дата】:「09.04.20」
# 7. Скласти опис класу для визначення одновимірних масивів рядків фіксованої довжини. Передбачити контроль виходу за межі
# масиву, можливість звернення до окремих рядків масиву за індексами, виконання операцій поелементного зчеплення двох масивів
# з утворенням нового масиву, злиття двох масивів з виключенням повторюваних елементів, а також висновок на екран елемента масиву
# по заданому індексу і всього масиву.

from typing import List

class FixArray:
    length: int
    capacity: int
    elements: List[str]

    def __init__(self, elements: List[str], capacity: int = None):
        self.length = len(elements)
        self.elements = []

        if capacity is None:
            capacity = self.length
        self.capacity = capacity

        for elem in elements:
            self.elements.append(elem)

    def __getitem__(self, key):
        assert (key < self.length)
        return self.elements[key]

    def append(self, value):
        assert (self.length < self.capacity)
        self.elements.append(value)
        self.length += 1

    def concat(self, arr):
        united = FixArray([], self.capacity + arr.capacity)
        for elem in self.elements:
            united.append(elem)
        for elem in arr.elements:
            united.append(elem)
        return united

    def fuse(self, arr):
        fused = FixArray([], self.capacity + arr.capacity)
        considered = {}
        for elem in self.elements:
            if elem not in considered:
                fused.append(elem)
                considered[elem] = True
        for elem in arr.elements:
            if elem not in considered:
                fused.append(elem)
                considered[elem] = True
        return fused

    def __str__(self):
        description = ''
        for elem in self.elements:
            description += elem + ' ► '
        return description

arr1 = FixArray(['-1', 'new var', 'var'], 3)
arr2 = FixArray(['var', '0', '0'], 2)
unity = arr1.fuse(arr2)
print(unity)
