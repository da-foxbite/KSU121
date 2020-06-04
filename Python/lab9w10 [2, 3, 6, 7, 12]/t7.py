# 141, Суптеля Владислав
# 【Дата】:「09.04.20」
# 7. Даний файл довільного типу. Створити його копію з новим ім'ям.
# Додати обробку виключень.

import os
import shutil

path = "tmp7py"
try:
    os.mkdir(path, mode=0o777)
except OSError:
    print("ERROR: Creation of the directory %s failed OR directory already exists.\n Overwriting . . . \n" % path)

with open(os.getcwd() + '\\' + path + '\\' + 'lab7_output_file', 'wb') as fout:
    fout.write(os.urandom(1024))

shutil.copy2('tmp7py/lab7_output_file', 'tmp7py/lab7_output_file_copy')  # по-хорошему и тут надо исключения но нет
print("### G L O R I O U S   S U C C E S S ###")
