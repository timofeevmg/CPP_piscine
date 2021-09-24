#include "HumanA.hpp"

HumanA::HumanA(std::string const &str, Weapon &type) : name(str), weapon(type)
{
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his "
		<< this->weapon.getType() << std::endl;
}
