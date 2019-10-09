/*
Автор: Суптеля Владислав
Дата: 4.10.2019

6.Оголосіть константу  зі значенням 3.14159 двома способами?
7.Оголосіть змінну з плаваючою точкою і ініціалізуйте її значенням константи
*/
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>

using namespace std;

/*
const long double PI = 3.141592653589793238L
const double PI = 3.141592653589793
const float PI = 3.1415927
*/

const float p = 3.1415927;
float pi = p;

int main()
{
	cout << M_PI << endl; //  значение из math.h
	cout << pi << endl; // присвоение
	cout << 4 * atan(1) << endl; // формула
	system("pause");
	return 0;
}

/*
8.Назвіть тип unsigned long int ім'ям ULONG, а long double на свій розсуд.
*/

typedef unsigned long int ULONG;
typedef long double DLONG;
ULONG a = 228;
DLONG b = 1488;

/*
9.Оголосіть перерахування для місяців року, назв днів тижня, планет сонячної системи, назв валют, типів комп'ютерних документів, назв мов.
*/

enum months {January = 1, February, March, April, May, June, July, August, September, October, November, December};
enum days {Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday}; // ISO 8601
enum planets { Mercury = 1, Venus, Earth, Mars, Jupiter, Saturn, Uranus, Neptune};
/* len'
enum currencies {};
enum doctype {};
enum languages {};
*/