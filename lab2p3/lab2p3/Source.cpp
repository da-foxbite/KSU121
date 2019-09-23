#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, C, D;
	cout << "А это В, В это С, С это А." << endl;
	cin >> a >> b >> C;
	D = a;
	a = b;
	cout << "A = " << b << endl;
	b = C;
	cout << "B = " << C << endl;
	a = D; // кривое исправление?
	C = a;
	cout << "C = " << a << endl;
	system("pause");
	return 0;
}