# 141, Суптеля Владислав
# 【Дата】:「19.03.20」
# 9. Використовуючи словники, написати програму додавання і множення двох комплексних чисел.

a = {'real': float(input("Вещественная часть 1-ого числа: ")), 'imaginary': float(input("Мнимая часть 1-ого числа: "))}
b = {'real': float(input("Вещественная часть 2-ого числа: ")), 'imaginary': float(input("Мнимая часть 2-ого числа: "))}
c_sum = {'real': a['real'] + b['real'], 'imaginary': a['imaginary'] + b['imaginary']}
c_mult = {'real': a['real']*b['real']-a['imaginary']*b['imaginary'], 'imaginary': a['real']*b['imaginary']+a['imaginary']*b['real']}
print(" Результат сложения: %.0f+%.0fj" % (c_sum['real'], c_sum['imaginary']))
print(" Результат умножения: %.0f+%.0fj" % (c_mult['real'], c_mult['imaginary']))
