# 141, Суптеля Владислав
# 【Дата】:「09.04.20」
# 17. Клас Покупець: Прізвище, Ім'я, По батькові, Адреса, Номер кредитної картки, Номер банківського рахунку; конструктор;
# Методи: установка значень атрибутів, отримання значень атрибутів, висновок інформації. Створити масив об'єктів даного класу.
# Вивести список покупців в алфавітному порядку і список покупців, у яких номер кредитної картки знаходиться в заданому діапазоні.

import names
from faker import Faker
fake = Faker()

import string
import random
def getRanNum(size, chars=string.digits):
  return ''.join(random.choice(chars) for _ in range(size))

class Customer:
    def __init__(self, firstName: str, secondName: str, middleName: str, address: str, creditCard: str, accNum: str):
        self.firstName = firstName
        self.secondName = secondName
        self.middleName = middleName
        self.address = address
        self.creditCard = creditCard
        self.accNum = accNum

    def __str__(self, ):
        return f"""
        ФИО: {self.firstName} {self.secondName} {self.middleName}
        Адрес: {self.address}
        Номер кредитной карты: {self.creditCard}
        Номер банковскового счета: {self.accNum}
    """

    def __getattr__(self, name: str):
        if name == 'fullName':
            return self.firstName + ' ' + self.secondName + ' ' + self.middleName

#set
    def setFirstName(self, firstName: str):
        self.firstName = firstName
    def setSecondName(self, secondName: str):
        self.firstName = secondName
    def setMiddleName(self, middleName: str):
        self.firstName = middleName
    def setAddress(self, address: str):
        self.firstName = address
    def setCreditCard(self, creditCard: str):
        self.firstName = creditCard
    def setAccNum(self, accNum: str):
        self.firstName = accNum
#get
    def getName(self):
        return self.firstName
    def getSecondName(self):
        return self.secondName
    def getMiddleName(self):
        return self.middleName
    def getAddress(self):
        return self.address
    def getCreditCard(self):
        return self.creditCard
    def getBackNum(self):
        return self.accNum

def fixPrintout(l):
    print('\033[0;37;40m Отсортированный список покупателей: ')
    print('\n'.join(map(str, l)), end='\n')

customers = []
for i in range(0, 5):
  customers.append(Customer(
    names.get_first_name(),  names.get_first_name(),  names.get_first_name(), fake.address(),
    getRanNum(16), getRanNum(8)))
#  print("Информация о покупателе: ", customers[i])
customers.sort(key=lambda customer: customer.fullName)
fixPrintout(customers)

def CardNumCheck(customer: Customer, maxNum: str):
  for i in range(0, len(customer.creditCard)):
    if int(customer.creditCard[i]) > int(maxNum[i]):
      return customer
    if int(customer.creditCard[i]) < int(maxNum[i]):
      return False
  return False

maxNum = getRanNum(16)
#print(maxNum)

print('\033[0;37;49m Список покупателей чей номер карты находится в заданном диапазоне: ')
for i in range(0, 5):
  if CardNumCheck(customers[i], maxNum) == False:
    print('-')
    pass
  else:
    print(customers[i])
