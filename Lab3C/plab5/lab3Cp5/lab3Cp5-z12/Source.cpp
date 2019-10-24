/*
Автор проекту: Суптеля Владислав
Дата: 23.10.2019
(12ое скипнуть)
13.	Напишіть і перевірте функцію, що повертає істину, якщо з клавіатури введені символи 'Y', 'y', 'д', 'Д' і брехня в іншому випадку.
Y,y,d,D
*/

#include <iostream>
using namespace std;

bool checksm(char a)
{
	if (a == 'Y' || a == 'y' || a == 'd' || a == 'D')
		return true;
	else return false;
}

int main()
{
	char a;
	cin >> a;
	if (checksm(a))
		cout << "True";
	else cout << "False";
	return 0;
}