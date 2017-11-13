#include "Matrixs2.h"
#include <iostream>

//int Matrix2::PrintMatrix()
//{
//return mMatrix[4][4];	
//}
//
//float Matrix2::DrawMatrix(float Matrix1)
//{
//	for (Matrix1 = mMatrix[4][4]; PrintMatrix();)
//		{
//			Matrix1 = mMatrix[4][4];
//		}
//		return (mMatrix[4][4]);
//}

int Matrix2::operator*(Matrix2 & other)
{
	Matrix2 newMat = Matrix2();
	newMat.mMatrix[0] = mMatrix[0] * other.mMatrix[0] + mMatrix[1] * other.mMatrix[2];
	newMat.mMatrix[1] = mMatrix[1] * other.mMatrix[1] + mMatrix[1] * other.mMatrix[2];
	newMat.mMatrix[2] = mMatrix[2] * other.mMatrix[0] + mMatrix[2] * other.mMatrix[2];
	newMat.mMatrix[1] = mMatrix[1] * other.mMatrix[1] + mMatrix[2] * other.mMatrix[2];
	return mMatrix[3];
}

int Matrix2::operator+(Matrix2 & other)
{
	Matrix2 newMat = Matrix2();
	newMat.mMatrix[0] = mMatrix[0] + other.mMatrix[0] + other.mMatrix[1];
	newMat.mMatrix[1] = mMatrix[1] + other.mMatrix[1] + other.mMatrix[1];
	newMat.mMatrix[2] = mMatrix[2] + other.mMatrix[2] + other.mMatrix[2];
	newMat.mMatrix[3] = mMatrix[3] + other.mMatrix[3] + other.mMatrix[3];
	return mMatrix[3];
}

int Matrix2::operator-(Matrix2 & other)
{
	Matrix2 newMat = Matrix2();
	newMat.mMatrix[0] = mMatrix[0] - other.mMatrix[1] + mMatrix[1] - other.mMatrix[0];
	newMat.mMatrix[1] = mMatrix[1] - other.mMatrix[1] + mMatrix[2] - other.mMatrix[2];
	newMat.mMatrix[2] = mMatrix[2] - other.mMatrix[1] + mMatrix[2] - other.mMatrix[3];
		return mMatrix[3];
}
