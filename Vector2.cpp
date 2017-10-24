#include "Vector2.h"

Vector2::Vector2()
{
	Vector2 V3;
}

Vector2::Vector2(float X, float Y)
{
	mX = X;
	mY = Y;
}

Vector2 Vector2::operator+(Vector2 & other)
{
	Vector2 V3;
	V3.mX = mX + other.mX;
	V3.mY = mY + other.mY;

	return V3;
}

Vector2 Vector2::operator-(Vector2 & other)
{
	Vector2 V3;
	V3.mX = mX - other.mX;
	V3.mY = mY - other.mY;
	return V3;
}

Vector2 Vector2::operator*(Vector2 & other)
{
	Vector2 V3;
	V3.mX = mX*other.mX;
	V3.mY = mY*other.mY;
	return V3;
}
