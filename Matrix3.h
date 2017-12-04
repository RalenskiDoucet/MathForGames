#pragma once
#include <iostream>
using namespace std;
class Matrix3
{
public:
	float mMatrix[4];
	Matrix3();
	Matrix3(float a, float b, float c, float d);
	Matrix3 Rotation(float angle);
	Matrix3 operator*(Matrix3&other);
	Matrix3	operator+(Matrix3&other);
	Matrix3 operator-(Matrix3&other);
};
