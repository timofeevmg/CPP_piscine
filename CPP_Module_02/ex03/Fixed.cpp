#include "Fixed.hpp"

///////////////////////////////////////
////////////  CONSTRUCTORS  ///////////
///////////////////////////////////////
Fixed::Fixed()
{
	this->value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& _fixed)
{
	*this = _fixed;
}

Fixed::Fixed(const int intNum)
{
	this->value = intNum << this->bits;
}

Fixed::Fixed(const float floatNum)
{
	this->value = roundf(floatNum * (1 << this->bits));
}

///////////////////////////////////////
////////////  ACCESSORS  //////////////
///////////////////////////////////////
int		Fixed::getRawBits() const
{
	return this->value;
}

void	Fixed::setRawBits(const int raw)
{
	this->value = raw;
}

///////////////////////////////////////
/////  ASSIGNATION OPERATOR  //////////
////////////  OVERLOADS  //////////////
///////////////////////////////////////
Fixed&	Fixed::operator=(const Fixed& _fixed)
{
	if (*this != _fixed)
		this->value = _fixed.value;
	return *this;
}

///////////////////////////////////////
//////  COMPARISON OPERATORS  /////////
////////////  OVERLOADS  //////////////
///////////////////////////////////////
bool	Fixed::operator<(const Fixed& f2) const
{
	return this->value < f2.value;
}

bool	Fixed::operator>(const Fixed& f2) const
{
	return f2 < *this;
}

bool	Fixed::operator>=(const Fixed& f2) const
{
	return !(*this < f2);
}

bool	Fixed::operator<=(const Fixed& f2) const
{
	return !(*this > f2);
}

bool	Fixed::operator==(const Fixed& f2) const
{
	return !(*this > f2 || *this < f2);
}

bool	Fixed::operator!=(const Fixed& f2) const
{
	return !(*this == f2);
}

///////////////////////////////////////
//////  ARITHMETIC OPERATORS  /////////
////////////  OVERLOADS  //////////////
///////////////////////////////////////
Fixed&	Fixed::operator+=(const Fixed& f2)
{
	this->value += f2.value;
	return *this;
}

Fixed	Fixed::operator+(const Fixed& f2) const
{
	Fixed	tmp = *this;
	return tmp += f2;
}

Fixed&	Fixed::operator-=(const Fixed& f2)
{
	this->value -= f2.value;
	return *this;
}

Fixed	Fixed::operator-(const Fixed& f2) const
{
	Fixed	tmp = *this;
	return tmp -= f2;
}

Fixed	Fixed::operator*(const Fixed& f2)
{
	Fixed multi;

	int	tmp = this->value * f2.value / (1 << this->bits);
	multi.setRawBits(tmp);
	return multi;
}

Fixed	Fixed::operator/(const Fixed& f2)
{
	Fixed div;
	
	int	tmp = this->value * (1 << this->bits) / f2.value;
	div.setRawBits(tmp);
	return div;
}

const Fixed		operator+(const Fixed& f1, const Fixed& f2)
{
	Fixed	tmp(f1.getRawBits() + f2.getRawBits());
	return tmp;
}

const Fixed		operator-(const Fixed& f1, const Fixed& f2)
{
	Fixed	tmp(f1.getRawBits() - f2.getRawBits());
	return tmp;
}

///////////////////////////////////////
///  INCREMENT/DECREMENT OPERATORS  ///
////////////  OVERLOADS  //////////////
///////////////////////////////////////

//prefix
Fixed&	Fixed::operator++()
{
	++this->value;
	return *this;
}

Fixed&	Fixed::operator--()
{
	--this->value;
	return *this;
}

//postfix
const Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;

	++(*this);
	return tmp;
}

const Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;

	--(*this);
	return tmp;
}

///////////////////////////////////////
////////////  CONVERTERS  /////////////
///////////////////////////////////////
float	Fixed::toFloat() const
{
	return ((float)(this->value)) / (float)(1 << this->bits);
}

int		Fixed::toInt() const
{
	return this->value >> this->bits;
}

///////////////////////////////////////
/////////  MIN/MAX OVERLOADS  /////////
///////////////////////////////////////
Fixed&	Fixed::min(Fixed &f1, Fixed &f2)
{
	return (f1 < f2) ? f1 : f2;
}

const Fixed&	Fixed::min(Fixed const &f1, Fixed const &f2)
{
	return (f1 < f2) ? f1 : f2;
}

Fixed&	Fixed::max(Fixed &f1, Fixed &f2)
{
	return (f1 > f2) ? f1 : f2;
}

const Fixed&	Fixed::max(Fixed const &f1, Fixed const &f2)
{
	return (f1 > f2) ? f1 : f2;
}

///////////////////////////////////////
//////////  OUTPUT OVERLOADS  /////////
///////////////////////////////////////
std::ostream&	operator<<(std::ostream& out, const Fixed& _fixed)
{
	out << _fixed.toFloat();
	return out;
}
