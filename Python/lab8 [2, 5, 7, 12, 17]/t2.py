# 141, Суптеля Владислав
# 【Дата】:「09.04.20」
# 2. Створіть клас з ім'ям train, що містить поля: назва пункту призначення, номер поїзда, час відправлення.
# Ввести дані в масив з п'яти елементів типу train, впорядкувати елементи за номерами поїздів. Додати можливість
# виведення інформації про потяг, номер якого введено користувачем. Додати можливість сортування масив по пункту призначення,
# причому поїзда з однаковими пунктами призначення повинні бути впорядковані за часом відправлення.
from datetime import datetime as dt

class Train:
    def __init__(self, destination: str, traNum: str, traDate):
        self.destination = destination
        self.traNum = traNum
        self.traDate = traDate

    def __str__(self):
        return "Назначение: %s || Номер: %s || Дата: %s" % (self.destination, self.traNum, self.traDate)
    #def __repr__(self):
        #return '\n'.join(str(item) for item in self.list)

    # метод вывода вне класса мне тоже нужен, так что, видимо, без ещё одного внутри класса никак
    def printC(self):
        print("Назначение: {0} || Номер: {1} || Дата: {2}".format(self.destination, self.traNum, self.traDate))

def printout(l):
    print('\n'.join(map(str, l)), end='\n')

def sortNum(l):
    print("\n По номеру: \n")
    l.sort(key=lambda train: train.traNum)
    printout(l)

def sortDestiny(l):
    print("\n По назначению: \n")
    l.sort(key=lambda train: train.traDate)
    if l[2].destination == l[3].destination:            # топорно, но главное что результат подходящий
        l.sort(key=lambda train: train.destination)
    printout(l)

def hopOnNum(x):
    k = 0
    for k in range(len(ressha)):
        if ressha[k].traNum == x:
            ressha[k].printC()
#   else:                               # почему-то работает криво
#       quit("Вне диапазона.")

ressha = []
ressha.append(Train('Орехов ', '11', dt(2020, 4, 1, 17, 30)))
ressha.append(Train('Житомир', '03', dt(2020, 4, 1, 20, 45)))
ressha.append(Train('Жмыхи  ', '35', dt(2020, 4, 1, 22, 00)))
ressha.append(Train('Жмыхи  ', '25', dt(2020, 4, 2, 4, 30)))
ressha.append(Train('Самара ', '22', dt(2020, 4, 2, 12, 00)))

sortNum(ressha)
sortDestiny(ressha)

x = str(input('\n'+"Доступные поезда >> #03 /// #11 /// #22 /// #25 /// #35: "))
hopOnNum(x)
