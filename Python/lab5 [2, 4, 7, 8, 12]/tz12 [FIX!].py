# 141, Суптеля Владислав
# 【Дата】:「19.03.20」
# 12. Вивести значення цілочисельного виразу, заданого у вигляді рядка S. Вираз визначається наступним чином:
# <Вираз> :: = <цифра> | <Вираз> + <цифра> | <Вираз> - <цифра>

import string
#import re

# рекурсия не то что бы присутствует
# скорее "работает" чем работает

def fixEval(equation):
    if not set(equation).intersection(string.ascii_letters + '{}[]_;\n'):
        return eval(equation)
    else:
        print("Illegal character")
        return None

t1, t2 = map(int, input('Введіть вираз виду а+b: ').split('+'))
s = f'{t1} + {t2} | {t1} - {t2}'
a, b = s.split(' | ')
s = fixEval(f'{a}+{b}')
print(f'[{a}] : {fixEval(a)}')
print(f'[{b}] : {fixEval(b)}')
print(f'[{a} + {b}] : {s}')

# eval(equation, {'__builtins__': None})

# чичас бы задание под парсинг отводить
