/*
Автор проекту: Суптеля Владислав
Дата: 23.10.2019
4.	Напишіть програму, яка визначить більше з трьох випадкових чисел.
*/

#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int randomizer[3];
	for (int i = 0; i < 3; i++)
	{
		randomizer[i] = rand() % 100;
		cout << randomizer[i] << " ";
	} // %100 - правый предел
	cout << endl;
	int max = randomizer[0];
	for (int i = 1; i < 3; i++)
		if (randomizer[i] > max) max = randomizer[i];
	cout << max << endl;
	system("pause");
	return 0;
}