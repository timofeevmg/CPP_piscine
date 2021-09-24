#include "Dog.hpp"
#include "Cat.hpp"


int	main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	// const Animal *meta = new Animal();

	i->makeSound();
	j->makeSound();
	// meta->makeSound();

	delete j;//should not create a leak
	delete i;
	// delete meta;

	std::cout << "------------array of animals------------" << std::endl;

	int N = 4;
	const Animal *array[N];
	for (int i = 0; i < N; i++)
	{
		if (i < N / 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}

	for (int j = 0; j < N; j++)
	{
		delete array[j];
	}

	std::cout << "------------copy test------------" << std::endl;

	Cat	murzik("SOSISKA");
	murzik.callCatBrainIdeas();
	Cat	pushok(murzik);
	pushok.callCatBrainIdeas();

	Cat gaf("KOTLETA");
	pushok = gaf;
	pushok.callCatBrainIdeas();

	Dog	rex("KOSTOCHKA");
	rex.callDogBrainIdeas();
	Dog	bobik(rex);
	bobik.callDogBrainIdeas();

	// while(1);

	return 0;
}
