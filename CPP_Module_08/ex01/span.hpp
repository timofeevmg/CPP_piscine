#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

class Span
{
private:
	std::vector<int> v;

public:
	Span(unsigned int N);
	Span(const Span& other);
	~Span();

	Span&	operator=(const Span& other);

	void	addNumber(int num);

	template <typename Iterator>
	void	addNumber(Iterator begin, Iterator end)
	{
		while (begin != end)
		{
			addNumber(*begin);
			++begin;
		}
	}

	unsigned int	shortestSpan();
	unsigned int	longestSpan();

	void	print();
};

class isFull : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Object is full.";
	}
};

class emptySpan : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Object is empty.";
	}
};

class singleSpan : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Object has only one int.";
	}
};

#endif
