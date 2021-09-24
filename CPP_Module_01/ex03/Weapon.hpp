#ifndef WEAPON_HPP
#define	WEAPON_HPP

#include <iostream>
#include <string>

class	Weapon
{
private:
	std::string	type;

public:
	Weapon(std::string const &str);

	void	setType(std::string	const &str);

	std::string	const &getType(void) const;
};

#endif
