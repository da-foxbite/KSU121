/*
Автор проекту: Суптеля Владислав
Дата: 19.11.2019
12. Напишіть програму для визначення терміну служби електричної лампочки на основі її потужності, використовуючи= таблицю рішень.
*/
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	system("color 02");
	setlocale(LC_ALL, "Russian");
	int powah;
	cout << "Введите мощность лампы . . ." << endl;
	bool powchk = true;
	do {
		cin >> powah;
		switch (powah)
		{
		case 25:
			cout << "Ожидаёмый срок работы - 2500 часов ..." << endl;
			break;
		case 40: case 60:
			cout << "Ожидаёмый срок работы - 1000 часов ..." << endl;
			break;
		case 75: case 100:
			cout << "Ожидаёмый срок работы - 750 часов ..." << endl;
			break;
		case 150: case 200:
			cout << "Ожидаёмый срок работы - 500 часов ..." << endl;
			break;
		default: cout << "Поддерживаемые значения (Вт): 25, 40, 60, 75, 100, 150, 200 . . ." << endl;
			break;
		} 
		cout << "Продолжить? 1 == ДА, 0 == НЕТ" << endl;
		cin >> powchk;
	} while (powchk == true);
	return 0;
}

/*
13 Що неприпустимо , а що логічно неправильно в наступному коді? 
double color = 1; switch ( color ) { case 1: cout << " Black \ n "; case 2: cout << " White \ n "; default : cout << " Other \ n "; }
*/
// double color = 1; // допустымые типы данных - int/bool/enum
//switch (color)
//{ // break?? (зависит от цели)
//case 1: cout << " Black \ n "; 
//case 2: cout << " White \ n "; 
//default: cout << " Other \ n ";
//}