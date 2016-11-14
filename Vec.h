#ifndef VEC_H
#define VEC_H


#include <iostream>

using namespace std;

class Vec
{
	private:
	
	double _x;
	double _y;
	double _z;
	
	public:
	
	Vec();
	Vec(double x, double y, double z);
	
	double x(); 
	double y(); 
	double z(); 

	//implementatie standaardoperatoren voor vectoren

	Vec& operator += (Vec);
	Vec& operator -= (Vec);
	Vec& operator *= (double);
	Vec& operator /= (double);

	// operatoren voor de norm

	double norm();
	double norm2();
	double norm3();
};

#endif /* VEC_H */
