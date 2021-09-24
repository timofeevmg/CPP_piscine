#include "Point.hpp"
#include <iomanip>

int		main()
{
	Point	a(1.0, 1.0);
	Point	b(6.0, 6.0);
	Point	c(8.0, 3.0);
	Point	pointIn(4.5, 3.5);
	Point	pointOut(2.5, 5.5);

	std::cout << std::boolalpha;
	std::cout << bsp(a, b, c, pointIn) << std::endl;
	std::cout << bsp(a, b, c, pointOut) << std::endl;
	
	return 0;
}
