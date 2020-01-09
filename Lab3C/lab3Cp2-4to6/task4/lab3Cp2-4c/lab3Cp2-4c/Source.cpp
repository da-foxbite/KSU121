/*
	Автор проекту: Суптеля Владислав
	Дата: 30.09.2019
	4.Напишіть 3 варіанти програми для обчислення суми, різниці, твори, приватного, серед значення двох цілих чисел a і b і виведення результатів на екран:
	c) значення чисел a і b ввести з клавіатури.
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "Вычисление суммы, разности, произведения, частного." << endl;
	cout << "Ввод значений a и b . . . " << endl;
	cin >> a >> b;
	cout << (double)a + b << endl << (double)a - b << endl << (double)a * b << endl << (double)a / b << endl;
	system("pause");
	return 0;
}