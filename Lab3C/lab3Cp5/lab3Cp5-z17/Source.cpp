/*
Автор проекту: Суптеля Владислав
Дата: 23.10.2019
17.	Напишіть функцію для складання двох чисел, що має одне значення за замовчуванням.
*/

#include <iostream>
using namespace std;

int summ(int b)
{
	int a = 2;
	return a + b;
}
int main()
{
	int b;
	cin >> b;
	cout << summ(b);
	return 0;
}