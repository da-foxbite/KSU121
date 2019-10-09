/*
	Автор проекту: Суптеля Владислав
	Дата: 11.09.2019
	2.Розробити алгоритм, який перевіряє,: перетинаються дві прямі чи ні.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double X1, Y1, C1, X2, Y2, C2;
	cout << "Ввод . . . Последовательность: X,Y,C . . ." << endl;
	cin >> X1 >> Y1 >> C1 >> X2 >> Y2 >> C2;
	//cout << X1 / X2 << Y1 / Y2 << C1 / C2 << endl;
	if (X1 / X2 == Y1 / Y2 && X1 / X2 == C1 / C2 && C1 / C2 == Y1 / Y2)  cout << "Вектора коллинеарны." << endl;
	if (X1 / X2 == Y1 / Y2 && X1 / X2 != C1 / C2 && C1 / C2 != Y1 / Y2) cout << "Вектора не пересекаются." << endl;
	else { cout << "Вектора пересекаются." << endl; }
	system("pause");
	return 0;
}
