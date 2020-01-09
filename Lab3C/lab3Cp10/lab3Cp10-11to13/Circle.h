#pragma once

#include <iostream>

using namespace std;

class Circle
{
private:
	int* itsX = new int;
	int* itsY = new int;
	int* itsRadius = new int;
public:
	Circle()
	{
		int* itsX;
		int* itsY;
		int* itsRadius;
	};
	Circle(const Circle& cr)
	{
		*itsX = *cr.itsX;
		*itsY = *cr.itsY;
		*itsRadius = *cr.itsRadius;
	};
	Circle(int x, int y, int radius = 20)
	{
		*itsX = x;
		*itsY = y;
		*itsRadius = radius;
	};
	~Circle()
	{};

	void operator = (Circle& newCircle)
	{
		*this->itsRadius = *newCircle.itsRadius;
		*this->itsX = *newCircle.itsX;
		*this->itsY = *newCircle.itsY;
	}

	inline int getX() { return *itsX; };
	inline int getY() { return *itsY; };
	inline int getRadius() { return *itsRadius; };
	void setX(int x) { *itsX = x; };
	void setY(int y) { *itsY = y; };
	void setRadius(int radius) { *itsRadius = radius; };
};