#include "Fixed.hpp"

int		main(void)
{
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	std::cout << "-------------additional-------------" << std::endl;
	a.setRawBits(42);
	std::cout << a.getRawBits() << std::endl;
	c = a;
	std::cout << c.getRawBits() << std::endl;
	std::cout << "------------------------------------" << std::endl;
	return 0;
}
