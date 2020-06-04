# 141, Суптеля Владислав
# 【Дата】:「19.03.20」
# 8. Описати рекурсивную функцію DigitSum (K) цілого типу,
# яка знаходить суму цифр цілого числа K, не використовуючи оператор циклу.
# За допомогою цієї функції знайти суми чисел для п'яти довільних цілих чисел.

from random import randint

def digitSum(n):
    return n % 10 + digitSum(n // 10) if n != 0 else 0

for i in range(0, 5):
    num = randint(0, 100)
    print(f"Сума цифр {num} = {digitSum(num)}")

#  print('Сума цифр {0} = {1}'.format(num, sum(map(int, str(num)))))
