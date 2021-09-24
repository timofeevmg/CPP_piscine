#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Anonymous ClapTrap dressed up the ScavTrap - a new Ironman suit\n ";
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "and changed Hit points to " << ClapTrap::getHitPoints() \
		<< ", Energy points to " << ClapTrap::getEnergyPoints() \
		<< ", Attack damage to " << ClapTrap::getAttackDamage() << std::endl;
}

ScavTrap::ScavTrap(const std::string& str) : ClapTrap(str)
{
	std::cout << "ClapTrap " << str \
		<< " dressed up the ScavTrap - a new Ironman suit\n";
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "and changed Hit points to " << ClapTrap::getHitPoints() \
		<< ", Energy points to " << ClapTrap::getEnergyPoints() \
		<< ", Attack damage to " << ClapTrap::getAttackDamage() << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ClapTrap " << this->getClapTrapName() \
		<< " gave the ScavTrap suit back to Ironman." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other.getClapTrapName(), 100, 50, 20)
{
	std::cout << "ClapTrap " << ClapTrap::getClapTrapName() \
		<< " reproduct himself with the ScavTrap suit\n" \
		<< "and changed Hit points to " << ClapTrap::getHitPoints() \
		<< ", Energy points to " << ClapTrap::getEnergyPoints() \
		<< ", Attack damage to " << ClapTrap::getAttackDamage() \
		<< ". And that`s only the beginning!" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	ScavTrap tmp(other);
	std::cout << "ClapTrap " << ClapTrap::getClapTrapName() \
		<< " with the ScavTrap suit tried to be equal to " \
		<< other.getClapTrapName() << ", but the Superhero should be the only one!" \
		<< std::endl;
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (ClapTrap::getEnergyPoints() == 0)
	{
		std::cout << "ClapTrap " << ClapTrap::getClapTrapName() \
		<< " with the ScavTrap suite could not attack " << target \
		<< " ,because of " << ClapTrap::getEnergyPoints() << " Energy points."\
		<< std::endl;
	}
	else
	{
		int	tmp = (int)ClapTrap::getEnergyPoints();
		ClapTrap::setEnergyPoints(((tmp - 50) < 0) ? 0 : (tmp - 50));

		std::cout << "ClapTrap " \
			<< ClapTrap::getClapTrapName() << " attacks with the ScavTrap suite " << target \
			<< ", causing " << ClapTrap::getAttackDamage() \
			<< " points of damage and loses " << (tmp - (int)ClapTrap::getEnergyPoints()) << " Energy points.\n"\
			<< "His Energy points are " << ClapTrap::getEnergyPoints() << "."
			<< std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ClapTrap " << ClapTrap::getClapTrapName() \
		<< " with the ScavTrap suit enterred in Gate keeper mode\nand drank elixir." \
		<< std::endl;
}
