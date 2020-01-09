/*
Автор проекту: Суптеля Владислав
Дата: 05.11.2019
5. Напишіть програму обчислення суми і твори чисел, що вводяться з клавіатури:
a) кількість чисел попередньо вводиться з клавіатури;
b) обчислення припиняються за запитом програми.     
*/
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	char tocontinue;
	//do {
	combobreaker:
		system("color 02");
		int size;
		cout << "Specify the array's reach . . . " << endl;
		cin >> size;
		int * sizeee = new int[size];
		int sum = 0;
		int multiplier = 1;
		for (int i = 1; i < size + 1; i++)
		{
			cin >> sizeee[i];
			cout << "-> " << sizeee[i] << endl;
		}
		for (int i = 1; i < size + 1; i++)
		{
			sum += sizeee[i];
		}
		for (int i = 1; i < size + 1; i++)
		{
			multiplier *= sizeee[i];
		}
		cout << "Sum: " << sum << " Composition: " << multiplier << endl;

		cout << "Continue? Y/N" << endl;
		cin >> tocontinue;
		if (tocontinue == 'Y')
			goto combobreaker;
		else
			//} while (tocontinue == 'Y');
    // delete [] sizeee;
	return 0;
}

/*
6. що невірно в наступному коді ? int counter = 0; while (counter <10) { cout << "counter:" << counter; }
7. Що невірно в наступному коді? for (int counter = 0; counter <10; conter ++); cout << "count er:" << counter;
8.  що невірно в наступному коді ? int counter = 100; while (counter <10) { cout << "counter:" << counter; counter--; }
*/

// 6. GER (endless loop)
// 7. две опечатки
// 8. несоответствие условию