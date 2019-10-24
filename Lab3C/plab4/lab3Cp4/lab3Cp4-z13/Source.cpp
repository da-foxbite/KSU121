/*
Автор проекту: Суптеля Владислав
Дата: 18.10.2019
13.Який буде результат?
	 int a = 1, b = 1, c;
	 if (c = (a - b))
		cout << "c =" << c;
*/

#include <iostream>
using namespace std;

int main()
{
	int a = 1, b = 1, c;
	if (c = (a - b)); // без ТЗ после строчки с IF результата в принципе не будет
	cout << "c =" << c; // c =0
	system("pause");
	return 0;
}