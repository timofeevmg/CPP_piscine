#include "Zombie.hpp"

int		main()
{
	Zombie	*Shaun = newZombie("Shaun");
	delete Shaun;
	randomChump("Fido");
	return 0;
}
