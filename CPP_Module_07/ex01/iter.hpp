#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void	iter(const T *arr, const unsigned int& l, void (*f)(const T& t))
{
	for (unsigned int i = 0; i < l; ++i)
	{
		f(arr[i]);
	}
};

#endif
