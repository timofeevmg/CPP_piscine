#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
private:
	unsigned int		hitPoints;
	unsigned int		energyPoints;
	unsigned int		attackDamage;

public:
	ScavTrap();
	ScavTrap(const std::string& str);
	virtual ~ScavTrap();
	ScavTrap(const ScavTrap& other);

	ScavTrap&	operator=(const ScavTrap& other);

	const unsigned int&	getHitPoints() const;
	const unsigned int& getEnergyPoints() const;
	const unsigned int& getAttackDamage() const;

	void	setHitPoints(const unsigned int& num);
	void	setEnergyPoints(const unsigned int& num);
	void	setAttackDamage(const unsigned int& num);

	void	attack(const std::string& target);
	void	guardGate();
};

#endif
