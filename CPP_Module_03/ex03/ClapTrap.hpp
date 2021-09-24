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
	ClapTrap(const std::string& str, const unsigned int& hp, const unsigned int& ep, const unsigned int& ad);
	virtual ~ClapTrap();
	ClapTrap(const ClapTrap& other);

	const std::string&	getClapTrapName() const;
	const unsigned int&	getHitPoints() const;
	const unsigned int&	getEnergyPoints() const;
	const unsigned int&	getAttackDamage() const;

	void	setHitPoints(const unsigned int& num);
	void	setEnergyPoints(const unsigned int& num);
	void	setAttackDamage(const unsigned int& num);

	ClapTrap&	operator=(const ClapTrap& other);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif