/*
Автор проекту: Суптеля Владислав
Дата: 18.10.2019
8.Яким   буде результат?
	char ch = 'л';
	cout << "ch =" << ch << "int =" << (int) ch;
*/

#include <iostream>
using namespace std;

int main() 
{
	setlocale(LC_ALL, "RUSSIAN");
	char ch = 'л';
	cout << "ch =" << ch << "int =" << (int)ch; // ch = л int = -21
	system("pause");
	return 0;
}