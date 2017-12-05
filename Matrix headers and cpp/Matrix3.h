#pragma once
#include <iostream>
using namespace std;
class Matrix3
{
public:
	float mMatrix[4];//Creates a matrix variable with 4 indexes.
	Matrix3();//Creates a default constructor.
	Matrix3(float a, float b, float c, float d);//Creates a overloaded constructor with 4 floats as arguements.
	Matrix3 RotationX(float angle);//This function makes it possible for the Xaxis to be rotated.
	Matrix3 RotationY(float angle);//This function makes it possible for the Yaxis to be rotated.
	Matrix3 RotationZ(float angle);//This function makes it possible for the Zaxis to be rotated.
	Matrix3 operator*(Matrix3&other);//This function allows one matrix to be mutiplied with an other matrix.
	Matrix3	operator+(Matrix3&other);//This function allows one matrix to be added with an other matrix.
	Matrix3 operator-(Matrix3&other);//This function allows one matrix to be subtracted with an other matrix.
};






