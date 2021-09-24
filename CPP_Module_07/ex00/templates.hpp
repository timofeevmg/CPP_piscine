#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

template <typename T>
void	swap(T& a, T& b)
{
	if (a != b)
	{
		T tmp;
		tmp = a;
		a = b;
		b = tmp;
	}
};

template <typename T>
const T& min(const T& a, const T& b)
{
	if (a >= b)
		return b;
	else
		return a;
};

template <typename T>
const T& max(const T& a, const T& b)
{
	if (a <= b)
		return b;
	else
		return a;
};

#endif
