/*
	Автор: Суптеля Владислав
    Дата: 4.10.2019
	12. Видайте на екран підказку для введення числа типу signed long int, використовуючи константи з бібліотеки limits. h
*/
#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	long int input;
	cout << "Наименьшее допустимое значение переменной типа signed long int: " << LONG_MIN << endl;
	cout << "Наибольшее допустимое значение переменной типа signed long int: " << LONG_MAX << endl;
	cout << "Введите своё число в диапазоне long int . . . "; // необходимо ли в случае чего указывать, что значение выходит за рамки?
	cin >> input;
	system("pause");
	return 0;
}