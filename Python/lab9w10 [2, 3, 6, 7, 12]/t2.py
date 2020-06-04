# 141, Суптеля Владислав
# 【Дата】:「09.04.20」
# 2. Дано імена чотирьох файлів. Знайти кількість файлів із зазначеними іменами, які є в поточному каталозі.
# Додати обробку виключень.

import os
import sys
import platform

folders_dir = ['test_dir', 'test_dir2']
names_file = ["file1", "file2", "file3", "file4"]
a = input('Folders \'test_dir\' and \'test_dir2\' will be created.\n Proceed? \n Yes ~ 1, Else ~ 0\n')

if a == '1':
    try:
        os.mkdir(path='test_dir', mode=0o777, dir_fd=None)
        os.mkdir(path='test_dir2', mode=0o777, dir_fd=None)
    except OSError:
        print('ERROR: Files/folders already exist. \n Overwriting . . . \n')

    folders = []
    for check_be_folder in os.listdir(path='.'):
        isFolder = True
        for i in range(len(check_be_folder)):
            if check_be_folder[i] == '.':
                isFolder = False
        if isFolder:
            folders.append(check_be_folder)
    print('Catalogue:', folders)

    for folder in folders:
        if folder == 'test_dir' or folder == 'test_dir2':
            for file in names_file:
                with open(os.getcwd() + '\\' + folder + '\\' + file + '.txt', 'w') as f:
                    s = 'Filename: ' + file + '\n'
                    f.write(s)
                    s = 'Directory: ' + os.getcwd() + '\n'
                    f.write(s)
                    s = 'OS: ' + platform.system() + ' ' + platform.version() + ' ' + platform.release() + ' ' + '\n'
                    f.write(s)
                    s = 'Username: ' + os.getlogin() + '\n'
                    f.write(s)
                    s = 'Hardware: ' + platform.machine() + ', ' + platform.processor() + '\n'
                    f.write(s)
                    s = 'Encoding: ' + sys.getfilesystemencoding() + '\n'
                    f.write(s)
                    s = 'Python: ' + platform.python_version() + ', ' + platform.python_compiler() + '\n'
                    f.write(s)

print("### Checking files . . . ### \n    ....... \n    ....... \n    ....... ")
for folder in folders_dir:
    for file in names_file:
        try:
            with open(os.getcwd() + '\\' + folder + '\\' + file + '.txt', 'r') as f:
                pass
        except FileNotFoundError:
            print(file, ' not found in ', folder, ' folder')
print('### SUCCESS ### \n Everything\'s in place. 0 issues found.')
