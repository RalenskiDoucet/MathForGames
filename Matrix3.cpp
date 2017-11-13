#include "Matrix3.h"
#include <iostream>

Matrix3::Matrix3()
{
}

Matrix3::Matrix3(float a, float b, float c, float d)
{
}

Matrix3::Matrix3(float mat[4])
{
}

Matrix3 Matrix3::operator*(Matrix3 & other)
{

	Matrix3 M3 = Matrix3();
	M3.mMatrix[0] = mMatrix[0] * other.mMatrix[0] + mMatrix[1] * other.mMatrix[2];
	M3.mMatrix[1] = mMatrix[1] * other.mMatrix[1] + mMatrix[1] * other.mMatrix[2];
	M3.mMatrix[2] = mMatrix[2] * other.mMatrix[0] + mMatrix[2] * other.mMatrix[2];
	M3.mMatrix[1] = mMatrix[1] * other.mMatrix[1] + mMatrix[2] * other.mMatrix[2];
		return M3;
	
}

Matrix3 Matrix3::operator+(Matrix3 & other)
{
	Matrix3 M3 = Matrix3();
	M3.mMatrix[0] = mMatrix[0] + other.mMatrix[0] + other.mMatrix[1];
	M3.mMatrix[1] = mMatrix[1] + other.mMatrix[1] + other.mMatrix[1];
	M3.mMatrix[2] = mMatrix[2] + other.mMatrix[2] + other.mMatrix[2];
	M3.mMatrix[3] = mMatrix[3] + other.mMatrix[3] + other.mMatrix[3];
	return M3;
}
Matrix3 Matrix3::operator-(Matrix3 & other)
{
	Matrix3 M3 = Matrix3();
	M3.mMatrix[0] = mMatrix[0] - other.mMatrix[1] + mMatrix[1] - other.mMatrix[0];
	M3.mMatrix[1] = mMatrix[1] - other.mMatrix[1] + mMatrix[2] - other.mMatrix[2];
	M3.mMatrix[2] = mMatrix[2] - other.mMatrix[1] + mMatrix[2] - other.mMatrix[3];
	return M3;
}
