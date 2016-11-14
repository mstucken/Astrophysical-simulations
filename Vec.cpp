#include <iostream>
#include "Vec.h"
#include <cmath>

using namespace std;


Vec::Vec()
{
	_x = 0;
	_y = 0;
	_z = 0;
}

Vec::Vec(double x, double y, double z)
{
	_x = x;
	_y = y;
	_z = z;
}


double Vec::x()
{
	return _x;
}

double Vec::y()
{
	return _y;
}

double Vec::z()
{
	return _z;
}

Vec& Vec::operator+=(Vec v)
{
	_x += v._x;
	_y += v._y;
	_z += v._z;
	return *this;
}

Vec& Vec::operator-=(Vec v)
{
	_x -= v._x;
	_y -= v._y;
	_z -= v._z;
	return *this;
}

Vec& Vec::operator*=(double v)
{
	_x *= v;
	_y *= v;
	_z *= v;
	return *this;
}

Vec& Vec::operator/=(double v)
{
	_x /= v;
	_y /= v;
	_z /= v;
	return *this;
}

double Vec::norm()
{
	double r = sqrt(_x*_x + _y*_y + _z*_z); 
	return r; 
}

double Vec::norm2()
{
	double r = sqrt(_x*_x + _y*_y + _z*_z); 
	return r*r;
}

double Vec::norm3()
{
	double r = sqrt(_x*_x + _y*_y + _z*_z); 
	return r*r*r;
}

Vec operator+(Vec a, Vec b) { return a += b; } 
Vec operator-(Vec a, Vec b) { return a -= b; }
Vec operator*(Vec a, double s) { return a *= s; }
Vec operator*(double s, Vec b) { return b *= s; }
Vec operator/(Vec a, double s) { return a /= s; }


/*int main()
{
	Vec a;
	Vec b(1,2,3);
	cout << a.x() << " " << b.y() << endl;
	a += b;
	cout << a.x() << " " << a.y() << " " << a.z() << endl;
	Vec c = a+b;
	cout << c.x() << " " << c.y() << " " << c.z() << endl;
	cout << a.norm() << endl;
}*/
