# 141, Суптеля Владислав
# 【Дата】:「09.04.20」
# 12. Даний рядковий файл. Створити новий рядковий файл, який містить всі рядки вихідного файлу найменшої довжини (в тому ж порядку).
# Додати обробку виключень.

import os
path = "tmp12py"
try:
    os.mkdir(path, mode=0o777)
except OSError:
    print("ERROR: Creation of the directory %s failed OR directory already exists.\n" % path)

try:
    f = open(os.getcwd() + '\\' + path + '\\' + 'str.txt', 'r')
except FileNotFoundError:
    print('A file will be created.\n Proceed? \n')
    a = int(input('Yes ~ 1, Else ~ 0 \n'))

    if a == 1:
        f = open(os.getcwd() + '\\' + path + '\\' + 'str.txt', 'w')
        print('File\'s created. Awaiting input . . . \n')
        stop = False
        print('Input \'0\' to stop.')
        str = ""
        while True != stop:
            a = input()
            if a != '0':
                str = str + a + '\n'
            else:
                str = str[0:(len(str)-1)]
                print(f'{str} \n')
                stop = True
        f.write(str)

f = open('tmp12py/str.txt', 'r')
lines = f.read().split('\n')
len = len(lines[0])

for line in lines:
    if len >= line.__len__():
        len = line.__len__()
f_copy = open('tmp12py/str_minLen.txt', 'w')
for line in lines:
    if len == line.__len__():
        str = line + '\n'
        f_copy.write(str)
print("### SUCCESS ### \n")

# https://stackoverflow.com/questions/2481421/difference-between-len-and-len
# len(line()) = line.__len__() ?
