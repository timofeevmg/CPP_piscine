#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon		const *weapon;

public:
	HumanB(std::string const &str);

	void	setWeapon(Weapon const &type);

	void	attack(void);
};

#endif
