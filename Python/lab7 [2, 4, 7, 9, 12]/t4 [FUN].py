# 141, Суптеля Владислав
# 【Дата】:「19.03.20」
# 4. Дано два упорядкованих за спаданням списки. Об'єднайте їх в новий упорядкований за спаданням список.

a = [9, 6, 1]
b = [11, 4, 5]
a.extend(b)
a = sorted(a, reverse=True)
print("Новый список: ", a)
# a = list(map(int, input(": ").split()))
# a = sorted(a, reverse=True)
# print(a)
# b = list(map(int, input(": ").split()))
# b = sorted(b, reverse=True)
# print(b)
