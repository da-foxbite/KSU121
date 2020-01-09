/*
Автор проекту: Суптеля Владислав
Дата: 02.12.2019
4. Напишіть двома способами :
прототип функції для обчислення квадрата, куба і зворотного значення дійсного числа ;
реалізацію цієї функції ;
драйвер для її перевірки.
*/

#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

double scnddegree(double);
double thrddegree(double);
double reciprocal(double);

float& scnddegree(float);
float& thrddegree(float);
float& reciprocal(float);

int main()
{
	system("color 02");
	double reel;
	cout << "Enter the number: " << endl;
	cin >> reel;

	cout << "1st method: " << endl;
	cout << scnddegree(double(reel)) << endl;
	cout << thrddegree(double(reel)) << endl;
	cout << reciprocal(double(reel)) << '\n' << endl;
	cout << "2nd method: " << endl;
	cout << scnddegree(float(reel)) << endl;
	cout << thrddegree(float(reel)) << endl;
	cout << reciprocal(float(reel)) << endl;
}
// 1st method
double scnddegree(double r)
{
	return pow(r, 2);
}
double thrddegree(double r)
{
	return pow(r, 3);
}
double reciprocal(double r)
{
	return pow(r, -1);
}
// 2
float& scnddegree(float r)
{
	float scnddegreeRes = pow(r, 2);
	return scnddegreeRes;
}
float& thrddegree(float r)
{
	float thrddegreeRes = pow(r, 3);
	return thrddegreeRes;
}
float& reciprocal(float r)
{
	float reciprocalRes = pow(r, -1);
	return reciprocalRes;
}

