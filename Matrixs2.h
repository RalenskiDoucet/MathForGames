#pragma once
#include <iostream>
using namespace std;
class Matrix2
{
public:
	float mMatrix[4];
	float Degrees;
	Matrix2();
	Matrix2(float a, float b, float c, float d);
	Matrix2 Rotation(float angle);
	Matrix2 operator*(Matrix2&other);
	Matrix2 operator+(Matrix2&other);
	Matrix2 operator-(Matrix2&other);
};
