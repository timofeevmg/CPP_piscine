#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T>
int	easyfind(const T& c, const unsigned int& num)//returns idx or -1 an error
{
	typename T::const_iterator	it;
	typename T::const_iterator	b = c.begin();
	typename T::const_iterator	e = c.end();
	it = find(b, e, num);
	if (it != e)
		return (it - b);
	else
		return -1;
};

#endif
