/*
Автор проекту: Суптеля Владислав
Дата: 23.10.2019
8.	Напишіть прототип функції з ім'ям Perimeter (), яка повертає беззнакове довге ціле і приймає два параметри типу int.
9.	Напишіть визначення функції Perimeter (), яка обчислює периметр прямокутника.
*/

#include <iostream>
using namespace std;

unsigned long int Perimeter(int a, int b);

int main()
{
	int a; int b;
	cin >> a >> b;
	cout << Perimeter(a,b);
	return 0;
}

unsigned long int Perimeter(int a, int b)
{
	return 2 * (a + b);
}