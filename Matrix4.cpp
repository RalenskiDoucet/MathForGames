#include "Matrix4.h"

Matrix4::Matrix4()
{
}

Matrix4::Matrix4(float a, float b, float c, float d)
{
}

Matrix4::Matrix4(float mat[4])
{
}

Matrix4 Matrix4::operator*(Matrix4 & other)
{
	Matrix4 M4 = Matrix4();
	M4.mMatrix[0] = mMatrix[0] * other.mMatrix[0] + mMatrix[1] * other.mMatrix[2];
	M4.mMatrix[1] = mMatrix[1] * other.mMatrix[1] + mMatrix[1] * other.mMatrix[2];
	M4.mMatrix[2] = mMatrix[2] * other.mMatrix[0] + mMatrix[2] * other.mMatrix[2];
	M4.mMatrix[1] = mMatrix[1] * other.mMatrix[1] + mMatrix[2] * other.mMatrix[2];
	return M4;
}

Matrix4 Matrix4::operator+(Matrix4 & other)
{
	Matrix4 M4 = Matrix4();
	M4.mMatrix[0] = mMatrix[0] + other.mMatrix[0] + other.mMatrix[1];
	M4.mMatrix[1] = mMatrix[1] + other.mMatrix[1] + other.mMatrix[1];
	M4.mMatrix[2] = mMatrix[2] + other.mMatrix[2] + other.mMatrix[2];
	M4.mMatrix[3] = mMatrix[3] + other.mMatrix[3] + other.mMatrix[3];
	return M4;
}

Matrix4 Matrix4::operator-(Matrix4 & other)
{
Matrix4 M4 = Matrix4();
M4.mMatrix[0] = mMatrix[0] - other.mMatrix[1] + mMatrix[1] - other.mMatrix[0];
M4.mMatrix[1] = mMatrix[1] - other.mMatrix[1] + mMatrix[2] - other.mMatrix[2];
M4.mMatrix[2] = mMatrix[2] - other.mMatrix[1] + mMatrix[2] - other.mMatrix[3];
return M4;
}
