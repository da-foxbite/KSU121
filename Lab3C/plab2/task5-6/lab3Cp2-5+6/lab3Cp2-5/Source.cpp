/*
	Автор проекту: Суптеля Владислав
	Дата: 30.09.2019
	5.Напишіть прототип функції для виведення відомостей про автора програми, мовою програмування, типі комп'ютера і ОС. Напишіть її реалізацію. Викличте її з головної функції.
*/
#include <iostream>
using namespace std;
void PrintInfo();
int main()
{
	setlocale(LC_ALL, "Russian");
	PrintInfo();
	system("pause");
	return 0;
}
void PrintInfo()
{
	cout <<"Автор: Суптеля Владислав "<< endl;
	cout <<"Язык програмирования: C++ "<< endl;
	cout <<"Тип ПК: ноутбук "<< endl;
	cout <<"ОС: Win 10 Pro (x64) "<< endl;
}