# 141, Суптеля Владислав
# Дата: 20.02.20
# 19. Знайти корені квадратного рівняння A · x^2 + B · x + C = 0, заданого своїми коефіцієнтами A, B, C (A>0), якщо відомо,
# що дискримінант рівняння позитивний. Вивести спочатку менший, а потім більший із знайдених коренів.
# Коріння квадратного рівняння знаходяться за формулою x1, 2 = (−B ± (D)^1/2)/(2·A), де D - дискримінант, що дорівнює B^2 − 4·A·C.

import math
print("Умова: Знайти корені квадратного рівняння A · x^2 + B · x + C = 0 (якщо відомо, що дискримінант рівняння позитивний).")
a, b, c = map(int, input("Значення「A」,「B」,「C」: ").split());
if a > 0:
    D = int(b**2-4*a*c)
    if D > 0:
        xi = int((-b+math.sqrt(D))/2*a)
        xii = int((-b-math.sqrt(D))/2*a)
        if xi > xii:
            print("【x1】 = {0},【x2】 = {1}".format(xii, xi))
        else:
            print("【x1】 = {0},【x2】 = {1}".format(xi, xii))
    else:
        print("D меньше вiд 0 . . .")
else:
    print("a меньше вiд 0 . . .")
#пофикситьььььььь
