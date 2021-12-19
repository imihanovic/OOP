#include <iostream>
#include "header.h"
using namespace std;

timer::timer(int hou, int min, double sec) {
	h = hou;
	m = min;
	s = sec;
}
int timer::getHours() {
	return h;
}
int timer::getMinutes() {
	return m;
}
void timer::setMinutes(int min) {
	if (min > 0) {
		m = min;
	}
}
double timer::getSeconds() {
	return s;
}
void timer::setSeconds(double sec) {
	if (sec > 0) {
		s = sec;
	}
}
timer timer::operator+=(const timer& newTimer) {
	s += newTimer.s;
	m += newTimer.m;
	h += newTimer.h;
	if (s > 59) {
		s -= 60;
		m++;
	}
	if (m > 59) {
		m -= 60;
		h++;
	}
	return timer(h,m,s);
}
timer timer::operator+(const timer& newTimer) {
	s = s + newTimer.s;
	m = m + newTimer.m;
	h = h + newTimer.h;
	if (s > 59) {
		s -= 60;
		m++;
	}
	if (m > 59) {
		m -= 60;
		h++;
	}
	return timer(h, m, s);
}
timer timer::operator/=(const size_t& v) {
	double time = 3600 * h + 60 * m + s;
	time /= v;

	h = time / 3600;
	m = (time - (h * 3600)) / 60;
	s = (time - ((h * 3600) + (m * 60)));
	return timer(h,m,s);
}
timer timer::operator/(const size_t& v) {
	double time = 3600 * h + 60 * m + s;
	time /= v;

	h = time / 3600;
	m = (time - (h * 3600)) / 60;
	s = (time - ((h * 3600) + (m * 60)));
	return timer(h,m,s);
}
timer::operator double() {
	return(h + m + s);
}
timer timer::operator-(const timer& max) {
	int hours = h - max.h;
	int minutes = m - max.m;
	double seconds = 0;
	if (minutes) {
		seconds = (s + minutes * 60) - max.s;
	}
	else {
		seconds = s - max.s;
	}
	return timer(hours, minutes, seconds);
}
bool timer::operator<(const timer& newTimer) {
	return(h < newTimer.h && m < newTimer.m && s < newTimer.s);
}

penalty penalty::operator()(timer& t) {
	int hours = t.getHours();
	int minutes = t.getMinutes();
	double seconds = t.getSeconds() + this->seconds;
	t.setMinutes(minutes);
	if (seconds > 59) {
		seconds -= 60;
		minutes++;
	}
	t.setMinutes(minutes);
	t.setSeconds(seconds);
	return *this;
}
// instead of cout
ostream& operator<<(ostream& os, const timer& t)
{
	os << t.h << ':' << t.m << ':' << t.s << endl;
	return os;
}