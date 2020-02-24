/*
	Автор проекту: Суптеля Владислав
	Дата: 22.09.2019
	1.Скласти алгоритм, який за довжиною, шириною і висотою кімнати знаходить площу і об’єм цієї кімнати.
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y, z;
	cout << "Алгоритм, который находит площадь и объём комнаты по трём измерениям." << endl;
	cin >> x >> y >> z;
	double S = x*y;
	double V = S*z;
	cout << "Площадь " << S << endl << "Объём " << V << endl;
	system("pause");
	return 0;
}