/*
Автор проекту: Суптеля Владислав
Дата: 23.10.2019
7.	Оголосіть символьні масиви для зберігання елементів своєї адреси (місто, район, вулиця, будинок, квартира) і всієї адреси. Проініціалізуйте їх символом нового рядка. Визначте значення елементів адреси , виконайте присвоєння рядків . Сформуйте значення всієї адреси, виконати конкатенацію рядків. Визначте довжину елементів адреси і всієї адреси. Визначте який рядок більший: місто або район, виконайте порівняння рядків.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char cityfat[] = "Город ", districtfat[] = "Район ", streetfat[] = "Улица ", housefat[] = "Дом ", flatfat[] = "Квартира ", adressfat[1000]="";
	strcat(adressfat, cityfat);
	strcat(adressfat, districtfat);
	strcat(adressfat, streetfat);
	strcat(adressfat, housefat);
	strcat(adressfat, flatfat);
	cout << adressfat;
	system("pause");
	return 0;
}