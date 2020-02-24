/*
	Автор проекту: Суптеля Владислав
	Дата: 30.09.2019
	6.Напишіть прототип функції для обчислення середньої зарплати трьох осіб. Напишіть її реалізацію. Викличте її з головної функції.
*/
#include <iostream>
using namespace std;

void qn(int first, int second, int third)
{
	double king = (first + second + third) / 3.0;
	cout << king;
}
int main()
{
	qn(200, 250, 476);
	return 0;
}