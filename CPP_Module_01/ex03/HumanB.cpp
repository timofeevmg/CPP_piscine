#include "HumanB.hpp"

HumanB::HumanB(std::string const &str) : name(str)
{
}

void	HumanB::setWeapon(Weapon const &type)
{
	this->weapon = &type;
}

void	HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon!" << std::endl;
}
