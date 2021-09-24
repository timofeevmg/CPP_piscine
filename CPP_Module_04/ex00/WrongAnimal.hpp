#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
	const std::string	type;
public:
	Animal();
	Animal(const std::string& _type);
	Animal(const Animal& other);
	~Animal();

	Animal&		operator=(const Animal& other);

	const std::string&		getType() const;

	void	makeSound() const;
};

#endif
