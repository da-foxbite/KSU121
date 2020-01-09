/*
Автор проекту: Суптеля Владислав
Дата: 02.12.2019
3.Створіть об'єкт будь-якого раніше розробленого класу ( Cat , Worker , Pencil ...) у вільній пам'яті. Потім посилання і покажчик на нього. Змініть і роздрукуйте значення цього об'єкта за допомогою покажчика та посилання.
*/

#include <iostream>
#include <windows.h>
using namespace std;

#include "WorkerRaw.cpp"
int main()
{
	system("color 02");
	setlocale(LC_ALL, "Rus");
	WorkerRaw* pSteve = new WorkerRaw;
	WorkerRaw& rSteve = *pSteve;
	//
	if (pSteve == NULL) {
		exit(1);
	}

	(*pSteve).salary = 54000;
	rSteve.service = 27;
	cout << "Зарплата: " << (*pSteve).salary << '\t' << "Опыт работы: " << rSteve.service << endl;
	return 0;
}