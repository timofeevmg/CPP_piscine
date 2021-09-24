#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default animal constructor called." << std::endl;
}

Animal::Animal(const std::string& _type) : type(_type)
{
	std::cout << "Animal of " << _type << " type constructor called." \
		<< std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "Animal of " << other.type \
		<< " type copy constructor called." \
		<< std::endl;
}

Animal::~Animal()
{
	if (this->type.empty())
		std::cout << "Animal destructor called." << std::endl;
	else
		std::cout << "Animal of " << this->type << " type destructor called." \
			<< std::endl;
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
