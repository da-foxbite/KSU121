/*
Автор проекту: Суптеля Владислав
Дата: 23.10.2019
3.	Напишіть програму, яка запитує у користувача декартові координати двох точок
( x 1 , y 1 ) і ( x 2 , y 2 ) з клавіатур і, яка обчислює і друкує відстань між ними
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	int x1, y1, x2, y2;
	cout << "Введите координаты в данном порядке: X1, Y1, X2, Y2 . . ." << endl;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << "Расстояние = " << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) << endl;
	system("pause");
	return 0;
}