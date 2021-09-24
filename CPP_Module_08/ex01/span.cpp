#include "span.hpp"

Span::Span(unsigned int N)
{
	this->v.reserve(N);
}

Span::Span(const Span& other)
{
	this->v.reserve(other.v.capacity());
}

Span::~Span()
{
}

Span&	Span::operator=(const Span& other)
{
	this->v = other.v;

	return *this;
}

void	Span::addNumber(int num)
{
	if (this->v.size() == this->v.capacity())
		throw isFull();
	else
		this->v.push_back(num);
}

unsigned int	Span::shortestSpan()
{
	if (this->v.empty())
		throw emptySpan();
	if (this->v.size() == 1)
		throw singleSpan();
	
	std::vector<int>::const_iterator	it = this->v.begin();
	int		sMin = abs(this->v[0] - this->v[1]);
	while (it != this->v.end())
	{
		std::vector<int>::const_iterator	it2 = it + 1;
		while (it2 != this->v.end())
		{
			sMin = (sMin > abs(*it2 - *it)) ? (abs(*it2 - *it)) : sMin;
			++it2;
		}
		++it;
	}
	return sMin;
}

unsigned int	Span::longestSpan()
{
	if (this->v.empty())
		throw emptySpan();
	if (this->v.size() == 1)
		throw singleSpan();
	
	std::vector<int>::const_iterator	itMin = std::min_element(this->v.begin(), this->v.end());
	std::vector<int>::const_iterator	itMax = std::max_element(this->v.begin(), this->v.end());

	return (*itMax - *itMin);
}

void	Span::print()
{
	std::vector<int>::const_iterator it = v.begin();
	while (it != v.end())
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
}
