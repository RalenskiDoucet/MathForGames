#pragma once
class Matrix4
{
public:
	float mMatrix[4];
	Matrix4();
	Matrix4(float a, float b, float c, float d);
	Matrix4(float mat[4]);
	int PrintMatrix();
	float DrawMatrix(float Matrix4);
	int operator*(Matrix4&other);
	int operator+(Matrix4&other);
	int operator-(Matrix4&other);
};