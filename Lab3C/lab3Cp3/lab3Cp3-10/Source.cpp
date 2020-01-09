/*
	Автор: Суптеля Владислав
	Дата: 4.10.2019
	10.Яке значення BLUE в наступному перерахування: 
       enum COLOR {WHITE, BLACK = 100, RED, BLUE, GREEN = 300};
    11.Роздрукуйте на екрані значення основних математичних констант, оголошених в бібліотеці math. h.
*/
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	enum COLOR {WHITE, BLACK = 100, RED, BLUE, GREEN = 300}; // RED = 101, BLUE = 102
	int i = 0;
	double mathConsts[13] =
	{M_E, M_LOG2E, M_LOG10E, M_LN2, M_LN10, M_PI, M_PI_2, M_PI_4, M_1_PI, M_2_PI, M_2_SQRTPI, M_SQRT2, M_SQRT1_2};
	for (i = 0; i < 13; i++)
	{
		cout << mathConsts[i] << endl;
	};
	system("pause");
	return 0;
}