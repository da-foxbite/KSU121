/*
Автор проекту: Суптеля Владислав
Дата: 18.10.2019
17.Напишіть функцію, яка повертає менше з двох чисел і з її допомогою визначте менше з 5 чисел.
*/

#include <iostream>
using namespace std;

int twolesser(int, int);
int fivelesser(int, int, int, int, int);

int twolesser(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int fivelesser(int a[])
{
	int minNo = a[0];
	for (int i = 1; i < 5; i++)
		if (a[i] == twolesser(a[i],minNo)) minNo = a[i];
	return minNo;
}

int main()
{
	int a[5];
	for (int i = 0; i < 5; i++)
		cin >> a[i];
	cout << fivelesser(a);
	system("pause");
	return 0;
}