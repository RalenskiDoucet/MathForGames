#pragma once
class Matrix3
{
public:
	float mMatrix[4];
	Matrix3();
	Matrix3(float a, float b, float c, float d);
	Matrix3(float mat[4]);
	int PrintMatrix();
	float DrawMatrix(float Matrix3);
	int operator*(Matrix3&other);
	int operator+(Matrix3&other);
	int operator-(Matrix3&other);
};
