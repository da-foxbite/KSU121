/*
Автор проекту: Суптеля Владислав
Дата: 02.12.2019
5. Напишіть двома способами :
прототип функції для обчислення довжини кола, площі кола і обсягу кулі, якщо відомий радіус ;
реалізацію цієї функції ;
драйвер для її перевірки.
*/

#include <iostream>
#include <windows.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

double circumfer(double);
double circlearea(double);
double spherevolume(double);

float& circumfer(float);
float& circlearea(float);
float& spherevolume(float);

int main()
{
	system("color 02");
	unsigned int radius;
	cout << "Enter the radius' value: " << endl;
	cin >> radius;

	cout << "1st method: " << endl;
	cout << circumfer(double(radius)) << endl;
	cout << circlearea(double(radius)) << endl;
	cout << spherevolume(double(radius)) << '\n' << endl;
	cout << "2nd method: " << endl;
	cout << circumfer(float(radius)) << endl; 
	cout << circlearea(float(radius)) << endl; 
	cout << spherevolume(float(radius)) << endl;
}
// 1st method
double circumfer(double r)
{
	return 2*(M_PI*r);
}
double circlearea(double r)
{
	return M_PI*r;
}
double spherevolume(double r)
{
	return (4/3)*(M_PI*pow(r,3));
}
// 2
float& circumfer(float r)
{
	float circumferRes = 2 * (M_PI * r);
	return circumferRes;
}
float& circlearea(float r)
{
	float circleareaRes = M_PI * r;
	return circleareaRes;
}
float& spherevolume(float r)
{
	float spherevolumeRes = (4 / 3) * (M_PI * pow(r, 3));
	return spherevolumeRes;
}


//3
/* void circunfer(double& r)
{
	r = 2 * (M_PI * r);
} */