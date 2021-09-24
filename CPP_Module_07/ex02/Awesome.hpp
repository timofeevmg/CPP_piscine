#ifndef AWESOME_HPP
#define AWESOME_HPP

#include <iostream>

class Awesome
{
private:
	int	_n;
public:
	Awesome();
	Awesome(int n);
	virtual ~Awesome();

	const	int& getAwesomeInt() const;

	bool	operator==(const Awesome& rhs) const;
	bool	operator!=(const Awesome& rhs) const;
	bool	operator>(const Awesome& rhs) const;
	bool	operator<(const Awesome& rhs) const;
	bool	operator>=(const Awesome& rhs) const;
	bool	operator<=(const Awesome& rhs) const;

	Awesome&	operator=(const Awesome& rhs);
};

std::ostream&	operator<<(std::ostream& out, const Awesome& rhs);

#endif
