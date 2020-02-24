/*
Автор проекту: Суптеля Владислав
Дата: 28.10.2019
7.Напишіть програму, в якій створюються два об'єкти типу "Студент".
Встановіть їх вік, стать і стипендію за допомогою методів доступу.
Роздрукуйте значення окремих членів-даних об'єктів на екрані, використовуючи методи доступу.
Визначте і роздрукуйте середній вік і сумарну стипендію цих двох студентів.
*/
#include <iostream>
using namespace std;
typedef unsigned int USINT;

class Prizovnik
{
private:
	USINT age;
	string sex;
	float scholarship;
public:
	void setstudentinfo()
	{
		cin >> age >> sex >> scholarship;
	}
	USINT getage()
	{
		return age;
	}
	string getsex()
	{
		return sex;
	}
	float getscholarship()
	{
		return scholarship;
	}
	void printstudentinfo()
	{
		cout << getage() << "\t" << getsex() << "\t" << getscholarship() << endl;
	}
};

float smage(Prizovnik stud1, Prizovnik stud2)
{
	int sum = 0;
	sum += stud1.getage();
	sum += stud2.getage();
	return (float)sum / 2;
}
float ssch(Prizovnik stud1, Prizovnik stud2)
{
	float sum = 0;
	sum += stud1.getscholarship();
	sum += stud2.getscholarship();
	return sum;
}

int main()
{
	Prizovnik stud1, stud2;
	stud1.setstudentinfo();
	stud2.setstudentinfo();
	stud1.printstudentinfo();
	stud2.printstudentinfo();
	cout << "Average age: " << smage(stud1, stud2) << endl;
	cout << "Total scholarship: " << ssch(stud1, stud2) << endl;
	system("pause");
}