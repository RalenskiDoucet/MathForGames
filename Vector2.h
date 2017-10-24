#pragma once
class Vector2
{
public:
	float mX;
	float mY;
	Vector2();
	Vector2(float X, float Y);
	Vector2 operator+(Vector2&other);
	Vector2 operator-(Vector2&other);
	Vector2 operator*(Vector2&other);
};
