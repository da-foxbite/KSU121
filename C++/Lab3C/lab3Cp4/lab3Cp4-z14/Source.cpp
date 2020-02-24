/*
Автор проекту: Суптеля Владислав
Дата: 18.10.2019
14.Напишіть if, який перевіряє дві цілі змінні і змінює більше на менше.
*/

#include <iostream>
using namespace std;

int main()
{
	int a = 1, b = 2;
	if (b > a)
	{
		a = b;
	};
	cout << a << endl;
	system("pause");
	return 0;
}