#pragma once
class Matrix4
{
public:
	float mMatrix[4];
	Matrix4();
	Matrix4(float a, float b, float c, float d);
	float Rotation(float);
	Matrix4 operator*(Matrix4&other);
	Matrix4 operator+(Matrix4&other);
	Matrix4 operator-(Matrix4&other);
}; 