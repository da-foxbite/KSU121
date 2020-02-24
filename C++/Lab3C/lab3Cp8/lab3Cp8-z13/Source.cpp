/*
Автор проекту: Суптеля Владислав
Дата: 01.12.2019
13. Перетворіть раніше розроблений клас ( Cat , Worker , Pencil ...) в клас з динамічним виділенням пам'яті.
*/

#include <iostream>
#include <windows.h>
using namespace std;
typedef unsigned short USINT;

class Employee
{
public:
	USINT* age;
	USINT* service;
	float* salary;
	Employee(USINT _age = 18, USINT _service = 0, float _salary = 0)
	{
		age = new USINT(_age);
		service = new USINT (_service);
		salary = new float (_salary);
	};
	//очистка памяти деструктором
	~Employee()
	{
		delete age;
		delete service;
		delete salary;
	}
	void getinfo()
	{
		cout << "Employee's age is " << *age << endl;
		cout << "He's been working here for " << *service << " year(s)" << endl;
		cout << "His salary is " << *salary << '\n' << endl;
	};
};

int main()
{
	system("color 02");
	Employee Recruit;
	Recruit.getinfo();
	return 0;
}