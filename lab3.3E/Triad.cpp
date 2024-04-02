#include "Triad.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

Triad Triad::operator=(Triad t) {
	hour = t.hour;
	min = t.min;
	sec = t.sec;
	return *this;
}

Triad::Triad() {
	hour = 0;
	min = 0;
	sec = 0;
}

Triad::Triad(int h, int m, int s) {
	hour = h;
	min = m;
	sec = s;
}

Triad::Triad(const Triad& t) {
	this->hour = t.hour;
	this->min = t.min;
	this->sec = t.sec;
}

void Triad::incremSec() {
	int tmp = getSec();
	setSec(++tmp);
}

istream& operator >> (istream& in, Triad& r) {
	int h, m, s;
	do {
		cout << "Enter hour: ";
		in >> h;
		cout << "Enter minute: ";
		in >> m;
		cout << "Enter second: ";
		in >> s;
	} while (!(h < 24 && h >= 0 && m < 60 && m >= 0 && s < 60 && s >= 0));
	r.setHour(h);
	r.setMin(m);
	r.setSec(s);
	return in;
}

ostream& operator << (ostream& out, const Triad& r) {
	out << string(r);
	return out;
}

Triad::operator string () const {
	stringstream ss;
	ss << "Hour: " << getHour() << endl;
	ss << "Minute: " << getMin() << endl;
	ss << "Second: " << getSec() << endl;
	return ss.str();
}

Triad& Triad::operator ++() {
	hour++;
	return *this;
}

Triad& Triad::operator --() {
	hour--;
	return *this;
}

Triad Triad::operator ++(int) {
	Triad n(*this);
	min++;
	return n;
}

Triad Triad::operator --(int) {
	Triad n(*this);
	min--;
	return n;
}