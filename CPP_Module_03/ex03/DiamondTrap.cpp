#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
}

DiamondTrap::DiamondTrap(const std::string& name) : \
ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), name(name)
{
	std::cout << "DiamondTrap " << name << " constructor called." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " destructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : \
ClapTrap(other.getClapTrapName()), ScavTrap(), FragTrap(), name(other.name)
{
	std::cout << "DiamondTrap " << other.name << " copy constructor called." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	other.getClapTrapName();
	std::cout << "DiamondTrap " << this->name << " from " << other.name \
		<< " assignation overload operator called." << std::endl;
	return *this;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My DiamondTrap name: \t" << this->name << "\n" \
		<< "and base ClapTrap name: " << this->getClapTrapName() << "." \
		<< std::endl;
}