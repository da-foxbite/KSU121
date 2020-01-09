/*
Автор проекту: Суптеля Владислав
Дата: 02.12.2019
12.Напишіть програму, яка створює витік пам'яті. Збільшіть швидкість витоку пам'яті за допомогою створення об'єктів будь-якого раніше розробленого класу ( Cat , Worker , Pencil ...) . Поясніть як це виправити.
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
    while (true) new Worker; //забил три гигабута памяти за несколько секунд
	return 0;
}