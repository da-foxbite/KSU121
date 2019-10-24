/*
Автор проекту: Суптеля Владислав
Дата: 23.10.2019
5.	Введіть з клавіатури число в буфер програми - рядок С-стилю. Перетворіть рядок в ціле, довге ціле і дійсне. Виведіть ці числа на екран.
*/

#include <iostream>
using namespace std;

int main()
{
	char line[100];
	cin >> line;
	cout << "char to int = " << atoi(line) << "\t" << "char to long = " << atol(line) << "\t" << "char to float = " << atof(line);
	return 0;
}