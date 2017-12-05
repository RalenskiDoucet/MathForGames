#include "Matrixs2.h"
#include <iostream>

	 Matrix2::Matrix2()
	 {
		 mMatrix[4];
	 }
	 Matrix2::Matrix2(float a, float b, float c, float d)// assigns a identy to the index of the matrix.
	 {
		 mMatrix[0] = a; mMatrix[1] = b;
		 mMatrix[2] = c; mMatrix[3] = d;
	 }
	 Matrix2 Matrix2::RotationX(float angle)//Rotates the Xaxis.
	 {
		 //radians
		 //Return a matrix not a float
		 float radains = ((angle * 3.1415926535897) / 180);
		 Matrix2 *rotate = new Matrix2(cos(radains), sin(radains), -sin(radains), cos(radains));
		 return *rotate;
		 //*rotate * *this

	 }
	 Matrix2 Matrix2::RotationY(float angle)//Rotates the Yaxis.
	 {
		 float radains = ((angle * 3.1415926535897) / 180);
		 Matrix2 *rotate = new Matrix2(cos(radains), sin(radains), -sin(radains), cos(radains));
		 return *rotate * *this;
	 }
	 Matrix2 Matrix2::RotationZ(float angle)//Rotates the Zaxis.
	 {
		 float radains = ((angle * 3.1415926535897) / 180);
		 Matrix2 *rotate = new Matrix2(cos(radains), sin(radains), -sin(radains), cos(radains));
		 return *rotate * *this;
	 }
	 Matrix2 Matrix2::operator*(Matrix2 & other)//mutiplies one matrix with anohter matrix.And returns the new matrix.
	 {
		 Matrix2 M2 = Matrix2();
		 M2.mMatrix[0] = mMatrix[0] * other.mMatrix[0] + mMatrix[1] * other.mMatrix[3];
		 M2.mMatrix[0] = mMatrix[1] * other.mMatrix[1] + mMatrix[1] * other.mMatrix[2];
		 M2.mMatrix[2] = mMatrix[2] * other.mMatrix[0] + mMatrix[3] * other.mMatrix[2];
		 M2.mMatrix[3] = mMatrix[2] * other.mMatrix[1] + mMatrix[3] * other.mMatrix[3];
		 return M2;
	 }
	 Matrix2 Matrix2::operator+(Matrix2 & other)//Adds the values of one Matrix with the Values of another Matrix.
	 {
		 Matrix2 M2 = Matrix2();
	    M2.mMatrix[0] = other.mMatrix[0] + mMatrix[0];
		M2.mMatrix[1] = other.mMatrix[1] + mMatrix[1];
		M2.mMatrix[2] = other.mMatrix[2] + mMatrix[2];
		M2.mMatrix[3] = other.mMatrix[3] + mMatrix[3];
		return M2;
	 }
	 Matrix2 Matrix2::operator-(Matrix2 & other)
	 {
		 Matrix2 M2 = Matrix2();
		 M2.mMatrix[0] = other.mMatrix[0] - mMatrix[0];
		 M2.mMatrix[1] = other.mMatrix[1]  -mMatrix[1];
		 M2.mMatrix[2] = other.mMatrix[2] - mMatrix[2];
		 M2.mMatrix[3] = other.mMatrix[3]  -mMatrix[3];
		 return M2;
	 }
