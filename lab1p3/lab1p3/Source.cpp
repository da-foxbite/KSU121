#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int X1, Y1, X2, Y2;
	cout << "Ввод . . . Последовтельность: X1, Y1, X2, Y2 . . ." << endl;
	cin >> X1 >> Y1 >> X2 >> Y2;
	if (abs(X1 - X2) == abs(Y1 - Y2)) cout << "Пешка 'под боем'." << endl;
	else { cout << "Пешка не 'под боем'." << endl; }
	system("pause");
	return 0;
}