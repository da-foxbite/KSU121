/*
Автор проекту: Суптеля Владислав
Дата: 03.12.2019
9. Напишіть функцію, яка створює об'єкт будь-якого раніше розробленого класу ( Cat , Worker , Pencil ...)
у вільному пам'яті і повертає в якості результату адреса об'єкта. Перевірте її.
*/

#include <iostream>
#include <windows.h>
using namespace std;

#include "WorkerRaw.cpp"

int func();

int main()
{
	system("color 02");
	cout << func() << endl;
	return 0;
}
int func()
{
	WorkerRaw* Woke = new WorkerRaw;
	//
	if (Woke == NULL)
	{
		exit(1);
	}

	WorkerRaw& rWoke = *Woke;
	return (int)&rWoke; // адрес байта
}