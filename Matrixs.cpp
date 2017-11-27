#include "Matrixs2.h"
#include <iostream>
 
	 Matrix2::Matrix2()
	 {
		 mMatrix[4];
	 }

	 Matrix2::Matrix2(float a, float b, float c, float d)
	 { 
		 mMatrix[0] = a; mMatrix[1] = b;
		 mMatrix[2] = c; mMatrix[3] = d;
	 }

	 float Matrix2::Rotation(float)
	 {
		 float a;
		 [a = cos(3.14 / 2) - sin(a)];
		 [sin(a) cos(a)];
		 return a;
	 }

	 Matrix2 Matrix2::operator*(Matrix2 & other)
	 {
		 Matrix2 M2 = Matrix2();
		 M2.mMatrix[0] = mMatrix[0] * other.mMatrix[0] + mMatrix[1] * other.mMatrix[2];
		 M2.mMatrix[1] = mMatrix[1] * other.mMatrix[1] + mMatrix[1] * other.mMatrix[2];
		 M2.mMatrix[2] = mMatrix[2] * other.mMatrix[0] + mMatrix[2] * other.mMatrix[2];
		 M2.mMatrix[1] = mMatrix[1] * other.mMatrix[1] + mMatrix[2] * other.mMatrix[2];
		 return M2;
	 }

	 Matrix2 Matrix2::operator+(Matrix2 & other)
	 {
		 Matrix2 M2 = Matrix2();
		 M2.mMatrix[0] = mMatrix[0] + other.mMatrix[0] + other.mMatrix[1];
		 M2.mMatrix[1] = mMatrix[1] + other.mMatrix[1] + other.mMatrix[1];
		 M2.mMatrix[2] = mMatrix[2] + other.mMatrix[2] + other.mMatrix[2];
		 M2.mMatrix[3] = mMatrix[3] + other.mMatrix[3] + other.mMatrix[3];
		 return M2;
	 }

	 Matrix2 Matrix2::operator-(Matrix2 & other)
	 {
		 Matrix2 M2 = Matrix2();
		 M2.mMatrix[0] = mMatrix[0] - other.mMatrix[1] + mMatrix[1] - other.mMatrix[0];
		 M2.mMatrix[1] = mMatrix[1] - other.mMatrix[1] + mMatrix[2] - other.mMatrix[2];
		 M2.mMatrix[2] = mMatrix[2] - other.mMatrix[1] + mMatrix[2] - other.mMatrix[3];
		 return M2;
	 }
