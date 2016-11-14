#ifndef PARTICLE_H
#define PARTICLE_H

#include <iostream>
#include "Vec.h"

using namespace std;

class Particle
{
	Vec _r;
	Vec _v;
	double _m;
	
	public:
	
	Particle();
	Particle(Vec, Vec, double);
	Particle(double, double, double, double, double, double, double);
	
	Vec r();
	Vec v();
	double m();
	
	void SetValues(Vec, Vec, double);
	void SetValues(double, double, double, double, double, double, double);
	
};

#endif /* PARTICLE_H */
