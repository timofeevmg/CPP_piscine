#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(), hitPoints(100), energyPoints(100), attackDamage(30)
{
	std::cout << "ClapTrap " << ClapTrap::getClapTrapName() << " became a FragTrap\n" \
		<< "and changed Hit points to " << this->hitPoints \
		<< ", Energy points to " << this->energyPoints \
		<< ", Attack damage to " << this->attackDamage << std::endl;
}

FragTrap::FragTrap(const std::string& str) : \
ClapTrap(str), hitPoints(100), energyPoints(100), attackDamage(30)
{
	std::cout << "ClapTrap " << str \
		<< " became a FragTrap\n" \
		<< "and changed Hit points to " << this->hitPoints \
		<< ", Energy points to " << this->energyPoints \
		<< ", Attack damage to " << this->attackDamage << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "ClapTrap " << this->getClapTrapName() \
		<< " lost his mind about FragTrapness." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other.getClapTrapName()), \
hitPoints(other.getHitPoints()), \
energyPoints(other.getEnergyPoints()), \
attackDamage(other.getAttackDamage())
{
		std::cout << "ClapTrap " << ClapTrap::getClapTrapName() \
		<< " reproduct himself as a FragTrap\n" \
		<< "and changed Hit points to " << this->hitPoints \
		<< ", Energy points to " << this->energyPoints \
		<< ", Attack damage to " << this->attackDamage \
		<< ". And that`s only the beginning!" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	FragTrap tmp(other);
	std::cout << "ClapTrap " << ClapTrap::getClapTrapName() \
		<< " as a FragTrap tried to be equal to " \
		<< other.getClapTrapName() << ", but this buharik should be the only one!" \
		<< std::endl;
	return *this;
}

	const unsigned int&	FragTrap::getHitPoints() const
	{
		return this->hitPoints;
	}

	const unsigned int& FragTrap::getEnergyPoints() const
	{
		return this->energyPoints;
	}

	const unsigned int& FragTrap::getAttackDamage() const
	{
		return this->attackDamage;
	}

	void	FragTrap::setHitPoints(const unsigned int& num)
	{
		this->hitPoints = num;
	}

	void	FragTrap::setEnergyPoints(const unsigned int& num)
	{
		this->energyPoints = num;
	}

	void	FragTrap::setAttackDamage(const unsigned int& num)
	{
		this->attackDamage = num;
	}

void	FragTrap::highFivesGuys(void)
{
	for (int i = -1; i < 4; ++i)
	{
		std::cout << "ClapTrap " << ClapTrap::getClapTrapName() \
		<< " as FragTrap asked loudly \"Take fives!\"" << std::endl;
	}
}
