#include "Fixed.hpp"

int		main(void)
{
	Fixed		a;

	const Fixed	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "----------------additional---------------" << std::endl;
	Fixed		f(987.0346f);
	std::cout << f << std::endl;

	const Fixed d(Fixed(14.98f) / Fixed(7.05f));
	std::cout << d << std::endl;

	Fixed		neg(-158);
	std::cout << neg << std::endl;

	const Fixed	t(neg / Fixed(2.95f));
	std::cout << t << std::endl;

	Fixed	num1(4.2f);
	Fixed	num2(2.1f);
	std::cout << (num1 / num2) << std::endl;
	std::cout << Fixed::max(num1, num2) << std::endl;
	return 0;
}
