#include <iostream>
#include <stdlib.h>
#include "Particle.h"
#include "Vec.h"
#include "Vec.cpp"


using namespace std;

Particle::Particle()
{
	Vec temp;
	_r = temp;
	_v = temp;
	_m = 0;
}

Particle::Particle(Vec r, Vec v, double mass)
{
	_r = r;
	_v = v;
	_m = mass;
}

Particle::Particle(double rx, double ry, double rz, double vx, double vy, double vz, double m)
{
	Vec r(rx, ry, rz);
	Vec v(vx, vy, vz);
	_r = r;
	_v = v;
	_m = m;
}

Vec Particle::r()
{
	return _r;
}

Vec Particle::v()
{
	return _v;
}

double Particle::m()
{
	return _m;
}

void Particle::SetValues(Vec r, Vec v, double m)
{
	_r = r;
	_v = v;
	_m = m;
}

void Particle::SetValues(double rx,double ry, double rz, double vx, double vy, double vz, double m)
{
	Vec r(rx, ry, rz);
	Vec v(vx, vy, vz);
	_r = r;
	_v = v;
	_m = m;
}

/*int main()
{
	Particle a;
	Vec d(10,11,12);
	Vec e(13,14,15);
	Particle b(d,e,15);
	Particle c(1,2,3,4,5,6,7);
	cout << a.r().x() << "" << b.v().y() << " " << c.m() << endl;
	Vec f(20,21,22);
	Vec g(23,24,25);
	b.SetValues(f,g,26);
	c.SetValues(31,32,33,34,35,36,37);
	cout << a.r().x() << "" << b.v().y() << " " << c.m() << endl;
}*/


