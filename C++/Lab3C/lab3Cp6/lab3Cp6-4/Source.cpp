/*
Автор проекту: Суптеля Владислав
Дата: 28.10.2019
4.Напишіть кілька конструкторів і деструктор для класу "Студент".
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
	Prizovnik()
	{
		age = 19;
		sex = "Male";
		scholarship = 1550;
	}
	Prizovnik(USINT sage, string ssex, float sscholarship)
	{
		age = sage;
		sex = ssex;
		scholarship = sscholarship;
	}
	~Prizovnik()
	{
		cout << "Obj. <<Prizovnik>> -> removed.";
	}
};


int main()
{
	USINT sage; string ssex; float sscholarship;
	cin >> sage >> ssex >> sscholarship;
	Prizovnik Arthur;
	Prizovnik Chobulda(sage, ssex, sscholarship);
	cout << "Age: " << Arthur.age << "\t" << "Gender : " << Arthur.sex << "\t" <<  "Scholarship: " << Arthur.scholarship << endl;
	cout << "Age: " << Chobulda.age << "\t" << "Gender : " << Chobulda.sex << "\t" << "Scholarship: " << Chobulda.scholarship << endl;
	system("pause");
	return 0;
}