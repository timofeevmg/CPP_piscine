#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(), hitPoints(100), energyPoints(50), attackDamage(20)
{
	std::cout << "ScavTrap with ClapTrap name " << ClapTrap::getClapTrapName() \
		<< " dressed up the ScavTrap - a new Ironman suit\n " \
		<< "and changed Hit points to " << this->hitPoints \
		<< ", Energy points to " << this->energyPoints \
		<< ", Attack damage to " << this->attackDamage << std::endl;
}

ScavTrap::ScavTrap(const std::string& str) : \
ClapTrap(str), hitPoints(100), energyPoints(50), attackDamage(20)
{
	std::cout << "ClapTrap " << str \
		<< " dressed up the ScavTrap - a new Ironman suit\n" \
		<< "and changed Hit points to " << this->hitPoints \
		<< ", Energy points to " << this->energyPoints \
		<< ", Attack damage to " << this->attackDamage << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ClapTrap " << this->getClapTrapName() \
		<< " gave the ScavTrap suit back to Ironman." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : \
ClapTrap(other.getClapTrapName()), \
hitPoints(other.getEnergyPoints()), \
energyPoints(other.getEnergyPoints()), \
attackDamage(other.getAttackDamage()) 
{
	std::cout << "ClapTrap " << ClapTrap::getClapTrapName() \
		<< " reproduct himself with the ScavTrap suit\n" \
		<< "and changed Hit points to " << this->hitPoints \
		<< ", Energy points to " << this->energyPoints \
		<< ", Attack damage to " << this->attackDamage \
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

const unsigned int&	ScavTrap::getHitPoints() const
{
	return this->hitPoints;
}

const unsigned int& ScavTrap::getEnergyPoints() const
{
	return this->energyPoints;
}

const unsigned int& ScavTrap::getAttackDamage() const
{
	return this->attackDamage;
}

void	ScavTrap::setHitPoints(const unsigned int& num)
{
	this->hitPoints = num;
}

void	ScavTrap::setEnergyPoints(const unsigned int& num)
{
	this->energyPoints = num;
}

void	ScavTrap::setAttackDamage(const unsigned int& num)
{
	this->attackDamage = num;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() == 0)
	{
		std::cout << "ClapTrap " << ClapTrap::getClapTrapName() \
		<< " with the ScavTrap suite could not attack " << target \
		<< " ,because of " << this->getEnergyPoints() << " Energy points."\
		<< std::endl;
	}
	else
	{
		int	tmp = (int)this->getEnergyPoints();
		this->setEnergyPoints(((tmp - 50) < 0) ? 0 : (tmp - 50));

		std::cout << "ClapTrap " \
			<< ClapTrap::getClapTrapName() << " attacks with the ScavTrap suite " << target \
			<< ", causing " << this->getAttackDamage() \
			<< " points of damage and loses " << (tmp - (int)this->getEnergyPoints()) << " Energy points.\n"\
			<< "His Energy points are " << this->getEnergyPoints() << "."
			<< std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ClapTrap " << ClapTrap::getClapTrapName() \
		<< " with the ScavTrap suit enterred in Gate keeper mode\nand drank elixir." \
		<< std::endl;
}
