#include "WrongCat.hpp"

Cat::Cat() : Animal("Cat")
{
}

Cat::Cat(const std::string& _type) : Animal(_type)
{
}

Cat::Cat(const Cat& other) : Animal(other.type)
{
}

Cat::~Cat()
{
}

Cat&	Cat::operator=(const Cat& other)
{
	other.getType();
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Cat " << this->type \
		<< " says \"MEOWW-MEOWW!\"." << std::endl;
}
