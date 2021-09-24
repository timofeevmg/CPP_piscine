#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain with empty ideas constructor called." \
		<< std::endl;
}

Brain::Brain(const std::string& _idea)
{
	std::cout << "Brain with ideas about " << _idea << " constructor called." \
		<< std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = _idea;
	}
}

Brain::Brain(const Brain& _other)
{
	std::cout << "Brain copy constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = _other.ideas[i];
	}
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

Brain& 	Brain::operator=(const Brain& _other)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = _other.ideas[i];
	}
	return *this;
}

const std::string&	Brain::getBrainIdea(const int& i) const
{
	if (i >= 0 && i < 100)
		return this->ideas[i];
	else
		return this->ideas[0];
}

void	Brain::setBrainIdeas(const std::string& _idea, const int& i)
{
	if (i >= 0 && i < 100)
		this->ideas[i] = _idea;
}
