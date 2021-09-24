#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*tmp = new Zombie[N];

	for(int i = 0; i < N; i++)
		tmp[i].SetName(name);
	return tmp;
}
