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

Fixed::Fixed(int const intNum)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = intNum << this->bits;
}

Fixed::Fixed(float const floatNum)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(floatNum * (1 << this->bits));
}

Fixed	&Fixed::operator=(Fixed const &_fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this->value != _fixed.value)
		this->value = _fixed.value;

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

float	Fixed::toFloat(void) const
{
	return ((float)(this->value)) / (float)(1 << this->bits);
}

int		Fixed::toInt(void) const
{
	return this->value >> this->bits;
}

std::ostream& operator<<(std::ostream& out, const Fixed &_fixed)
{
	out << _fixed.toFloat();
	return out;
}
