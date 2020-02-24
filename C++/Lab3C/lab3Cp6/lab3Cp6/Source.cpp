/*
Автор проекту: Суптеля Владислав
Дата: 28.10.2019
1.Напишіть код для оголошення класу "Студент" з такими відкритими членами-даними: вік, стать, стипендія.
*/
#include <iostream>
using namespace std;
typedef unsigned int USINT;

class Prizovnik
{
public:
	USINT age;
	string sex;
	float scholarship;
};
int main()
{
	Prizovnik std1, std2;
	std1.age = 19;
	std1.sex = "Male";
	std1.scholarship = 1300;
	std2.age = 20;
	std2.sex = "Male";
	std2.scholarship = 1550;
	Prizovnik std[2] = { std1, std2 };
	cout << "Age" << "\t" << "Gender" << "\t" << "Scholarship" << endl;
	for (int i = 0; i < 2; i++)
		cout << std[i].age << "\t" << std[i].sex << "\t" << std[i].scholarship << endl;
	system("pause");
	return 0;
}