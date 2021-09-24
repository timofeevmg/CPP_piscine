#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack<T>() : std::stack<T>()
	{
	}

	MutantStack<T>(const MutantStack<T>& other) : std::stack<T>(other)
	{
	}

	virtual ~MutantStack()
	{
	}

	MutantStack<T>&		operator=(const MutantStack<T>& other)
	{
		this->c = other.c;
		return *this;
	}

	iterator	begin()
	{
		return this->c.begin();
	}

	iterator	end()
	{
		return this->c.end();
	}
};

#endif
