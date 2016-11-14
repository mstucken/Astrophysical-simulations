#ifndef BOX_H
#define BOX_H

#include <iostream>
#include "vector.h"
#include "Particle.h"
#include "Vec.h"

class Box
{
	private:
	
	Vector<Particle> Particles;
	double xmin, xmax, ymin, ymax, zmin, zmax;
	
	public:
	
	Box();
	Box(double, double, double, double, double, double);
	
	double xmin();
	double xmax();
	double ymin();
	double ymax();
	double zmin();
	double zmax();
	Vector<Particle> Particles();
	
	void AddParticle();
	void SetParticles(vector<Particles>);
};




#endif /* BOX_H */
