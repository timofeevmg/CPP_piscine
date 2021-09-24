#ifndef ARRAY_HPP
#define ARRAY_HPP

#define INVIDX "No element by this index."
#define	EMPARR "Array is empty."

#include <iostream>
#include <exception>

class OutLimit : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return INVIDX;
	}
};

class EmptyArray : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return EMPARR;
	}
};

template <class T>
class Array
{
private:
	T	*arr;
	unsigned int	l;

public:
	Array() : l(0)
	{
		arr = new T[0];
	}

	Array(unsigned int n) : l(n) 
	{
		arr = new T[n];
	}

	virtual ~Array()
	{
		delete [] arr;
	}

	Array(const Array& other) : l(other.l)
	{
		arr = new T[l];
		for (unsigned int i = 0; i < l; ++i)
		{
			arr[i] = other.arr[i];
		}
	}


	Array&	operator=(const Array& other)
	{
		delete [] arr;

		l = other.l;
		arr = new T[l];
		for (unsigned int i = 0; i < l; ++i)
		{
			arr[i] = other.arr[i];
		}
		return *this;
	}

	T&	operator[](const unsigned int i)
	{
		if (l == 0)
			throw EmptyArray();
		if (i < l)
			return (arr[i]);
		else
			throw OutLimit();
	}

	unsigned int	size() const
	{
		return l;
	}
};

#endif
