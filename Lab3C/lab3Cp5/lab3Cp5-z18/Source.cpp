/*
Автор проекту: Суптеля Владислав
Дата: 23.10.2019
18.	Напишіть три перевантажені функції з двома параметрами різних типів, які повертають істину, якщо значення параметрів рівні.
*/

#include <iostream>
using namespace std;

bool eq(int a, int b)
{
	if (a == b)
		return true;
	else return false;
}
bool eq(float a, float b)
{
	if (a == b)
		return true;
	else return false;
}
bool eq(string a, string b)
{
	if (a == b)
		return true;
	else return false;
}
int main()
{
	int a1, b1; float a2, b2; string a3, b3;
	cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
	if (eq(a1, b1))
		cout << "Da. ";
	if (eq(a2, b2))
		cout << "Da v kvadrate. ";
	if (eq(a3, b3))
		cout << "Da v kube. ";
	return 0;
}