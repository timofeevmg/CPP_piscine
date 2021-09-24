#include "Zombie.hpp"

Zombie::Zombie(void)
{

};

Zombie::Zombie(std::string str)
{
	this->name = str;
	this->announce();
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

void		Zombie::SetName(std::string str)
{
	this->name = str;
}

void	Zombie::announce(void)
{
	std::cout << "Zombie " << this->GetName() << ":"
		<< " \"BraiiiiiiinnnzzzZ...\"" << std::endl;
}
