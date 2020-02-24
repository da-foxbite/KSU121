/*
	Автор проекту: Суптеля Владислав
	Дата: 22.09.2019
	3.Дано три дійсні змінні a, b і c.  Скласти  алгоритм, який міняє місцями значення цих змінних наступним чином: змінна a набуває значення змінної b, змінна b набуває значення змінної c, а змінна  c – попереднє значення змінної a.
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, C, D;
	cout << "А это В, В это С, С это А." << endl;
	cin >> a >> b >> C;
	D = a;
	a = b;
	cout << "A = " << b << endl;
	b = C;
	cout << "B = " << C << endl;
	a = D; // кривое исправление?
	C = a;
	cout << "C = " << a << endl;
	system("pause");
	return 0;
}