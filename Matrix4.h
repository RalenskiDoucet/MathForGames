#pragma once
#include <iostream>
using namespace std;
class Matrix4
{
public:
	float mMatrix[4];
	Matrix4();
	Matrix4(float a, float b, float c, float d);
	Matrix4 Rotation(float angle);
	Matrix4 operator*(Matrix4&other);
	Matrix4 operator+(Matrix4&other);
	Matrix4 operator-(Matrix4&other);
};