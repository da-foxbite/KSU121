/*
Автор проекту: Суптеля Владислав
Дата: 17.10.2019
3.Переведіть відстань, заданий в км., В милі. (1 миля = 1609 м.)
*/

#include <iostream>
using namespace std;

float kmToM(float km);

int main()
{
	cout << kmToM(1.6) << endl;
	system("pause");
	return 0;
}
float kmToM(float km)
{
	return km * 1. / 1.609;
}