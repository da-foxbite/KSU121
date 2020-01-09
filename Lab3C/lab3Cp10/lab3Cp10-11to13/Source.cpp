/*
Автор проекту: Суптеля Владислав
Дата: 04.12.2019
11.Змініть клас Circle так, щоб itsX , itsY , itsRadius створювалися в вільної пам'яті. Відкоректуйте конструктори, деструкція і методи цього класу.
12.Напишіть конструктор копіювання для класу Circle.
13.Розробіть оператор = для класу Circle.
*/

#include <iostream>
#include <windows.h>

using namespace std;

#include "Circle.h"
int main()
{
	system("color 02");
	setlocale(LC_ALL, "ru");

	Circle cr1(10, 10, 15);
	Circle cr2(cr1);
	cout << (cr2).getX() << ' ' << (cr2).getY() << ' ' << (cr2).getRadius() << endl;
	cout << "Конструктор копирования сработал."  << '\n' << endl;

	Circle c1; // 20, 20, 100
	Circle c2(35, 35, 120); // конструктор копирования?

	c1 = c2;
	cout << c1.getX() << ' ' << c1.getY() << ' ' << c1.getRadius() << endl;
	cout << "Оператор присвоения сработал." << endl;

	return 0;
}