#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain		*brain;

public:
	Dog();
	Dog(const std::string& _idea);
	Dog(const Dog& other);
	virtual ~Dog();

	Dog&	operator=(const Dog& other);

	void	copyDogBrainIdeas(const Dog& other);

	virtual void	makeSound() const;

	void	callDogBrainIdeas() const;

	Brain*	getDogBrainPtr() const;
};

#endif
