#include "Point.hpp"

Point::Point() : x(0), y(0)
{
} 

Point::~Point()
{
}

Point::Point(const Point& p) : x(p.x), y(p.y)
{
}

Point::Point(const float fx, const float fy) : x(fx), y(fy)
{
}

Fixed	Point::getFixedX()
{
	return this->x;
}

Fixed	Point::getFixedY()
{
	return this->y;
}

Point&	Point::operator=(const Point& _p)
{
	Point tmp(_p);
	return *this;
}
