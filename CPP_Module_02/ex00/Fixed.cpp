#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &_fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = _fixed;
}

Fixed	&Fixed::operator=(Fixed const &_fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = _fixed.getRawBits();

	return *this;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;

	return this->value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}
