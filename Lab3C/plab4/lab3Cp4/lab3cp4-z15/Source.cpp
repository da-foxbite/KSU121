/*
Автор проекту: Суптеля Владислав
Дата: 18.10.2019
15.Запишіть те ж саме, використовуючи потрійну операцію?
*/

#include <iostream>
using namespace std;

int main()
{
	int main();
	{
		int a = 1, b = 2;
		// a > b ? cout << a : cout << b; // если а > b, то выполняется cout << a, иначе выполняется cout << b
		b > a ? a = b : a = a;
		cout << a << endl;
		system("pause");
		return 0;
	}
}