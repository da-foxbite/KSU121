/*
Автор проекту: Суптеля Владислав
Дата: 23.10.2019
11.	Напишіть функцію, яка повертає частку від ділення двох цілих чисел. Якщо друге число 0, то розподіл не виконуйте і поверніть -1.
*/
#include <iostream>
using namespace std;

int divch(int a, int b)
{
	if (b == 0)
		return -1;
	else
		return a % b;
}

int main()
{
	int x, y;
	cin >> x >> y;
	cout << divch(x, y);
	return 0;
}