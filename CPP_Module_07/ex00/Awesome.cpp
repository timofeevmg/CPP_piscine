#include "Awesome.hpp"

Awesome::Awesome() : _n(0)
{
}

Awesome::Awesome(int n) : _n(n)
{
}

Awesome::~Awesome()
{
}

const	int& Awesome::getAwesomeInt() const
{
	return this->_n;
}

bool	Awesome::operator==(const Awesome& rhs) const
{
	return (this->_n == rhs._n);
}

bool	Awesome::operator!=(const Awesome& rhs) const
{
	return (this->_n != rhs._n);
}

bool	Awesome::operator>(const Awesome& rhs) const
{
	return (this->_n > rhs._n);
}

bool	Awesome::operator<(const Awesome& rhs) const
{
	return (this->_n < rhs._n);
}

bool	Awesome::operator>=(const Awesome& rhs) const
{
	return (this->_n >= rhs._n);
}

bool	Awesome::operator<=(const Awesome& rhs) const
{
	return (this->_n <= rhs._n);
}

Awesome&	Awesome::operator=(const Awesome& rhs)
{
	this->_n = rhs._n;

	return *this;
}

std::ostream&	operator<<(std::ostream& out, const Awesome& rhs)
{
	std::cout << rhs.getAwesomeInt();
	return out;
}
