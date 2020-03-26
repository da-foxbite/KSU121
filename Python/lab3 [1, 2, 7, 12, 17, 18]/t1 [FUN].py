# 141, Суптеля Владислав
# 【Дата】:「09.03.20」
# 1. У квадратній матриці відняти останній рядок з усіх рядків. Матрицю заповнити випадковими числами.
import random as ra

def nickgur(a, n, m):
    for i in range(n-1):                          # строки [n - последняя строка]
        for j in range(m):                        # столбцы [m->j]
            a[i][j] -= a[n-1][j]                  # от Ж эл стр И отнимаем Ж эл н-1 строчки
    return a
a = []                                            # для ответа
m, n = map(int, input("M x N: ").split())
print("Введіть інтервал для генерації . . . \n")
hidari = int(input("Лiва межа: "))
migi = int(input("Права межа: "))
ra.seed()                                          # seed это из майнкрафта да? [рандом в рандоме]
for i in range(n):
    a.append([0] * m)                              # расширение массива на м эл.
    for j in range(m):
        a[i][j] = ra.randint(hidari, migi)
        print(a[i][j], end=' ')                    # вывод через пробел
    print()
print()
a = nickgur(a, n, m)
for i in range(n):
    for j in range(m):
        print(a[i][j], end=' ')
    print()
# в идеале мы отнимаем от всех элементов до предпоследнего столбца от элементов последнего
