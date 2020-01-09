/*
Автор проекту: Суптеля Владислав
Дата: 17.10.2019
4.Переведіть температуру з градусів за Фаренгейтом в градуси за Цельсієм
(Формула для перекладу: Ц = 5/9 (Ф-32)).
*/

#include <iostream>
using namespace std;

float FtoC(float F);

int main()
{
	cout << FtoC(451) << endl;
	system("pause");
	return 0;
}
float FtoC(float F)
{
	return (F - 32) * 5 / 9;
}