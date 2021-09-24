#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string str)
{
	Zombie::name = str;
	Zombie::announce();
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->GetName()
		<< " was killed!" << std::endl;
};

std::string	Zombie::GetName()
{
	return this->name;
}


void	Zombie::announce(void)
{
	std::cout << "Zombie " << this->GetName() << ":"
		<< " \"BraiiiiiiinnnzzzZ...\"" << std::endl;
}
