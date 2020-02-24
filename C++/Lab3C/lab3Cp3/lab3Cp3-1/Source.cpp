/*
	Автор проекту: Суптеля Владислав
	Дата: 30.09.2019
    1.Якого типу змінні відповідають для зберігання такої інформації :
      вік людини               Населення міста                             Число зірок в галактиці
      Один байт ОЗУ               Середня зарплата за рік               Відомості курить чи ні
      колір фігури                             Довжина в мм.Довжина в см.
      оголосіть і проініціалізуйте ці змінні, давши імен смислові імена.Вивести на екран.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	unsigned int age = 27;
	unsigned int cityPopulation = 300000;
	unsigned long long int galaxySQ = 1.024e+83;

	double averageSalaryY = 2400;
	bool Smoker = false;
	string colorFigure = "White";
	float lenghtMM = 36.9;
	float lenghtCM = 3.69;
	cout << age << "\n" << cityPopulation << "\n" << galaxySQ << "\n" << averageSalaryY << "\n";
	if (Smoker) cout << "Yes" << "\n";
	else cout << "No" << "\n";
	cout << colorFigure << "\n" << lenghtMM << "\n" << lenghtCM << "\n";
	system("pause");
	return 0;
}