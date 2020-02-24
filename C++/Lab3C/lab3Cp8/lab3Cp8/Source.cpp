/*
Автор проекту: Суптеля Владислав
Дата: 26.11.2019
1.Що роблять такі оголошення? a ) int * pOne ; b ) int vTwo ; c ) int * pTree = & vTwo ;
2.Якщо у вас є змінна типу unsigned short int з ім'ям yourAge, як оголосити покажчик, щоб мати до неї доступ.
3.Надайте значення 50 змінної yourAge з п.2.
*/

// int * pOne -> объявление указателя
// int vTwo -> объявление переменной
// int * pTree = &vTwo -> объявляем указатель на переменную vTwo

#include <iostream>
#include <windows.h>
using namespace std;
typedef unsigned short USINT;

int main()
{
	system("color 02");
	USINT yourAge = 50;
	USINT* p = &yourAge;
	cout << "(Value: " << *p << ")" << endl;
	cout << "Adress: " << p << endl;
	return 0;
}