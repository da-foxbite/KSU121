/*
Автор проекту: Суптеля Владислав
Дата: 26.11.2019
4. Напишіть невелику програму, в якій оголошуються ціле і покажчик на ціле. Дайте адресу цілого вказівником. За допомогою покажчика встановіть значення цілої змінної.
5. Що невірно в наступному фрагменті коду ? int * pInt; * pInt = 9; cout << "The value at pInt:" << * pInt;
6. Що невірно в наступному фрагменті коду ? int SomeVariable = 5; int * pVar = & SomeVariable; p Var = 9; cout << "SomeVariable:" << * pVar;
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	system("color 02");
	int jaint;
	int* pJaint = &jaint;
	*pJaint = 2;
	cout << "Adress: " << pJaint << endl;
	cout << "Value: " << jaint << endl;
	return 0;
}

/*
5) int * pInt;                                   //
   * pInt = 9;                                   // указывает на значение, а не на переменную
   cout << "The value at pInt:" << * pInt;       //

6) int SomeVariable = 5;                         //
   int * pVar = & SomeVariable;                  //
   p Var = 9;                                    // 1) опечатка в виде лишнего пробела 2) "*pVar = 9"
   cout << "SomeVariable:" << * pVar;            // 
*/