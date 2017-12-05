#pragma once
#include <iostream>
using namespace std;
class Matrix4
{
public:
	float mMatrix[4];//Creates a matrix variable with 4 indexes.
	Matrix4();	//Creates a default constructor.
	Matrix4(float a, float b, float c, float d);//Creates a overloaded constructor with 4 floats as arguements.
	Matrix4 RotationX(float angle);//This function makes it possible for the Xaxis to be rotated.
	Matrix4 RotationY(float angle);//This function makes it possible for the Yaxis to be rotated.
	Matrix4 RotationZ(float angle);//This function makes it possible for the Zaxis to be rotated.
	Matrix4 operator*(Matrix4&other);	//This function allows one matrix to be mutiplied with an other matrix.
	Matrix4 operator+(Matrix4&other);//This function allows one matrix to be added with an other matrix.
	Matrix4 operator-(Matrix4&other);//This function allows one matrix to be subtracted with an other matrix.
};


