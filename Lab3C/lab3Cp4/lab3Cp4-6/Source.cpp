/*
Автор проекту: Суптеля Владислав
Дата: 18.10.2019
6.Якщо середня частота ударів серця людини 1 в секунду, скільки ударів серце зробить за 78 років? (За n років?).
*/

#include <iostream>
using namespace std;

int hbeat(int years);

int hbeat(int years)
{
	int sec = 1;
	int min = sec * 60;
	int hour = min * 60;
	int day = hour * 24;
	int month = day * 30;
	int year = month * 12;
	int Lyears = years / 4;
	return (years * year) + (Lyears * day);
}

int main()
{
	int years, Lyears;
	cin >> years;
	cout << hbeat(years) << endl;
	system("pause");
	return 0;
}