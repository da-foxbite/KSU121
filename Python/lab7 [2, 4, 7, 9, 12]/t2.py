# 141, Суптеля Владислав
# 【Дата】:「19.03.20」
# 2. Даний рядок, що містить повне ім'я файлу (наприклад, 'C:\WebServers\home\testsite\www\myfile.txt').
# Виділіть з цього рядка ім'я файлу без розширення.
import os

str = "C:\WebServers\home\\testsite\www\myfile.txt"

print("Метод 1 [OS]: \n", os.path.splitext(os.path.basename(str))[0])
# [0] = 'myfile', [1] = '.txt'

a = str.split("\\")
a = a[5]
print("Метод 2 [.split]: \n", a[:-4])
