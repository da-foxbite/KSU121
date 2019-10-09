/*
Автор проекту: Суптеля Владислав
Дата: 4.10.2019
4.Змініть програму 3. так, щоб в ній оброблялися відомості про двох співробітників.
5.Напишіть функцію з параметрами для роздруківки відомостей про співробітника на екрані. Викличте її для кожного із співробітників.
*/
#include <iostream>
#include <string>
using namespace std;

struct Slave
{
	int TabelNo;
	string surname;
	string sex;
	int age;
	int weight;
	string smoker; // bool надоел
	int TarifStavka;
};

void PrintInfo(Slave s)
{
	cout << "Табельный Номер - №" << s.TabelNo << endl << "Фамилия - " << s.surname << endl << "Пол - " << s.sex << endl << "Возраст - " << s.age << endl << "Вес - " << s.weight << endl << "Курильщик - " << s.smoker << endl << "Оклад - " << s.TarifStavka << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	Slave nibba1;
	nibba1.TabelNo = 22814880;
	nibba1.surname = "Жмышенко";
	nibba1.sex = "Мужской";
	nibba1.age = 54;
	nibba1.weight = 96;
	nibba1.smoker = "Да";
	nibba1.TarifStavka = 54000;
	Slave nibba2;
	nibba2.TabelNo = 13371488;
	nibba2.surname = "Сухач";
	nibba2.sex = "Мужской";
	nibba2.age = 30;
	nibba2.weight = 69;
	nibba2.smoker = "Да";
	nibba2.TarifStavka = 27000;

	PrintInfo(nibba1);
	cout << endl;
	PrintInfo(nibba2);
	cout << endl;
	system("pause");
	return 0;
}