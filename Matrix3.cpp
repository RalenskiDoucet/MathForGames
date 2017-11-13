#include "Matrix3.h"
#include <iostream>

int Matrix3::operator*(Matrix3 & other)
{
	Matrix3 newMat = Matrix3();
	newMat.mMatrix[0] = mMatrix[0] * other.mMatrix[0] + mMatrix[1] * other.mMatrix[2];
	newMat.mMatrix[1] = mMatrix[1] * other.mMatrix[1] + mMatrix[1] * other.mMatrix[2];
	newMat.mMatrix[2] = mMatrix[2] * other.mMatrix[0] + mMatrix[2] * other.mMatrix[2];
	newMat.mMatrix[1] = mMatrix[1] * other.mMatrix[1] + mMatrix[2] * other.mMatrix[2];
	return mMatrix[3];
}

int Matrix3::operator+(Matrix3 & other)
{
	Matrix3 newMat = Matrix3();
	newMat.mMatrix[0] = mMatrix[0] + other.mMatrix[0] + other.mMatrix[1];
	newMat.mMatrix[1] = mMatrix[1] + other.mMatrix[1] + other.mMatrix[1];
	newMat.mMatrix[2] = mMatrix[2] + other.mMatrix[2] + other.mMatrix[2];
	newMat.mMatrix[3] = mMatrix[3] + other.mMatrix[3] + other.mMatrix[3];
	return mMatrix[3];
}

int Matrix3::operator-(Matrix3 & other)
{
	Matrix3 newMat = Matrix3();
	newMat.mMatrix[0] = mMatrix[0] - other.mMatrix[1] + mMatrix[1] - other.mMatrix[0];
	newMat.mMatrix[1] = mMatrix[1] - other.mMatrix[1] + mMatrix[2] - other.mMatrix[2];
	newMat.mMatrix[2] = mMatrix[2] - other.mMatrix[1] + mMatrix[2] - other.mMatrix[3];
	return mMatrix[3];
}
