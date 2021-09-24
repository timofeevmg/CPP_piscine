#ifndef DOG_HPP
#define DOG_HPP

#include "WrongAnimal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const std::string& _type);
	Dog(const Dog& other);
	~Dog();

	Dog&	operator=(const Dog& other);

	void	makeSound() const;
};

#endif
