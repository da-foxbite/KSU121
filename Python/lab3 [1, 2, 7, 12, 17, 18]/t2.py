# 141, Суптеля Владислав
# 【Дата】:「03.03.20」
# 2. По залишку від ділення цілої частини значення функції y = log (x² + ab) на 7 вивести день тижня.
# Значення змінних а, b, x отримати випадковим чином на зазначеному користувачем інтервалі.
import random as ra
import math as m

print("Введіть інтервал для генерації . . . \n")
hidari = int(input("Лiва межа: "))
migi = int(input("Права межа: "))
def logapocalypse():
    x = ra.randint(hidari, migi)
    a = ra.randint(hidari, migi)
    b = ra.randint(hidari, migi)
    y = int(m.log10(x*x+a*b))
    print(y % 7)
    if y % 7 == 1:
        print("Понедiлок.")
    if y % 7 == 2:
        print("Вiвторок.")
    if y % 7 == 3:
        print("Середа.")
    if y % 7 == 4:
        print("Четвер.")
    if y % 7 == 5:
        print("П'ятниця.")
    if y % 7 == 6:
        print("Субота.")
    if y % 7 == 0:
        print("Недiля.")
logapocalypse()
