#pragma once
#include <iostream>
using namespace std;
class Matrix2
{
public:
	float mMatrix[4];//Creates a matrix variable with 4 indexes.
	float Degrees;//A variable that tells the amount that the matrix is rotated.
	Matrix2();//Creates a default constructor.
	Matrix2(float a, float b, float c, float d);//Creates a overloaded constructor with 4 floats as arguements.
	Matrix2 RotationX(float angle);//This function makes it possible for the Xaxis to be rotated.
	Matrix2 RotationY(float angle);//This function makes it possible for the Yaxis to be rotated.
	Matrix2 RotationZ(float angle);//This function makes it possible for the Zaxis to be rotated.
	Matrix2 operator*(Matrix2&other);//This function allows one matrix to be mutiplied with an other matrix.
	Matrix2 operator+(Matrix2&other);//This function allows one matrix to be added with an other matrix.
	Matrix2 operator-(Matrix2&other);//This function allows one matrix to be subtracted with an other matrix.
};
