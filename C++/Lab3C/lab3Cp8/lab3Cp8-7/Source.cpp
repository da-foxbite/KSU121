/*
Автор проекту: Суптеля Владислав
Дата: 01.12.2019
7. Напишіть програму, в якій створюються два об'єкти типу Employee у вільній пам'яті; встановіть їх вік, число опрацьованих років і зарплату; роздрукуйте їх значення.
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
	Employee* Recruit = new Employee{19, 1, 4500}; //  надо ли делать второй объёкт?
	Recruit->getinfo(); // при использовании указателей заменяем "." на "->"?
	delete Recruit; // утечки не
	Recruit = 0;    // будет?

	Employee* RecruitB = new Employee{ 18, 0, 3200 }; // второй объёкт
	RecruitB->getinfo();
	delete RecruitB;
	RecruitB = 0;
	return 0;
}