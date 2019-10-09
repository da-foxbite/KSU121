/*
	Автор проекту: Суптеля Владислав
	Дата: 22.09.2019
	2.Дано дві дійсні змінні a, b.  Скласти  алгоритм, який міняє місцями значення цих змінних (нове значення a дорівнює старому значенню b і навпаки).
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, C;
	cout << "А это В, а В это А." << endl;
	cin >> a >> b;
	C = a;
	a = b;
	cout << "A = " << b << endl;
	b = C;
	cout << "B = " << C << endl;
	system("pause");
	return 0;
}