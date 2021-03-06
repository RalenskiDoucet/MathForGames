#include "Matrix4.h"

Matrix4::Matrix4()
{
	mMatrix[4];
}
Matrix4::Matrix4(float a, float b, float c, float d)
{
	mMatrix[0] = a; mMatrix[1] = b;
	mMatrix[2] = c; mMatrix[3] = d;
}
Matrix4::Matrix4(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, float k, int l, float m, int n, int o, float p)
{
	mMatrix[4];
}
Matrix4::Matrix4(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, float k, int l, float m, int n, int o, float p, float q)
{
	mMatrix[4];
}
Matrix4 Matrix4::RotationX(float angle)//Rotates the Xaxis.
{
	float radains = ((angle * 3.1415926535897) / 180);
	Matrix4 *rotate = new Matrix4(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, cos(radains), 0, sin(radains), 0, 0, -sin(radains), cos(radains));
	return *rotate * *this;
}
Matrix4 Matrix4::RotationY(float angle)//Rotates the Xaxis.
	{
		float radains = ((angle * 3.1415926535897) / 180);
		Matrix4 *rotate = new Matrix4(1, 0, 0, 0, 0, cos(radains), 0, sin(radains), 0, 0, 1, 0, 0, sin(-radains), 0, cos(radains));
		return *rotate * *this;
	}
Matrix4 Matrix4::RotationZ(float angle)
{
	float radains = ((angle * 3.1415926535897) / 180);
	Matrix4 *rotate = new Matrix4(1, 0, 0, 0, 0, cos(radains), 0, 0, sin(radains), -sin(radains), cos(radains), 0, 0, 0, 0, 1);
	return *rotate * *this;
}
Matrix4 Matrix4::operator*(Matrix4 & other)
{
	Matrix4 M4 = Matrix4();
	M4.mMatrix[0] = mMatrix[0] * other.mMatrix[0] + mMatrix[1] * other.mMatrix[3];
	M4.mMatrix[0] = mMatrix[1] * other.mMatrix[1] + mMatrix[1] * other.mMatrix[2];
	M4.mMatrix[2] = mMatrix[2] * other.mMatrix[0] + mMatrix[3] * other.mMatrix[2];
	M4.mMatrix[3] = mMatrix[2] * other.mMatrix[1] + mMatrix[3] * other.mMatrix[3];
	return M4;
}
Matrix4 Matrix4::operator+(Matrix4 & other)
{
	Matrix4 M4;
	M4.mMatrix[0] = other.mMatrix[0] + mMatrix[0];
	M4.mMatrix[1] = other.mMatrix[1] + mMatrix[1];
	M4.mMatrix[2] = other.mMatrix[2] + mMatrix[2];
	M4.mMatrix[3] = other.mMatrix[3] + mMatrix[3];
	return M4;
}
Matrix4 Matrix4::operator-(Matrix4 & other)
{
Matrix4 M4 = Matrix4();
M4.mMatrix[0] = other.mMatrix[0] - mMatrix[0];
M4.mMatrix[1] = other.mMatrix[1] - mMatrix[1];
M4.mMatrix[2] = other.mMatrix[2] - mMatrix[2];
M4.mMatrix[3] = other.mMatrix[3] - mMatrix[3];
return M4;
}
