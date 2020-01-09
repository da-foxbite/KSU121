/*
Автор проекту: Суптеля Владислав
Дата: 28.10.2019
3.Розробіть методи класу, що дозволяють виконувати введення / виведення всіх членів-даних класу "Студент" та перевірте їх в головній програмі.
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
	void getinfo()
	{
		cin >> age >> sex >> scholarship;
	}
	void printinfo()
	{
		cout << "Age: " << age << "\t" << "Gender: " << sex << "\t" << "Scholarship: " << scholarship << endl;
	}
};
int main()
{
	Prizovnik Viktor;
	Prizovnik Oleg;
	Viktor.getinfo();
	Viktor.printinfo();
	Oleg.getinfo();
	Oleg.printinfo();
	system("pause");
	return 0;
}