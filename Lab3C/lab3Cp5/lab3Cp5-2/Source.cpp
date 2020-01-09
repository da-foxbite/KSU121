/*
Автор проекту: Суптеля Владислав
Дата: 23.10.2019
2.	Обчислити третю сторону трикутника, якщо відомі дві інші і кут між ними в градусах
*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

using namespace std;

double thirdSide(double, double, double);

int main() {
	cout << thirdSide(3, 5, 45);
	return 0;
}
double thirdSide(double firstSide, double secondSide, double angleDegr)
{
	double angleRad = angleDegr * (M_PI/180);
	return pow(firstSide, 2) + pow(secondSide, 2) - 2 * firstSide * secondSide * cos(angleRad);
}