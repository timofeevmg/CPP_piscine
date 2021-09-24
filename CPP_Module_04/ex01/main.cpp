#include "Dog.hpp"
#include "Cat.hpp"


int	main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

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

	std::cout << "Ptr of Cat brain:" \
		<< pushok.getCatBrainPtr() << std::endl;
	std::cout << "Ptr of Cat brain:" \
		<< gaf.getCatBrainPtr() << std::endl;
	

	Dog	rex("KOSTOCHKA");
	rex.callDogBrainIdeas();
	Dog	bobik(rex);
	bobik.callDogBrainIdeas();

	return 0;
}
