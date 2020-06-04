# 141, Суптеля Владислав
# 【Дата】:「09.04.20」
# 6. Дано два файли довільного типу. Поміняти місцями їх вміст.
# Додати обробку виключень.

# должно: в первом файле по итогу должна быть строка с пометкой DONE2 и строка DONE1 соответсвенно во втором
# делает: первый файл => строка D1, потом D2; второй файл => строка D2, потом D1

import os
import random
import string
#import shutil

path = "tmp6fpy"
try:
    os.mkdir(path, mode=0o777)
except OSError:
    print("ERROR: Creation of the directory %s failed OR directory already exists.\n" % path)

n = 128  # два случайных файла
chars = "".join([random.choice(string.ascii_letters[:26]) for i in range(n)])
with open(os.getcwd() + '\\' + path + '\\' + 'lab6f_output_file.txt', 'w') as f:
    f.write('DONE1:' + chars)
chars = "".join([random.choice(string.ascii_letters[:26]) for i in range(n)])
with open(os.getcwd() + '\\' + path + '\\' + 'lab6f_output_file_re.txt', 'w') as f:
    f.write('DONE2:' + chars)

try:
    f1 = open(os.getcwd() + '\\' + path + '\\' + 'lab6f_output_file.txt', 'r+')
#    shutil.copy2('tmp6fpy/lab6f_output_file', 'tmp6fpy/TEST_la6f_output_file')
    f2 = open(os.getcwd() + '\\' + path + '\\' + 'lab6f_output_file_re.txt', 'r+')
#    shutil.copy2('tmp6fpy/lab6f_output_file_re', 'tmp6fpy/TEST_lab6f_output_file_re')
except FileNotFoundError:
    print('ERROR: File\'s missing.')
except (UnicodeEncodeError, UnicodeDecodeError, UnicodeTranslateError):
    print('ERROR_TYPE Encoding.')

else:
    str1 = f1.read()
    str2 = f2.read()
    f2.write('\n'+str1)
    f1.write('\n'+str2)
    f1.close()
    f2.close()

print("### S U C C E S S ###")
