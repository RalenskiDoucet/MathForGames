#include <math.h> 
#include "Vector4.h"

Vector4::Vector4()
{
}

Vector4::Vector4(float x, float y, float z)
{
	x = mX;
	y = mY;
	z = mZ;
}

Vector4 Vector4::operator+(Vector4 & other)
{
	Vector4 V4;
	V4.mX = mX + other.mX;
	V4.mY = mY + other.mY;
	V4.mZ= mZ+ other.mZ;
	return V4;
}

Vector4 Vector4::operator-(Vector4 & other)
{
	Vector4 V4;
	V4.mX = mX - other.mX;
	V4.mY = mY - other.mY;
	V4.mZ = mZ - other.mZ;
	return V4;
}

Vector4 Vector4::operator*(Vector4 & other)
{
	Vector4 V4;
	V4.mX = mX * other.mX;
	V4.mY = mY * other.mY;
	V4.mZ = mZ * other.mZ;
	return V4;
}

bool Vector4::operator==(Vector4 & other)
{
	if (mX == other.mX && mY == other.mY)
	{
		return true;
	}
	return false;
} 

float Vector4::dot(Vector4 & other)
{
	
	mX = mX*other.mX + mX * other.mX;
	mY = mY*other.mY + mY * other.mY;
	mZ = mZ*other.mZ + mZ*other.mZ;
	return mX; mY; mZ;
}

Vector4 Vector4::Cross(Vector4 & other)
{
	Vector4 V4;
	V4.mX = mY * other.mZ - mZ * other.mY;
	V4.mY = mZ * other.mX - mX * other.mZ;
	V4.mZ = mX * other.mY - mY * other.mX;
	return V4;
}

float Vector4::Magnitude()
{
	float mag = sqrt((mX * mX) + (mY*mY));
	return  mag;
}

Vector4 Vector4::Normalize()
{
	Vector4 V4;
	V4.mX = mX / Magnitude();
	V4.mY = mY / Magnitude();
	return V4;
}
float Vector4::input()
{
	std::cout << "input X";
	std::cin >> mX;
	return mX;
}
float Vector4::Input()
{
	std::cout << "input Y";
	std::cin >>mY;
	return mY;
}
