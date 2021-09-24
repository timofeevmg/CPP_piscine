#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	const Fixed x;
	const Fixed y;

public:
	Point();
	~Point();
	Point(const Point& p);
	Point(const float fx, const float fy);

	Fixed	getFixedX();
	Fixed	getFixedY();

	Point&	operator=(const Point& _p);
};

bool	bsp(const Point a, const Point b, const Point c, \
		const Point point);

#endif
