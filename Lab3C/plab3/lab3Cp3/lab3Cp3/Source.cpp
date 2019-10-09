/*
Автор проекту: Суптеля Владислав
Дата: 30.09.2019
3.Оголосіть змінні, необхідні для зберігання наступних відомостей про співробітника: Табельний номер, прізвище, стать, вік, вага, курить чи ні, тарифна ставка і проініціалізіруйте їх. Роздрукуйте дані на екрані. Введіть нові значення з клавіатури і знову роздрукуйте.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int TabelNo;
	string surname;
	string sex;
	int age;
	int weight;
	bool smoker;
	int TarifStavka;
	// придаём значение
	TabelNo = 22814880;
	surname = "Жмышенко";
	sex = "Мужской";
	age = 54;
	weight = 96;
	smoker = true;
	TarifStavka = 54000;
	// выводим
	cout << "Табельный Номер - №" << TabelNo << endl;
	cout << "Фамилия - " << surname << endl;
	cout << "Пол - " << sex << endl;
	cout << "Возраст - " << age << endl;
	cout << "Вес - " << weight << endl;
	if (smoker) cout << "Курильщик - Да" << "\n";
	else cout << "Курильщик - Нет" << "\n";
	cout << "Оклад - " << TarifStavka << endl;
	// ?
	system("pause");
	return 0;
}