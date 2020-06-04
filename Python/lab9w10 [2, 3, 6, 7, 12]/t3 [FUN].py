# 141, Суптеля Владислав
# 【Дата】:「09.04.20」
# 3. Даний файл цілих чисел. Створити новий файл, який містить ті ж елементи, що і вихідний файл, але в зворотному порядку.
# Додати обробку виключень.

import os

path = "tmp3fpy"
try:
    os.mkdir(path, mode=0o777)
except OSError:
    print("ERROR: Creation of the directory %s failed OR directory already exists.\n" % path)

try:
    f = open(os.getcwd() + '\\' + path + '\\' + 'lab3f_output_file.txt', 'r')
except FileNotFoundError:
    print('A file will be created.\n Proceed? \n')
    a = int(input('Yes ~ 1, Else ~ 0 \n'))

    if a == 1:
        f = open(os.getcwd() + '\\' + path + '\\' + 'lab3f_output_file.txt', 'w')
        print('File\'s created. Awaiting input . . . \n')
        stop = False
        print('Input \'S\' to stop.')
        str = ""
        while True is not stop:
            a = input()
            if a is not 'S':
                str = str + a + '\n'
            else:
                str = str[0:(len(str) - 1)]
                stop = True
            f.write(str)
            str_reversed = str[::-1]
        f = open(os.getcwd() + '\\' + path + '\\' + 'lab3f_output_file_sortedcopy.txt', 'w')
        f.write(str_reversed)

print("### G L O R I O U S   S U C C E S S ###")
