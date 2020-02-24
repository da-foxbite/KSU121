/*
Автор проекту: Суптеля Владислав
Дата: 01.12.2019
10. Створіть об'єкт будь-якого раніше розробленого класу ( Cat , Worker , Pencil ...) у вільній пам'яті. Змініть і роздрукуйте значення цього об'єкта за допомогою покажчика.
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
	Worker* Evie = new Worker{101, "Smith", "Male", 18, 65, "False", 1200};
	Evie->getinfo();

	Evie->setinfo(102, "Cohen", "Female", 29, 55, "False", 5600);
	Evie->getinfo();

	return 0;
}