# 141, Суптеля Власлав
# 【Дата】:「24.02.20」
# 5. Дано ціле число. Вивести його рядок-опис виду «від'ємне парне число», «нульове число», «додатне непарне число» і т. д.

print("Умова: Вивести рядок-опис.")
n = int(input("Значення「n」: "))
if n > 0:
    str1 = "додатнє "
else:
    str1 = "від'ємне "
if n == 0:
    str1 = "нульове число"
#if n-int(n) == 0: str2 = "цiле "   # int??
if n % 2 == 0:
    str2 = "парне "
else:
    str2 = "непарне "
str3 = "число"
if n == 0:
    print(str1)
else:
    print(str1+str2+str3)
# if else if else if else oooga boooooga ooooooga boooooooooga
