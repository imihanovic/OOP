#include <iostream>
class timer {
	int h, m;
	double s;
public:
	timer() {
		h = 0;
		m = 0;
		s = 0;
	}
	timer(int hou, int min, double sec);
	int getHours();
	int getMinutes();
	void setMinutes(int min);
	double getSeconds();
	void setSeconds(double sec);
	timer operator+=(const timer& newTimer);
	timer operator+(const timer& newTimer);
	timer operator/=(const size_t& v);
	timer operator/(const size_t& v);
	operator double();
	timer operator-(const timer& max);
	bool operator<(const timer& newTimer);
	friend std::ostream& operator<<(std::ostream& os, const timer& t);
};
class penalty {

	double seconds;
public:
	penalty() {
		seconds = 0;
	}
	penalty(double s) {
		seconds = s;
	}
	penalty operator()(timer& t);
};
#pragma once
