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
	Fixed();
	~Fixed();
	Fixed(const Fixed& _fixed);
	Fixed(const int intNum);
	Fixed(const float floatNum);

	int		getRawBits() const;
	void	setRawBits(const int raw);

	Fixed&	operator=(const Fixed& _fixed);

	bool	operator<(Fixed const &f2) const;
	bool	operator>(Fixed const &f2) const;
	bool	operator>=(Fixed const &f2) const;
	bool	operator<=(Fixed const &f2) const;
	bool	operator==(Fixed const &f2) const;
	bool	operator!=(Fixed const &f2) const;

	Fixed&	operator++();
	Fixed&	operator--();
	const Fixed	operator++(int);
	const Fixed	operator--(int);

	Fixed&	operator+=(const Fixed& f2);
	Fixed	operator+(const Fixed& f2) const;
	Fixed&	operator-=(const Fixed& f2);
	Fixed	operator-(const Fixed& f2) const;
	Fixed	operator*(const Fixed& f2);
	Fixed	operator/(const Fixed& f2);

	float	toFloat() const;
	int		toInt() const;

	static Fixed&	min(Fixed &f1, Fixed &f2);
	static const Fixed&		min(Fixed const &f1, Fixed const &f2);

	static Fixed&	max(Fixed &f1, Fixed &f2);
	static const Fixed&		max(Fixed const &f1, Fixed const &f2);
};

std::ostream&	operator<<(std::ostream& out, const Fixed& _fixed);

// const Fixed		operator+(const Fixed& f1, const Fixed& f2);
// const Fixed		operator-(const Fixed& f1, const Fixed& f2);

#endif
