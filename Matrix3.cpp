#include "Matrix3.h"
#include <iostream>
Matrix3::Matrix3()
{
	mMatrix[4];
}
Matrix3::Matrix3(float a, float b, float c, float d)
{
	mMatrix[0] = a; mMatrix[1] = b;
	mMatrix[2] = c; mMatrix[3] = d;
}
Matrix3::Matrix3(int a, int b, int c, int d, float e, float f, int g, float h, float i)
{
	mMatrix[4];
}
Matrix3 Matrix3::RotationX(float angle)//Rotates the Xaxis.
{
	float radains = ((angle * 3.1415926535897) / 180);
	Matrix3 *rotate = new Matrix3(1, 0, 0, 0, cos(radains), sin(-radains), 0, sin(radains), cos(radains));
	return *rotate * *this;
}
Matrix3 Matrix3::RotationY(float angle)//Rotates the Xaxis.
{
	float radains = ((angle * 3.1415926535897) / 180);
	Matrix3 *rotate = new Matrix3(cos(radains), 0, sin(radains), 0, 1, 0, sin(-radains), 0, cos(radains));
	return *rotate * *this;
}
Matrix3 Matrix3::RotationZ(float angle)
{
	float radains = ((angle * 3.1415926535897) / 180);
	Matrix3 *rotate = new Matrix3(cos(radains), sin(-radains), 0, sin(radains), cos(radains), 0, 0, 0, 1);
	return *rotate * *this;
}
Matrix3 Matrix3::operator*(Matrix3 & other)
{

	Matrix3 M3 = Matrix3();
	M3.mMatrix[0] = mMatrix[0] * other.mMatrix[0] + mMatrix[1] * other.mMatrix[3];
	M3.mMatrix[0] = mMatrix[1] * other.mMatrix[1] + mMatrix[1] * other.mMatrix[2];
	M3.mMatrix[2] = mMatrix[2] * other.mMatrix[0] + mMatrix[3] * other.mMatrix[2];
	M3.mMatrix[3] = mMatrix[2] * other.mMatrix[1] + mMatrix[3] * other.mMatrix[3];
		return M3;

}
Matrix3 Matrix3::operator+(Matrix3 & other)
{
	Matrix3 M3 = Matrix3();
	M3.mMatrix[0] = other.mMatrix[0] + mMatrix[0];
	M3.mMatrix[1] = other.mMatrix[1] + mMatrix[1];
	M3.mMatrix[2] = other.mMatrix[2] + mMatrix[2];
	M3.mMatrix[3] = other.mMatrix[3] + mMatrix[3];
	return M3;
}
Matrix3 Matrix3::operator-(Matrix3 & other)
{
	Matrix3 M3 = Matrix3();
	M3.mMatrix[0] = other.mMatrix[0] - mMatrix[0];
	M3.mMatrix[1] = other.mMatrix[1] - mMatrix[1];
	M3.mMatrix[2] = other.mMatrix[2] - mMatrix[2];
	M3.mMatrix[3] = other.mMatrix[3] - mMatrix[3];
	return M3;
}

