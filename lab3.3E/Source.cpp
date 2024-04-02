#include "Time.h"
#include <iostream>

using namespace std;

int main() {
	Time t1, res;
	Triad tr1, tr2;

	cout << "t1 = "; cin >> t1;
	cout << t1 << endl;

	cout << "tr1 = "; cin >> tr1;
	Time t2(tr1);
	cout << "t2: " << t2 << endl;

	++t2;
	t2++;
	t2.incremSec();
	cout << "t2(increm) = " << t2 << endl;

	cout << "t2: " << t2;

	int n;
	cout << "(minute) n = "; cin >> n;
	res = t2 + n;
	cout << "t2 + n =" << res.getTriad().getMin() << endl;
	cout << "(second) n = "; cin >> n;
	res = t2 * n;
	cout << "t2 * n = " << res.getTriad().getSec() << endl;

	tr2 = t1.getTriad();
	cout << "tr2: " << endl;
	cout << "tr2: " << tr2 << endl;

	cout << "count = " << Triad::Count() << endl;
	cout << "count = " << Time::Count() << endl;
	cout << "count = " << Object::Count() << endl;
}