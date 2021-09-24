#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain())
{
	std::cout << "Cat with empty ideas constructor called." \
		<< std::endl;
}

Cat::Cat(const std::string& _idea) : Animal("Cat"), brain(new Brain())
{
	std::cout << "Cat with ideas about " << _idea <<" constructor called." \
			<< std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->brain->setBrainIdeas(_idea, i);
	}
}

Cat::Cat(const Cat& other) : Animal(other), brain(new Brain())
{
	std::cout << "Cat copy constructor called." \
		<< std::endl;
	if (other.brain != nullptr)
		this->copyCatBrainIdeas(other);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." \
		<< std::endl;
	if (this->brain != nullptr)
		delete this->brain;
}

Cat&	Cat::operator=(const Cat& other)
{
	if (other.brain != nullptr)
	{
		if (this->brain != nullptr)
			delete this->brain;
		this->brain = new Brain();
		this->copyCatBrainIdeas(other);
	}
	return *this;
}

void	Cat::copyCatBrainIdeas(const Cat& other)
{
	for (int i = 0; i < 100; i++)
	{
		this->brain->setBrainIdeas(other.brain->getBrainIdea(i), i);
	}
}

void	Cat::makeSound() const
{
	std::cout << this->type << " says \"MEOWW-MEOWW-MEOWW!\"." \
		<< std::endl;
}

void	Cat::callCatBrainIdeas() const
{
	if (this->brain == nullptr)
		std::cout << this->getType() << " has no brain!" << std::endl;
	else
	{
		for (int i = 0; i < 100; i++)
		{
			if (this->brain->getBrainIdea(i).empty())
				continue;
			else
				std::cout << this->brain->getBrainIdea(i) << " ";
		}
		std::cout << std::endl;
	}
}

Brain*	Cat::getCatBrainPtr() const
{
	return this->brain;
}
