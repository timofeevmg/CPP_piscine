#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain		*brain;

public:
	Cat();
	Cat(const std::string& _idea);
	Cat(const Cat& other);
	virtual ~Cat();

	Cat&	operator=(const Cat& other);

	void	copyCatBrainIdeas(const Cat& other);

	virtual void	makeSound() const;

	void	callCatBrainIdeas() const;

	Brain*	getCatBrainPtr() const;
};

#endif
