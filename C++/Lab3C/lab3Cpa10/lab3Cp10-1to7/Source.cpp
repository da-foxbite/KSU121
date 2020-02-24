/*
Автор проекту: Суптеля Владислав
Дата: 04.12.2019
1.Напишіть оголошення закритого класу Circle з наступними змінними-членами : координати центру і радіус ( itsX , itsY , itsRadius ) . 
Включіть в клас конструктор за замовчуванням, деструкція і методи доступу.

2.Напишіть реалізацію конструктора за замовчуванням, ініціалізувавши itsRadius числом 20, а X і Y - числом 100.

3.Додайте другий конструктор, який приймає координати центру і радіус як параметри і ініціалізує itsX , itsY , itsRadius. 
Причому радіус може мати значення за замовчуванням рівне 20.

4.Додайте третій конструктор, який вводить координати центру і радіус з клавіатури або 
зчитує їх із заздалегідь підготовленого текстового файлу на магнітному диску і привласнює значення itsX , itsY , itsRadius.

5.Напишіть конструктор копіювання для класу Circle, який буде нам повідомляти про своє виконання.

6.Напишіть перевантажені методи для обчислення довжини кола, площі кола і обсягу кулі як для об'єкта з радіусом itsRadius, так і для довільного радіуса.
*/

#include <iostream>
#include <windows.h>
#include <math.h>
#define _USE_MATH_DEFINES

using namespace std;

#include "Circle.h"


int main()
{
	system("color 02");
	setlocale(LC_ALL, "Rus");

	Circle cr1(3, 4, 5);
	Circle cr2(cr1);
	cout << (cr2).getX() << endl;
	cout << "Конструктор копирования сработал." << endl;

	Circle circle1;
	circle1.printCSVtoConsole();
	cout << "Сработал 1й конструктор." << endl;
	Circle circle2(20, 20);
	cout << "Сработал 2й конструктор." << endl;
	circle2.printCSVtoConsole();
	Circle circle3(false);
	circle3.printCSVtoConsole();
	cout << "Сработал 3й конструктор." << endl;
	Circle* circle4 = new Circle("Circle.txt");
	circle4->printCSVtoConsole();
	cout << "Сработал 4й конструктор." << endl;

	delete circle4;
	circle4 = 0;

	return 0;
}