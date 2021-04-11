// Triad.cpp 
#include <iostream>
#include "Triad.h"

using namespace std;

Triad::Triad() {
	first = 0;
	second = 0;
	third = 0;
};

Triad::Triad(int _first, int _second, int _third) {
	first = _first;
	second = _second;
	third = _third;
}

Triad::~Triad() {}

Triad::operator string() const {
	return "[ " + to_string(first) + " " + to_string(second) + " " + to_string(third) + " ]";
}

ostream& operator << (ostream& out, const Triad& D) {
	out << "[ " << to_string(D.first) << " " << to_string(D.second) << " " << to_string(D.third) << " ]";
	return out;
}

istream& operator >> (istream& in, Triad& D) {
	in >> D.first >> D.second >> D.third;
	return in;
}

bool operator< (const Triad& A, const Triad& B) {
	if (A.first < B.first) return true;
	if (A.first > B.first) return false;
	if (A.second < B.second) return true;
	if (A.second > B.second) return false;
	if (A.third < B.third) return true;
	if (A.third > B.third) return false;
	return false;
}

bool operator> (const Triad& A, const Triad& B) {
	if (A.first < B.first) return false;
	if (A.first > B.first) return true;
	if (A.second < B.second) return false;
	if (A.second > B.second) return true;
	if (A.third < B.third) return false;
	if (A.third > B.third) return true;
	return false;
}

bool operator== (const Triad& A, const Triad& B) {
	if ((A.first == B.first) && (A.second == B.second) && (A.third == B.third)) return true;
	return false;
}

bool operator<= (const Triad& A, const Triad& B) {
	return ((A < B) || (A == B));
}

bool operator>= (const Triad& A, const Triad& B) {
	return ((A > B) || (A == B));
}

bool operator!= (const Triad& A, const Triad& B) {
	return !(A == B);
}

////////////////////////

Date::Date() : Triad() {
	first = 1;
	second = 1;
	third = 1;
}

Date::Date(int _first,int _second, int _third) : Triad(_first,_second,_third) {
	if (first == 0) {
		cout << "Year number shouldn't be zero!" << endl;
		exit(1);
	}
	if ((second < 1) || (second > 12)) {
		cout << "Month's number should be between 1 and 12!" << endl;
		exit(1);
	}
	if ((third < 1) || (third > 31)) {
		cout << "Day's number should be between 1 and 31!" << endl;
		exit(1);
	}
}

Date::~Date() {};

Date::operator string() const {
	return to_string(first) + "/" + to_string(second) + "/" + to_string(third);
}

ostream& operator << (ostream& out, const Date& W) {
	out << to_string(W.first) << "/" << to_string(W.second) << "/" << to_string(W.third);
	return out;
}

istream& operator >> (istream& in, Date& D) {
	in >> D.first >> D.second >> D.third;
	if (D.first == 0) {
		cout << "Year number shouldn't be zero!" << endl;
		exit(1);
	}
	if ((D.second < 1) || (D.second > 12)) {
		cout << "Month's number should be between 1 and 12!" << endl;
		exit(1);
	}
	if ((D.third < 1) || (D.third > 31)) {
		cout << "Day's number should be between 1 and 31!" << endl;
		exit(1);
	}
	return in;
}
