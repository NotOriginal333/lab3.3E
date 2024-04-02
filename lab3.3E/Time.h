#pragma once
#include "Triad.h"
#include <string>
#include <sstream>

class Time :
    public Triad
{
	Triad triad;
public:
	Time();
	Time(Triad);
	Time(const Time&);
	~Time() { };

	Triad getTriad() { return triad; };

	void setTriad(Triad t) { triad = t; };

	Time& operator ++();
	Time& operator --();
	Time operator ++(int);
	Time operator --(int);

	friend Time operator+(Time r, int n);
	friend Time operator*(Time r, int n);
	void incremSec();

	Time operator=(Time t);

	friend ostream& operator << (ostream& out, const Time& r);
	friend istream& operator >> (istream& in, Time& r);

	operator std::string() const;
};

