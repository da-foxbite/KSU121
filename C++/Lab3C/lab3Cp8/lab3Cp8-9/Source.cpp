/*
Автор проекту: Суптеля Владислав
Дата: 01.12.2019
9. Створіть об'єкт будь-якого раніше розробленого класу ( Cat , Worker , Pencil ...) у стеку. Потім покажчик на нього. Змініть і роздрукуйте значення цього об'єкта за допомогою покажчика.
*/

#include <iostream>
#include <windows.h>
using namespace std;
typedef unsigned short USINT;

class Worker
{
public:
	int TabelNo;
	string surname;
	string sex;
	USINT age;
	float weight;
	string smoker; // со строкой мороки меньше чем с булеаном
	float TarifStavka;
	Worker(int _TabelNo = 2, string _surname = "Smith", string _sex = "Male", USINT _age = 18, float _weight = 65, string _smoker = "False", float _TarifStavka = 1200)
	{
		TabelNo = _TabelNo;
		surname = _surname;
		sex = _sex;
		age = _age;
		weight = _weight;
		smoker = _smoker;
		TarifStavka = _TarifStavka;
	};
	void getinfo()
	{
		cout << TabelNo << '\t' << surname << '\t' << sex << '\t' << age << '\t' << weight << '\t' << smoker << '\t' << TarifStavka << endl;
	}
	void setinfo(int newTabelNo, string newsurname, string newsex, USINT newage, float newweight, string newsmoker, float newTarifStavka)
	{
		TabelNo = newTabelNo;
		surname = newsurname;
		sex = newsex;
		age = newage;
		weight = newweight;
		smoker = newsmoker;
		TarifStavka = newTarifStavka;
	}
};

int main()
{
	system("color 02");
	Worker Evie;
	Worker* pWorker = &Evie;
	pWorker->setinfo(102, "Cohen", "Female", 29, 55, "False", 5600);
	pWorker->getinfo();
	return 0;
}