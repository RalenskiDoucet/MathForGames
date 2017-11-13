#include<iostream>
#include "Vector2.h"
#include"Vector3.h"
#include "Vector4.h"
#include"Matrixs2.h"

int main()
{
	
	Vector2 a = Vector2(1, 1);
	Vector2 b = Vector2(3, 3);
	Vector2 c = a + b;
	Vector2 d = Vector2(9, 9);
	Vector2 e = Vector2(10, 10);
	Vector2 f = d - e;
	Vector2 g = Vector2(40, 20);
	Vector2 h = Vector2(25, 50);
	Vector2 i = g * h;
	Vector2 j = Vector2(7, 7);
	Vector2 k = Vector2(18, 9);
	Vector2 l = j + k;
	Vector2 m = Vector2(1, 1);
	Vector2 n = Vector2(15, 30);
	Vector2 o = n - m;
	Vector2 p = Vector2(75, 25);
	Vector2 q = Vector2(125, 85);
	Vector2 r = p*q;
	Vector2 s = Vector2(4, 4);
	Vector2 t = Vector2(5, 5);
	Vector2 u = r + s;
	Vector2 v = Vector2(17, 14);
	Vector2 w = Vector2(18, 9);
	Vector2 x = v - w;
	Vector2 y = v*a;
	Vector2 z = d + q;
							system("pause");

	bool num1 = a == b;
	bool num2 = c == d;		
	bool num3 = e == f;
	bool num4 = g == h;		
	bool num5 = i == j;
	bool num6 = k == l;		
	bool num7 = m == n;
	bool num8 = o == p;		
	bool num9 = q == r;
	bool num10 = s == t;	
	bool num11 = u == v;
	bool num12 = w == x;	
	bool num13 = y == z;
							system("pause");
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

	
} 
	