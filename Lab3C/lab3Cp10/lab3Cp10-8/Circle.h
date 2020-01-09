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
	Circle()
	{
		itsX = 100;
		itsY = 100;
		itsRadius = 20;
	};
	Circle(const Circle& cr)
	{
		itsX = cr.itsX;
		itsY = cr.itsY;
		itsRadius = cr.itsRadius;
	};
	Circle(int x, int y, int radius = 20)
	{
		itsX = x;
		itsY = y;
		itsRadius = radius;
	};
	~Circle()
	{};

	Circle operator ++()
	{
		++itsRadius;
		return *this;
	}
	Circle operator ++(int)
	{
		itsRadius++;
		return *this;
	};
	Circle operator --()
	{
		--itsRadius;
		return *this;
	}
	Circle operator --(int)
	{
		itsRadius--;
		return *this;
	};

	Circle operator +(const Circle& other) {
		Circle sum;
		sum.itsRadius = itsRadius + other.itsRadius;
		return sum;
	}
	Circle operator -(const Circle& other) {
		Circle dif;
		dif.itsRadius = itsRadius - other.itsRadius;
		return dif;
	}

	bool operator <(const Circle& other) {
		if (itsRadius < other.itsRadius) {
			return true;
		}
		else {
			return false;
		}
	}
	bool operator ==(const Circle& other) {
		if (itsRadius == other.itsRadius) {
			return true;
		}
		else {
			return false;
		}
	}

	inline int getX() { return itsX; };
	inline int getY() { return itsY; };
	inline int getRadius() { return itsRadius; };
	//сеттеры
	void setX(int x) { itsX = x; };
	void setY(int y) { itsY = y; };
	void setRadius(int radius) { itsRadius = radius; };
};

