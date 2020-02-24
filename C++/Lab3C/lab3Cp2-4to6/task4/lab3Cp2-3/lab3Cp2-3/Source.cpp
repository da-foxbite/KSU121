/*
	Автор проекту: Суптеля Владислав
	Дата: 30.09.2019
	4.Напишіть 3 варіанти програми для обчислення суми, різниці, твори, приватного, серед значення двох цілих чисел a і b і виведення результатів на екран:
    a) числа a і b проініціалізувати;
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 2, b = 3;
	cout << (double)a + b << endl << (double)a - b << endl << (double)a * b << endl << (double)a / b << endl;
	system("pause");
	return 0;
}