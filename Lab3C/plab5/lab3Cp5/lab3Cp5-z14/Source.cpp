/*
Автор проекту: Суптеля Владислав
Дата: 23.10.2019
14.	Напишіть і перевірте inline - функцію, яка повертає числове значення переданого їй символу.
*/

#include <iostream>
using namespace std;

inline int chtoi(char a)
{
	return (int)a;
}

int main()
{
	char a;
	cin >> a;
	cout << chtoi(a) << endl;
	return 0;
}