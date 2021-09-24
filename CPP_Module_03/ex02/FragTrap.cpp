#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Anonymous ClapTrap became a FragTrap\n";
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "and changed Hit points to " << ClapTrap::getHitPoints() \
		<< ", Energy points to " << ClapTrap::getEnergyPoints() \
		<< ", Attack damage to " << ClapTrap::getAttackDamage() << std::endl;
}

FragTrap::FragTrap(const std::string& str) : ClapTrap(str)
{
		std::cout << "ClapTrap " << str \
		<< " became a FragTrap\n";
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "and changed Hit points to " << ClapTrap::getHitPoints() \
		<< ", Energy points to " << ClapTrap::getEnergyPoints() \
		<< ", Attack damage to " << ClapTrap::getAttackDamage() << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "ClapTrap " << this->getClapTrapName() \
		<< " lost his mind about FragTrapness." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other.getClapTrapName(), 100, 100, 30)
{
		std::cout << "ClapTrap " << ClapTrap::getClapTrapName() \
		<< " reproduct himself as a FragTrap\n" \
		<< "and changed Hit points to " << ClapTrap::getHitPoints() \
		<< ", Energy points to " << ClapTrap::getEnergyPoints() \
		<< ", Attack damage to " << ClapTrap::getAttackDamage() \
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

void	FragTrap::highFivesGuys(void)
{
	for (int i = -1; i < 4; ++i)
	{
		std::cout << "ClapTrap " << ClapTrap::getClapTrapName() \
		<< " as FragTrap asked loudly \"Take fives!\"" << std::endl;
	}
}
