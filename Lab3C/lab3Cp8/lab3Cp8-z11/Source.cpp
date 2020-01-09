/*
Автор проекту: Суптеля Владислав
Дата: 01.12.2019
11. Напишіть програму, яка створює висячий покажчик на об'єкт будь-якого раніше розробленого класу ( Cat , Worker , Pencil ...) . Поясніть як її виправити.
*/

#include <iostream>
#include <windows.h>
using namespace std;
typedef unsigned short USINT;

class Employee
{
public:
	USINT age;
	USINT service;
	float salary;
	Employee(USINT _age = 18, USINT _service = 0, float _salary = 0)
	{
		age = _age;
		service = _service;
		salary = _salary;
	};
	void getinfo()
	{
		cout << "Employee's age is " << age << endl;
		cout << "He's been working here for " << service << " year(s)" << endl;
		cout << "His salary is " << salary << '\n' << endl;
	};
};

int main()
{
	system("color 02");

	Employee* Recruit = new Employee();
	Recruit->getinfo();
	delete Recruit; // dangling ptr
	// Recruit->getinfo(); 
	return 0;
}