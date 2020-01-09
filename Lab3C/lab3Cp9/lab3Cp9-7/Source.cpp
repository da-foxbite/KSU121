/*
Автор проекту: Суптеля Владислав
Дата: 03.12.2019
7. Напишіть три варіанти функції, яка приймає параметром об'єкт будь-якого раніше розробленого класу ( Cat , Worker , Pencil ...) 
і повертає в якості результату змінений об'єкт. Перевірте їх.
*/

#include <iostream>
#include <windows.h>
using namespace std;

#include "WorkerRaw.cpp"

WorkerRaw func(WorkerRaw a);
WorkerRaw& func2(WorkerRaw a);
WorkerRaw* func3(WorkerRaw& a);

int main()
{
	system("color 02");
	WorkerRaw v;
	WorkerRaw seq; 
	WorkerRaw seq2; 
	//
	WorkerRaw* seq3 = new WorkerRaw;
	if (seq3 == NULL)
	{
		exit(1);
	}

	seq = func(v);
	seq2 = func2(v);
	seq3 = func3(v);
	cout << seq.service << endl;
	cout << seq2.age << endl;
	cout << (*seq3).salary << endl;

	return 0;
}

WorkerRaw func(WorkerRaw a)
{
	a.service = 27;
	a.salary = 54000;
	a.age = 54;
	return a;
}
WorkerRaw& func2(WorkerRaw a)
{
	a.service = 54;
	a.salary = 300000;
	a.age = 69;
	return a;
}
WorkerRaw* func3(WorkerRaw& a)
{
	a.service = 99;
	a.salary = 420000;
	a.age = 228;
	WorkerRaw* b = &a;
	return b;
}