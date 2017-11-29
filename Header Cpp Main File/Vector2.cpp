#include "Vector2.h"
#include<math.h>

Vector2::Vector2()
{
}

Vector2::Vector2(float X, float Y)
{
	mX = X;
	mY = Y;
}

Vector2 Vector2::operator+(Vector2 & other)
{
	Vector2 V2;
	V2.mX = mX + other.mX;
	V2.mY = mY + other.mY;

	return V2;
}

Vector2 Vector2::operator-(Vector2 & other)
{
	Vector2 V2;
	V2.mX = mX - other.mX;
	V2.mY = mY - other.mY;
	return V2;
}

Vector2 Vector2::operator*(Vector2 & other)
{
	Vector2 V2;
	V2.mX = mX*other.mX;
	V2.mY = mY*other.mY;
	return V2;
}

float Vector2::Magnitude()
{
	float mag = sqrt((mX * mX) + (mY * mY)); 
	return  mag;
}
bool Vector2::operator==(Vector2 & other)
{
	if (mX == other.mX && mY == other.mY)
	{
		return true;
	}
	return false;
}
Vector2 Vector2::Normalise()
{
	Vector2 V2;
	V2.mX = mX / Magnitude();
	V2.mY = mY / Magnitude();
	return V2;
}

float Vector2::Input()
{
	std::cout << "input X";
	std::cin >>mX;
	return mX;
}
float Vector2::input()
{
	std::cout << "input Y";
	std::cin >>mY;
	return mY;
}


 