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

int Matrix4::operator*(Matrix4 & other)
{
	Matrix4 newMat = Matrix4();
	newMat.mMatrix[0] = mMatrix[0] * other.mMatrix[0] + mMatrix[1] * other.mMatrix[2];
	newMat.mMatrix[1] = mMatrix[1] * other.mMatrix[1] + mMatrix[1] * other.mMatrix[2];
	newMat.mMatrix[2] = mMatrix[2] * other.mMatrix[0] + mMatrix[2] * other.mMatrix[2];
	newMat.mMatrix[1] = mMatrix[1] * other.mMatrix[1] + mMatrix[2] * other.mMatrix[2];
	return mMatrix[3];
}

int Matrix4::operator+(Matrix4 & other)
{
	Matrix4 newMat = Matrix4();
	newMat.mMatrix[0] = mMatrix[0] + other.mMatrix[0] + other.mMatrix[1];
	newMat.mMatrix[1] = mMatrix[1] + other.mMatrix[1] + other.mMatrix[1];
	newMat.mMatrix[2] = mMatrix[2] + other.mMatrix[2] + other.mMatrix[2];
	newMat.mMatrix[3] = mMatrix[3] + other.mMatrix[3] + other.mMatrix[3];
	return mMatrix[3];
}

int Matrix4::operator-(Matrix4 & other)
{
Matrix4 newMat = Matrix4();
newMat.mMatrix[0] = mMatrix[0] - other.mMatrix[1] + mMatrix[1] - other.mMatrix[0];
newMat.mMatrix[1] = mMatrix[1] - other.mMatrix[1] + mMatrix[2] - other.mMatrix[2];
newMat.mMatrix[2] = mMatrix[2] - other.mMatrix[1] + mMatrix[2] - other.mMatrix[3];
return mMatrix[3];
}
