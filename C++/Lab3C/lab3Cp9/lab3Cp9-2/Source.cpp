/*
Автор проекту: Суптеля Владислав
Дата: 02.12.2019
2. Створіть об'єкт будь-якого раніше розробленого класу ( Cat , Worker , Pencil ...) в стеку. Потім посилання і покажчик на нього. Змініть і роздрукуйте значення цього об'єкта за допомогою покажчика та посилання.
*/

#include <iostream>
#include <windows.h>
using namespace std;

#include "WorkerRaw.h"
int main()
{
	system("color 02");
	setlocale(LC_ALL, "Rus");
	WorkerRaw SteveWhois; // объект в стеке
	WorkerRaw *pSteveWhois = &SteveWhois; // указатель
	WorkerRaw &rSteveWhois = *pSteveWhois; // ссылка
	// изменение значений
	(*pSteveWhois).service = 54;
	rSteveWhois.salary = 300000;
	cout << "Зарплата: " << (*pSteveWhois).salary << '\t' << "Опыт работы: " << rSteveWhois.service << endl;
	return 0;
}
