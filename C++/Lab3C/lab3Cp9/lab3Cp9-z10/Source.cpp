/*
Автор проекту: Суптеля Владислав
Дата: 03.12.2019
10.Створіть у вільній пам'яті три об'єкти різних типів ( Cat , Worker , Pencil ...) . Замініть покажчики посиланнями і виконайте обробку цих об'єктів. 
Звільніть вільну пам'яті, застосовуючи покажчики.
*/

#include <iostream>
#include <windows.h>
using namespace std;

#include "WorkerRaw.cpp"
#include "Student.cpp"
#include "Pencil.cpp"

int main()
{
	system("color 02");
	WorkerRaw* Wamai = new WorkerRaw;
	Student* Vlad = new Student;
	Pencil* Sharpy = new Pencil;
	//
	if (Wamai == NULL || Vlad == NULL || Sharpy == NULL) {
		exit(1);
	}

	WorkerRaw& refWamai = *Wamai;
	Student& refVlad = *Vlad;
	Pencil& refSharpy = *Sharpy;

	refWamai.age = 28; refWamai.service = 11; refWamai.salary = 1000000;
	refVlad.age = 18; refVlad.schoolarship = 0; refVlad.gender = 'M';
	refSharpy.price = 20; refSharpy.lenght = 30; strcpy_s(refSharpy.color, "Black");

	cout << "class Worker, Wamai:  " << Wamai->age << '\t' << Wamai->service << '\t' << Wamai->salary << endl;
	cout << "class Student, Vlad:  " << Vlad->age << '\t' << Vlad->schoolarship << '\t' << Vlad->gender << endl;
	cout << "class Pencil, Sharpy: " << Sharpy->price << '\t' << Sharpy->lenght << '\t' << Sharpy->color << endl;

	delete Wamai; Wamai = 0;
	delete Vlad; Vlad = 0;
	delete Sharpy; Sharpy = 0;
	return 0;
}