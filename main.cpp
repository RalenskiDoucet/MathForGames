#include<iostream>
#include "Vector2.h"
#include"Vector3.h"
#include "Vector4.h"
#include"Matrixs2.h"
#include"Matrix3.h"
#include"Matrix4.h"
#include <math.h>
#include <assert.h>

int main()
{
	
	Vector2 a = Vector2(1, 1);
	Vector2 b = Vector2(3, 3);
	Vector2 c = a + b;
	assert(c == a + b);
	Vector2 d = Vector2(9, 9);
	Vector2 e = Vector2(10, 10);
	Vector2 f = d - e;
	assert(f == d - e);
	Vector2 g = Vector2(40, 20);
	Vector2 h = Vector2(25, 50);
	Vector2 i = g * h;
	assert(i == g*h);
	Vector2 j = Vector2(7, 7);
	Vector2 k = Vector2(18, 9);
	Vector2 l = j + k;
	assert(l == j + k);
	Vector2 m = Vector2(1, 1);
	Vector2 n = Vector2(15, 30);
	Vector2 o = n - m;
	assert(o == n - m);
	Vector2 p = Vector2(75, 25);
	Vector2 q = Vector2(125, 85);
	Vector2 r = p*q;
	assert(r == p*q);
	Vector2 s = Vector2(4, 4);
	Vector2 t = Vector2(5, 5);
	Vector2 u = r + s;
	assert(u == r + s);
	Vector2 v = Vector2(17, 14);
	Vector2 w = Vector2(18, 9);
	Vector2 x = v - w;
	assert(x == v - w);
	Vector2 y = v*a;
	assert(y == v*a);
	Vector2 z = d + q;
	assert(z == d + q);


	bool num1 = a == b;
	assert(num1 == false);
	bool num2 = d == e;	
	assert(num2 == false);
	bool num3 = g == h;
	assert(num3 == false);
	bool num4 = j == k;	
	assert(num4 == false);
	bool num5 = m == n;
	assert(num5 == false);
	bool num6 = p == q;	
	assert(num6 == false);
	bool num7 = s == t;
	assert(num7 == false);
	bool num8 = w == x;	
	assert(num8 == false);
	bool num9 = a == m;
	assert(num9 == true);
	bool num10 = j == t;
	assert(num10 == false);
	bool num11 = u == v;
	assert(num11 == false);
	bool num12 = w == x;	
	assert(num12 == false);
	bool num13 = y == z;
	assert(num13 == false);


	a.Normalise();
	b.Magnitude();					
	c.Normalise();		
	d.Magnitude();
	e.Normalise();
	f.Magnitude();
	g.Normalise();
	h.Magnitude();
	i.Normalise();
	j.Magnitude();
	k.Normalise();
	l.Magnitude();
	m.Normalise();
	n.Magnitude();
	r.Normalise();
	s.Magnitude();
	t.Normalise();
	u.Magnitude();
	v.Normalise();
	w.Magnitude();
	x.Normalise();
	y.Magnitude();
	z.Normalise();


	Vector2 V2;
 	V2.input();
	V2.Input();
	Vector3 V3;
	V3.input();
	V3.Input();
	Vector4 V4;
	V4.input();
	V4.Input();


	Matrix2 M2; Matrix3 M3; Matrix4 M4;
	M3.mMatrix[2] == M3.mMatrix[3] * M3.mMatrix[2];
	M2.mMatrix[2] == M2.mMatrix[2] + M2.mMatrix[1];
	M4.mMatrix[3] == M4.mMatrix[3] - M4.mMatrix[2];

	
} 
	