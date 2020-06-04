# 141, Суптеля Владислав
# 【Дата】:「19.03.20」
# 7. Описати рекурсивную функцію GCD (A, B) цілого типу, яка знаходить найбільший спільний дільник (НСД, greatest common divisor)
# двох цілих позитивних чисел A і B, використовуючи алгоритм Евкліда: НСД (A, B) = НСД (B, A mod B), B ≠ 0; НСД (A, 0) = A,
# де «mod» позначає операцію взяття залишку від ділення. За допомогою цієї функції знайти НСД (A, B), НСД (A, C), НСД (A, D),
# якщо дано числа A, B, C, D.

def euclidsAlg(a, b):
    if b == 0:
        return a
    else: return euclidsAlg(b, a % b)

A, B, C, D = map(int, input().split())
print(f"НСД 1го та 2го числа: {euclidsAlg(A, B)}")
print(f"НСД 3го та 4го числа: {euclidsAlg(C, D)}")
print(f"НСД 1го та 4го числа: {euclidsAlg(A, D)}")

#    if b == 0:
#        return a
#    if a == 0:
#        return b
#    if a > b:
#        return euclidsAlg(a % b, b)
#    return euclidsAlg(b, a % b)
