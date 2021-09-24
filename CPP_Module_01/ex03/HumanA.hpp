#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon		&weapon;

public:
	HumanA(std::string const &str, Weapon &type);

	void	setWeapon(Weapon const &type);

	void	attack(void);
};

#endif
