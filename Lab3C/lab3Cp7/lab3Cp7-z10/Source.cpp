/*
Автор проекту: Суптеля Владислав
Дата: 19.11.2019
10. Напишіть 3 варіанти switch для друку назв днів тижня, використовуючи різні типи його параметра : ціле, символ і перерахування.
*/
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	//system("color 02");
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

	int dnum;
	SetConsoleTextAttribute(color, 12);
	cout << "'1' stands for Monday and so on . . ." << endl;
	cin >> dnum;
	enum days {Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
	switch (dnum)
	{
	case Monday:
		cout << "Monday.";
		break;
	case Tuesday:
		cout << "Tuesday.";
		break;
	case Wednesday:
		cout << "Wednesday.";
		break;
	case Thursday:
		cout << "Thursday.";
		break;
	case Friday:
		cout << "Friday.";
		break;
	case Saturday:
		cout << "Saturday.";
		break;
	case Sunday:
		cout << "Sunday.";
		break;
	}
	cout << "\n" << endl;

	char dlet;
	SetConsoleTextAttribute(color, 14);
	cout << "'m' stands for Monday, 't' stands for Tuesday, 'w' stands for Wednesday, 'u' stands for Thursday, 'f' stands for Friday, 's' stands for Saturday, 'n' stands for Sunday . . ." << endl;
	cin >> dlet;
	switch (dlet)
	{
	case 'm':
		cout << "Monday.";
		break;
	case 't':
		cout << "Tuesday.";
		break;
	case 'w':
		cout << "Wednesday.";
		break;
	case 'u':
		cout << "Thursday.";
		break;
	case 'f':
		cout << "Friday.";
		break;
	case 's':
		cout << "Saturday.";
		break;
	case 'n':
		cout << "Sunday.";
		break;
	}
	cout << "\n" << endl;

	int today;
	SetConsoleTextAttribute(color, 10);
	cout << "'1' stands for Monday and so on . . ." << endl;
	cin >> today;
	switch (today)
	{
	case 1:
		cout << "Monday.";
		break;
	case 2:
		cout << "Tuesday.";
		break;
	case 3:
		cout << "Wednesday.";
		break;
	case 4:
		cout << "Thursday.";
		break;
	case 5:
		cout << "Friday.";
		break;
	case 6:
		cout << "Saturday.";
		break;
	case 7:
		cout << "Sunday.";
		break;
	}
	SetConsoleTextAttribute(color, 15);
	cout << endl;
}