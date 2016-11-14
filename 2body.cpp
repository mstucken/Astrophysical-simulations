#define _USE_MATH_DEFINES
#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

// klasse 3 vector
class Vec {
	double _x;
	double _y;
	double _z;

public:
	// instellen van de x,y en z waarde
	Vec() { _x = 0; _y = 0; _z = 0; } 
	Vec(double x, double y, double z)
	{
		_x = x; _y = y; _z = z;
	}

	double x() const { return _x; }
	double y() const { return _y; }
	double z() const { return _z; }

	//implementatie standaardoperatoren voor vectoren

	Vec& operator+=(Vec v) { _x += v._x; _y += v._y; _z += v._z; return *this; } 
	Vec& operator-=(Vec v) { _x -= v._x; _y -= v._y; _z -= v._z; return *this; }
	Vec& operator*=(double s) { _x *= s; _y *= s; _z *= s; return *this; }
	Vec& operator/=(double s) { _x /= s; _y /= s; _z /= s; return *this; }

	// operatoren voor de norm

	double norm() const { double r = sqrt(_x*_x + _y*_y + _z*_z); return r; } 
	double norm2() const { double r = sqrt(_x*_x + _y*_y + _z*_z); return r*r; }
	double norm3() const { double r = sqrt(_x*_x + _y*_y + _z*_z); return r*r*r; }
};

//def operatoren

Vec operator+(Vec a, Vec b) { return a += b; } 
Vec operator-(Vec a, Vec b) { return a -= b; }
Vec operator*(Vec a, double s) { return a *= s; }
Vec operator*(double s, Vec b) { return b *= s; }
Vec operator/(Vec a, double s) { return a /= s; }

class particle {
public:
	Vec r;
	Vec v;
	double m;
	particle() { r = Vec(0, 0, 0); v = Vec(0, 0, 0); m = 0; }
	void SetValues(double x, double y, double z, double vx, double vy, double vz, double nm) { r = Vec ( x,  y,  z); v = Vec ( vx,  vy,  vz); m =  nm; }

};
// the main function

int main()
{
	cout << 'x' << endl;
	particle p;
	p.SetValues(1, 1, 1, 1, 1, 1, 1);
	cout << p.r.norm() << endl;

/*
	cout << "Writing to file '2body.txt'..." << endl;
	cout << "Writing to file 'energie.txt'..." << endl;
	ofstream outfile("2body.txt");
	ofstream outfile2("energie.txt");
	outfile << setprecision(8);

	//beginwaarden, nog in tekstbestandje te zetten

	double h = 0.01; 
	double µ = 0.01;

	Vec r(1, 0, 1);
	Vec v(0, 0.06, 0);

	 
	// Vec r( , , );
	// Vec v( , , );

	double i = 0;

	// begincondities voor de leapfrog

	Vec r1 = r + h / 2 * v - h*h*µ / 8 * r / abs(r.norm3());
	Vec v1 = v;
	Vec vg = (v + v1) / 2.;
	double E = v.norm2() / 2 - µ / r1.norm();
	outfile << r1.x() << ' ' << r1.y() << ' ' << r1.z() << endl;
	outfile2 << i << ' ' << E << endl;

	//leapfrog lus

	for (double i = h; i <= 100; i += h)
	{

		v = v1;
		v1 = v1 - h*µ*r1 / abs(r1.norm3());
		vg = (v + v1) / 2.;
		r1 = r1 + h*v1;
		E = vg.norm2() / 2 - µ / r1.norm();
		outfile << r1.x() << ' ' << r1.y() << ' ' << r1.z() << endl;
		outfile2 << i << ' ' << E << endl;

	}
	outfile.close();
	outfile2.close();

	cout << "Done writing." << endl;
	
*/

}
