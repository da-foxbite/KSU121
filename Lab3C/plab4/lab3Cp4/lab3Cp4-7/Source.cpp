/*
Автор проекту: Суптеля Владислав
Дата: 18.10.2019
7.Запишіть правильно математичні вирази на С ++
*/

#include <iostream>
// #include <math.h>
using namespace std;

int main() 
{
	double b, x, y, z;
	cin >> x >> y >> z;
	b = x + (pow(y, 3) / x + pow(y, 3) / x + pow(y, 3));
	cout << b << endl;
	b = (y - x) * (y - (z / y - x) / 1 + pow(y - x, 2));
	cout << b << endl;
}