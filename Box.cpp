#include <iostream>
#include "Vec.h"
#include "Particle.h"
#include "vector.h"


using namespace std;

Box::Box()
{
	xmin = -1;
	xmax = 1;
	ymin = -1;
	ymax = 1;
	zmin = -1;
	zmax = 1;
}

Box::Box(double x1, double x2, double y1, double y2, double z1, double z2)
{
	xmin = x1;
	xmax = x2;
	ymin = y1;
	ymax = y2;
	zmin = z1;
	zmax = z2;
}

double Box::xmin()
{
	return xmin;
}

double Box::xmax()
{
	return xmax;
}

double Box::ymin()
{
	return ymin;
}
double Box::ymax()
{
	return ymax;
}

double Box::zmin()
{
	return zmin;
}
double Box::zmax()
{
	return zmax;
}

vector<Particle> Box::Particles()
{
	return Particles;
}

void Add

