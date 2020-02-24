/*
Автор проекту: Суптеля Владислав
Дата: 01.12.2019
8.Створіть об'єкт цілого типу в стеці. Потім покажчик на нього. Змініть і роздрукуйте значення цього об'єкта за допомогою покажчика.
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	system("color 02");
	int num = 1;
	int* pNum = &num;
	*pNum = 2;
	cout << "*pNum = " << *pNum << " , num = " << num << endl;
	return 0;
}