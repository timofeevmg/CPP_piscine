#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
}

Dog::Dog(const std::string& _type) : Animal(_type)
{
}

Dog::Dog(const Dog& other) : Animal(other.type)
{
}

Dog::~Dog()
{
}

Dog&	Dog::operator=(const Dog& other)
{
	other.getType();
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Dog " << this->type \
		<< " says \"BARK-BARK-BARK!\"." << std::endl;
}
