/*
Автор проекту: Суптеля Владислав
Дата: 03.12.2019
6. Введіть з клавіатури за допомогою функції scanf () два числа ( ціле і речовий ) 
і роздрукуйте їх на екрані за допомогою функції printf (), якщо обидва числа були введені правильно.
*/

#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 0; float b = 0;
	printf("Введите целое и вещественное число (через пробел) . . .\n");
	if(scanf_s("%i %f", &a, &b) == 2)
	{
		printf_s("%i и %f", a, b);
	}
	else
	{
		cout << "Введены неккоректные данные!" << endl;
	}
	return 0;
}