/*
Автор проекту: Суптеля Владислав
Дата: 05.11.2019
4. Напишіть програму для введення числа із заданого діапазону з клавіатури. У разі виходу за кордон діапазону повторіть введення числа.
*/
#include <iostream>
using namespace std;

int main()
{
	int reach;
	do
	{
		cout << "Enter any number between 0 and 65535 . . ." << endl;
		cin >> reach;
	} while (reach > 0 && reach < 65535);
	system("pause");
	return 0;
}