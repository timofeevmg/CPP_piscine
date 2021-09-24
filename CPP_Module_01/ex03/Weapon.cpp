#include "Weapon.hpp"

Weapon::Weapon(std::string const &str) : type(str)
{
}

void	Weapon::setType(std::string	const &str)
{
	this->type = str;
}

std::string	const &Weapon::getType(void) const
{
	return this->type;
}
