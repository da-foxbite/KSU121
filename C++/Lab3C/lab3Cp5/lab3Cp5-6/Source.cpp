/*
Автор проекту: Суптеля Владислав
Дата: 23.10.2019
6.	Реалізуйте набір особистих функцій tolowerR ( ch ), toupperR ( ch ), isalphaR ( ch ), islowerR ( ch ), isupperR ( ch ), isalnumR ( ch ) для роботи з символами російського алфавіту.
*/

#include <iostream>
using namespace std;

char tolowerR(char ch)
{
	return ch - 32;
}
char toupperR(char ch)
{
	return ch + 32;
}
bool isalphaR(char ch)
{
	if ((int)ch >= 192)
		return true;
	else return false;
}
bool islowerR(char ch)
{
	if ((int)ch >= 192 && (int)ch <= 223)
		return true;
	else return false;
}
bool isuuperR(char ch)
{
	if ((int)ch >= 224 && (int)ch <=255)
		return true;
	else return false;
}
bool isalnumR(char ch)
{
	if ((int)ch >= 48 && (int)ch <= 57 || ((int)ch >= 192 && (int)ch <= 255))
		return true;
	else return false;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	cin >> x;
	cout << (char)x;
	return 0;
}