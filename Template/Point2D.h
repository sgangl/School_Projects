#pragma once
#include <iostream>

template <typename element>
class Point2D {
public:
	mutable int compares;
	element x;
	element y;
	Point2D(const element &nuX, const element &nuY)
		: compares(0), x(nuX), y(nuY)
	{}
	
	bool operator<(const Point2D<element> &to) const {
		++compares;
		return (x < to.x || (x == to.x && y < to.y));
	}
};

template <typename element>
std::ostream & operator<< (std::ostream &out, const Point2D<element> &p) {
	out << "(" << p.x << ", " << p.y << ")";
	return out;
}

