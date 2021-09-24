#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap :  public ScavTrap, public FragTrap
{
private:
	const std::string	name;

public:
	DiamondTrap();
	DiamondTrap(const std::string& name);
	virtual ~DiamondTrap();
	DiamondTrap(const DiamondTrap& other);

	DiamondTrap& operator=(const DiamondTrap& other);

	void	whoAmI();
};

#endif
