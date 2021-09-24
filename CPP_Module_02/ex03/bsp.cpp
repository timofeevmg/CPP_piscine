#include "Point.hpp"

const Fixed sign(Point &p1, Point &p2, Point &p)
{
	return ((p2.getFixedY() - p1.getFixedY()) * p.getFixedX() + \
		(p1.getFixedX() - p2.getFixedX()) * p.getFixedY() + \
		p1.getFixedX() * (p1.getFixedY() - p2.getFixedY()) + \
		p1.getFixedY() * (p2.getFixedX() - p1.getFixedX()));
}

bool	bsp(const Point a, const Point b, const Point c, \
		const Point point)
{
	Point	A(a);
	Point	B(b);
	Point	C(c);
	Point	P(point);

	Fixed	AB = sign(A, B, P);
	Fixed	BC = sign(B, C, P);
	Fixed	CA = sign(C, A, P);

	bool neg = (AB < 0) || (BC < 0) || (CA < 0);
	bool pos = (AB > 0) || (BC > 0) || (CA > 0);
	
	return !(neg && pos);
}
