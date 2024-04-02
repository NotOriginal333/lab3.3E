#include "Time.h"
#include <iostream>
#include <sstream>

using namespace std;

Time Time::operator=(Time t) {
    triad = t.triad;
    return *this;
}

Time::Time() {
    triad.setHour(0);
    triad.setMin(0);
    triad.setSec(0);
}

Time::Time(Triad t) {
    triad = t;
}

Time::Time(const Time& t) {
    this->triad = t.triad;
}

istream& operator >> (istream& in, Time& r) {
    in >> r.triad;
    return in;
}

Time::operator string () const {
    stringstream ss;
    ss << "h: " << triad.getHour() << "\nm: " << triad.getMin() << "\ns: " << triad.getSec() << endl;
    return ss.str();
}


ostream& operator << (ostream& out, const Time& r) {
    out << string(r);
    return out;
}

void Time::incremSec() {
    triad.incremSec();
}

Time operator+(Time r, int n) {
    Time res;
    res.triad.setMin(r.triad.getMin() + n);
    return res;
}

Time operator*(Time r, int n) {
    Time res;
    res.triad.setSec(r.triad.getSec() + n);
    return res;
}

Time& Time::operator ++() {
    ++triad;
    return *this;
}

Time& Time::operator --() {
    --triad;
    return *this;
}

Time Time::operator ++(int) {
    Time n(*this);
    triad++;
    return n;
}

Time Time::operator --(int) {
    Time n(*this);
    triad--;
    return n;
}
