#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
	const std::string	name;
	unsigned int		hitPoints;
	unsigned int		energyPoints;
	unsigned int		attackDamage;

public:
	ClapTrap();
	ClapTrap(const std::string& str);
	~ClapTrap();
	ClapTrap(const ClapTrap& other);

	const std::string&	getClapTrapName();

	ClapTrap&	operator=(const ClapTrap& other);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif