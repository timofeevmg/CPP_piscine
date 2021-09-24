#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int		value;
	static const int	bits = 8;

public:
	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const &_fixed);

	Fixed	&operator=(Fixed const &_fixed);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
