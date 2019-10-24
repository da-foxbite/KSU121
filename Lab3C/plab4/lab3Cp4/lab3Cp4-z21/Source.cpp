/*
Автор проекту: Суптеля Владислав
Дата: 18.10.2019
21.Виконайте ділення двох речових, якщо дільник НЕ 0.
*/

#include <iostream>
using namespace std;

int divon(double, double);

int main()
{
	cout << "0 = Error." << endl << divon(20, 4);
	return 0;
}

int divon(double a, double b)
{
	double result = 0;
	if (b != 0)
		result = a/b;
	return result;
}