/*
	Автор проекту: Суптеля Владислав
	Дата: 22.09.2019
	4.Скласти алгоритм, який обчислює останню цифру числа an (a – дійсне число, n – натуральне число).
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, n, X;
	cout << "Алгоритм, отображающий последнюю цифру числа a^n" << endl;
	cin >> a >> n;
	X = pow(a, n);
	cout << "Результат = " << X % 10 << endl;
	system("pause");
	return 0;
}