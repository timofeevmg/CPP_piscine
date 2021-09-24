#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain())
{
	std::cout << "Dog with empty ideas constructor called." \
		<< std::endl;
}

Dog::Dog(const std::string& _idea) : Animal("Dog"), brain(new Brain())
{
	std::cout << "Dog with ideas about " << _idea <<" constructor called." \
			<< std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->brain->setBrainIdeas(_idea, i);
	}
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain())
{
	std::cout << "Dog copy constructor called." \
		<< std::endl;
	if (other.brain != nullptr)
		this->copyDogBrainIdeas(other);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." \
		<< std::endl;
	if (this->brain != nullptr)
		delete this->brain;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "" << std::endl;
	if (other.brain != nullptr)
	{
		if (this->brain != nullptr)
			delete this->brain;
		this->brain = new Brain();
		this->copyDogBrainIdeas(other);
	}
	return *this;
}

void	Dog::copyDogBrainIdeas(const Dog& other)
{
	for (int i = 0; i < 100; i++)
	{
		this->brain->setBrainIdeas(other.brain->getBrainIdea(i), i);
	}
}

void	Dog::makeSound() const
{
	std::cout << this->type << " says \"BARK-BARK-BARK!\"." \
		<< std::endl;
}

void	Dog::callDogBrainIdeas() const
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

Brain*	Dog::getDogBrainPtr() const
{
	return this->brain;
}
