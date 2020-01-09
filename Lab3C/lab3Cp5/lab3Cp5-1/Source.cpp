/*
Автор проекту: Суптеля Владислав
Дата: 23.10.2019
1.	Обчислити корені квадратного рівняння виду ax2 2 + bx + c = 0
*/

#include <iostream>
#include <math.h>
using namespace std;
// мб переделать под функцию?
int main()
{
	double a, b, c, D, f, s;
	cout << "Enter in order: a b c . . ." << endl;
	cin >> a >> b >> c;
	cout << "a = " << a << " , " << "b = " << b << " , " << "c = " << c << endl;
	D = pow(b, 2) - 4 * a * c;
	cout << "D = " << D << endl;
	if (D > 0)
	{
		f = (-b + sqrt(D)) / 2 * a;
		s = (-b - sqrt(D)) / 2 * a;
		cout << "x1 = " << f << endl << "x2 = " << s << endl;
	}
	else if (D == 0)
	{
		cout << "x = " << -b / 2 * a;
	}
	else cout << "D < 0.";
	return 0;
}