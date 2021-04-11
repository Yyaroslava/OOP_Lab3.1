// Triad.h
#pragma once
#include <string>
#include <sstream> 

using namespace std;

class Triad {
protected:
	int first;
	int second;
	int third;
public:
	Triad();
	Triad(int,int,int);
	~Triad();

	void setFirst(int _first) { first = _first; };
	void setSecond(int _second) { second = _second; };
	void setThird(int _third) { third = _third; };
	int getFirst() { return first; };
	int getSecond() { return second; };
	int getThird() { return third; };

	Triad& Base() { return *this; }; // returns Base class object
	operator string() const;
	friend ostream& operator << (ostream&, const Triad&);
	friend istream& operator >> (istream&, Triad&);
	friend bool operator< (const Triad&, const Triad&);
	friend bool operator> (const Triad&, const Triad&);
	friend bool operator== (const Triad&, const Triad&);
	friend bool operator<= (const Triad&, const Triad&);
	friend bool operator>= (const Triad&, const Triad&);
	friend bool operator!= (const Triad&, const Triad&);
};

class Date : public Triad {
protected:
public:
	Date();
	Date(int, int, int);
	~Date();

	void setYear(int _first) { first = _first; };
	void setMonth(int _second) { second = _second; };
	void setDay(int _third) { third = _third; };
	int getYear() { return first; };
	int getMonth() { return second; };
	int getDay() { return third; };

	operator string() const;
	friend ostream& operator << (ostream&, const Date&);
	friend istream& operator >> (istream&, Date&);
};
