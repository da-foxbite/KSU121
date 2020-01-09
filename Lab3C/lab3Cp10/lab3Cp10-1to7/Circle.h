#pragma once

// #define _USE_MATH_DEFINES
#include <iostream>
#include <fstream>
// #include <math.h>

using namespace std;
const double M_PI = 3.1415926;

class Circle
{
private:
	int itsX;
	int itsY;
	int itsRadius;
public:
	//2
	Circle()
	{
		itsX = 100;
		itsY = 100;
		itsRadius = 20;
	};
	//3
	Circle(int x, int y, int radius = 20)
	{
		itsX = x;
		itsY = y;
		itsRadius = radius;
	};
	//4
	Circle(bool IsFile)
	{
		if (IsFile == true)
		{
			ifstream in("Circle.txt");
			in >> itsX >> itsY >> itsRadius;
			in.close();
		}
		else
		{
			cout << "Введите значение X . . .";
			cin >> itsX;
			cout << "Введите значение Y . . .";
			cin >> itsY;
			cout << "Введите значение радиуса . . .";
			cin >> itsRadius;
		}
	};
	//5
	Circle (const Circle &cr)
	{
		itsX = cr.itsX;
		itsY = cr.itsY;
		itsRadius = cr.itsRadius;
	};

	~Circle()
	{};

	// inline == экономия памяти?
	// геттеры
	inline int getX() { return itsX; };
	inline int getY() { return itsY; };
	inline int getRadius() { return itsRadius; };
	//сеттеры
	void setX(int x) { itsX = x; };
	void setY(int y) { itsY = y; };
	void setRadius(int radius) { itsRadius = radius; };

	//6.1
	float findC()
	{
		return 2 * M_PI * itsRadius;
	}
	float findS()
	{
		return M_PI * pow(itsRadius, 2);
	}
	float findV()
	{
		return 4 / 3 * M_PI * pow(itsRadius, 3);
	}
	//6.2
	float findC(float radius)
	{
		return 2 * M_PI * radius;
	}
	float findS(float radius)
	{
		return M_PI * pow(radius, 2);
	}
	float findV(float radius)
	{
		return 4 / 3 * M_PI * pow(radius, 3);
	}

	void printC() { cout << "Длина окружности: " << findC() << endl; };
	void printS() { cout << "Площадь окружности: " << findS() << endl; };
	void printV() { cout << "Объём окружности: " << findV() << endl; };
	void printCSVtoConsole() { printC(); printS(); printV(); };
};
