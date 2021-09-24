#include "WrongAnimal.hpp"

Animal::Animal()
{
}

Animal::Animal(const std::string& _type) : type(_type)
{
}

Animal::Animal(const Animal& other) : type(other.type)
{
}

Animal::~Animal()
{
}

Animal&		Animal::operator=(const Animal& other)
{
	other.getType();
	return *this;
}

const std::string&		Animal::getType() const
{
	return this->type;
}

void	Animal::makeSound() const
{
	std::cout << "Animal makes an unrecognized sound." << std::endl;
}
