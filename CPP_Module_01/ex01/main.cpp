#include "Zombie.hpp"

int		main()
{
	int		N = 10;

	Zombie	*Horde = zombieHorde(N, "Shaun");
	for(int i = 0; i < N; i++)
		Horde[i].announce();

	delete [] Horde;

	return 0;
}
