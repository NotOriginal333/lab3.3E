#pragma once
#include <string>
#include "Object.h"

using namespace std;

class Triad: public Object
{
	int hour, min, sec;
public:
	Triad();
	Triad(int, int, int);
	Triad(const Triad&);
	~Triad() { };

	Triad operator=(Triad t);

	void setHour(int h) { hour = h; };
	void setMin(int m) { min = m; };
	void setSec(int s) { sec = s; };

	int getHour() const { return this->hour; };
	int getMin() const { return this->min; };
	int getSec() const { return this->sec; };

	Triad& operator ++();//hour
	Triad& operator --();//hour
	Triad operator ++(int);//min
	Triad operator --(int);//min

	void incremSec();

	friend istream& operator >> (istream& in, Triad& r);
	friend ostream& operator << (ostream& out, const Triad& r);

	operator string () const;
};

