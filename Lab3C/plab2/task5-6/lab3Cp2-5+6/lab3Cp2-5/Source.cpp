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