#ifndef CAT_HPP
#define CAT_HPP

#include "WrongAnimal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const std::string& _type);
	Cat(const Cat& other);
	~Cat();

	Cat&	operator=(const Cat& other);

	void	makeSound() const;
};

#endif
