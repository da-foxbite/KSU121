/*
Автор проекту: Суптеля Владислав
Дата: 23.10.2019
10.	Що невірно в наступному фрагменті?
#include <iostream.h>
void myFunc (int x);
void main () { int x, y; y = myFunc (int); }
Void myFunc (int a) { return 4 * a; }
*/

#include <iostream>
using namespace std;
void myFunc(int &x);
void main()
{ 
	int x; 
	cin >> x;
	myFunc(x);
	cout << x;
}
void myFunc(int &a) 
{
	a = 4 * a;
}