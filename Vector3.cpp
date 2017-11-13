#include "Vector3.h"
#include <math.h>

Vector3::Vector3()
{
}

Vector3::Vector3(float x, float y, float z)
{
	mX = x;
	mY = y;
	mZ = z;
}

Vector3 Vector3::operator+(Vector3 & other)
{
	Vector3 V3;
	V3.mX = mX + other.mX;
	V3.mY = mY + other.mY;
	V3.mZ = mZ + other.mZ;
	return V3;
}

Vector3 Vector3::operator-(Vector3 & other)
{
	Vector3 V3;
	V3.mX = mX - other.mX;
	V3.mY = mY - other.mY;
	V3.mZ = mZ - other.mZ;
	return V3;
}

Vector3 Vector3::operator*(Vector3 & other)
{
	Vector3 V3;
	V3.mX = mX*other.mX;
	V3.mY = mY*other.mY;
	V3.mZ = mZ*other.mZ;
	return V3;
}

float Vector3::dot(Vector3 & other)
{
	Vector3 V3;
	V3.mX = mX*other.mX + mX * other.mX;
	V3.mY = mY*other.mY + mY * other.mY;
	V3.mZ = mZ*other.mZ + mZ*other.mZ;
	return mX; mY; mZ;
}

Vector3 Vector3::Cross(Vector3 & other)
{
	Vector3 V3;
	V3.mX = mY * other.mZ - mZ * other.mY;
	V3.mY = mZ * other.mX - mX * other.mZ;
	V3.mZ = mX * other.mY - mY * other.mX;
	return V3;
}

float Vector3::Magnitude()
{
	float mag = sqrt((mX * mX) + (mY*mY));
	return  mag;
}

Vector3 Vector3::Normalize()
{
	Vector3 V3;
	float mag = sqrt((mX * mX) + (mY + mY));
	V3.mX / mag;V3.mY / mag;
	return V3;
}

float Vector3::Input()
{
	std::cout << "input X";
	std::cin >> mX;
	
	return mX;
}

float Vector3::input()
{
	std::cout << "input Y";
	std::cin >> mY;
	return mY;
}

bool Vector3::operator==(Vector3 & other)
{
	if (mX == other.mX && mY == other.mY)
	{
		return true;
	}
	return false;
}
 