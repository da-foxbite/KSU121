#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() //dunno wut i'm even doin' here
{
	setlocale(LC_ALL, "Russian"); //чисто ради строчки в cmd
	int X1, X2, X3, Y1, Y2, Y3;
	cout << "Алгоритм, который находит площадь и периметр треугольника по координатам его вершин" << endl;
	cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3;
		double A1 = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));
		double A2 = sqrt(pow((X2 - X3), 2) + pow((Y2 - Y3), 2));
		double A3 = sqrt(pow((X1 - X3), 2) + pow((Y1 - Y3), 2));
		double P = A1 + A2 + A3;
		double p = P/2;
		double S = sqrt(p*(p-A1)*(p-A2)*(p-A3));
		cout << "Периметр " <<P<<endl<< "Площадь " <<S<<endl; 
		system("pause");
		return 0;
}