// lab3.1.cpp
#include "Triad.h"
#include <iostream>

using namespace std;

int main() {
	Triad t1;
	cout << "t1:" << t1 << endl;

	Triad t2(2000, 5, 27);
	cout << "t2:" << t2 << endl;

	cout << "(string)t2: " << (string)t2 << endl;

	Date d1;
	cout << "d1:" << d1 << endl;
	cout << "d1.setYear(2013): " << endl;
	d1.setYear(2013);
	cout << "d1.setMonth(11): " << endl;
	d1.setMonth(11);
	cout << "d1.setDay(29): " << endl;
	d1.setDay(29);
	cout << "d1: " << d1 << endl;

	Date d2(2002,10,27);
	cout << "d2:" << d2 << endl;
	
	cout << "(string)d2: "<< (string)d2 << endl;

	cout << "d1 > d2: " << (d1 > d2) << endl;
	cout << "d1 < d2: " << (d1 < d2) << endl;
	cout << "d1 >= d2: " << (d1 >= d2) << endl;
	cout << "d1 <= d2: " << (d1 <= d2) << endl;
	cout << "d1 == d2: " << (d1 == d2) << endl;
	cout << "d1 != d2: " << (d1 != d2) << endl;

	cout << "d2.Base(): " << d2.Base() << endl;

	Date d3;
	cout << "Enter d3(year, month, day): " << endl;
	cin >> d3;
	cout << "d3: " << d3 << endl;

	return 0;
}
