#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int		value;
	static const int	bits = 8;

public:
	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const &_fixed);
	Fixed(int const intNum);
	Fixed(float const floatNum);

	Fixed	& operator=(Fixed const &_fixed);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed &_fixed);

#endif
