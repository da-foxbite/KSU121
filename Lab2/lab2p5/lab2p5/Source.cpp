#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a11, a12, b1, a21, a22, b2;
	cout << "Порядок ввода: a11, a12, b1, a21, a22, b2 . . ." << endl;
	cin >> a11 >> a12 >> b1 >> a21 >> a22 >> b2;
	double dead, dead1, dead2;
	dead = a11 * a22 - a12 * a21;
	dead1 = b1 * a22 - b2 * a21;
	dead2 = a11 * b2 - a12 * b1;
	double x = dead1 / dead, y = dead2 / dead;
	cout << x << endl << y << endl;
	// "-0??"
	system("pause");
	return 0;
}