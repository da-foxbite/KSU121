/*
Автор проекту: Суптеля Владислав
Дата: 28.10.2019
5.Змініть код для оголошення класу "Студент", закривши в ньому члени-дані.
6.Напишіть методи доступу до полів класу "Студент".
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
	void getstudentinfo()
	{
		cout << "Student:> " << endl << "Age: " << age << "\t" << "Gender: " << sex << "\t" << "Scholarship: " << scholarship << endl;
	}


	inline int getAge() { return age; };
	inline string getSex() { return sex; };
	inline float getScholarship() { return scholarship; };
	void setAge(int sage) { age = sage; };
	void setSex(string ssex) { sex = ssex; };
	void setScholarship(float sscholarship) { scholarship = sscholarship; };
	void printinfo() { cout << age << ' ' << sex << ' ' << scholarship << endl; };
};

int main()
{
	Prizovnik Suptelch;

	//Suptelch.setstudentinfo();
	//Suptelch.getstudentinfo();

	Suptelch.setAge(18); Suptelch.setSex("Male"); Suptelch.setScholarship(0);
	Suptelch.getAge(); Suptelch.getSex(); Suptelch.getScholarship();
	Suptelch.printinfo();

	system("pause");
}