#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Who`s created me anonymously?!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& str) : name(str), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << this->name \
		<< " has born and yawned loudly." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name \
		<< " has catched by militsioner and sent to vytrezvitel." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << other.name \
		<< " reproduct himself. And that`s only the beginning!" << std::endl;
}

const std::string&	ClapTrap::getClapTrapName()
{
	std::cout << "I`ll tell you my name, but once and for all!" \
		<< this->name << std::endl;
	return this->name;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	ClapTrap tmp(other);
	std::cout << this->name << " wants to keep individuality! Don`t try to change his name to " \
		<< other.name << "!"
		<< std::endl;
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints == 0)
	{
		std::cout << "ClapTrap " \
		<< this->name << " could not attack " << target \
		<< " ,because of " << this->energyPoints << " Energy points."\
		<< std::endl;
	}
	else
	{
		int	tmp = (int)this->energyPoints;
		this->energyPoints = ((tmp - 5) < 0) ? 0 : (tmp - 5);

		std::cout << "ClapTrap " \
			<< this->name << " attacks " << target \
			<< ", causing " << this->attackDamage \
			<< " points of damage and loses " << (tmp - (int)this->energyPoints) << " Energy points.\n"\
			<< "His Energy points are " << this->energyPoints << "."
			<< std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints == 0)
	{
		std::cout << "ClapTrap " \
			<< this->name << " cry loudly, because of losing Hit points he`s unprotected."\
			<< std::endl;
	}
	else
	{
		int	tmp = (int)(this->hitPoints);
		if ((tmp - (int)amount) < 0)
		{
			this->hitPoints = 0;
			std::cout << "ClapTrap " \
					<< this->name << " took damage " << amount << ".\n"\
					<< "His Hit points were decreased by " << (amount - tmp) \
					<< " and become " << this->hitPoints << "."
					<< std::endl;
		}
		else
		{
			this->hitPoints -= amount;
			std::cout << "ClapTrap " \
					<< this->name << " took damage " << amount << ".\n"\
					<< "His Hit points were decreased by " << amount \
					<< " and become " << this->hitPoints << "."
					<< std::endl;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints == 10 && this->energyPoints == 10)
	{
		std::cout << "ClapTrap " \
				<< this->name << " has no need to repair.\n" \
				<< "His Hit points and Energy points are full (10/10)." \
				<< std::endl;
	}
	else if (this->hitPoints != 10 && this->energyPoints == 10)
	{
		int	tmp = (int)this->hitPoints;
		this->hitPoints = ((tmp + (int)amount) > 10) ? 10 : (tmp + (int)amount);
		std::cout << "ClapTrap " \
			<< this->name << " has repaired.\n" \
			<< "His Hit points increased by " << (this->hitPoints - tmp) \
			<< ". Do the attack for vodka!" \
			<< std::endl;
	}
	else if (this->hitPoints == 10 && this->energyPoints != 10)
	{
		int	tmp = (int)this->energyPoints;
		this->energyPoints = ((tmp + (int)amount) > 10) ? 10 : (tmp + (int)amount);
		std::cout << "ClapTrap " \
			<< this->name << " has repaired.\n" \
			<< "His Energy points increased by " << (this->energyPoints - tmp) \
			<< ". Do the attack for beer!" \
			<< std::endl;
	}
	else
	{
		int	tmp1 = (int)this->hitPoints;
		int	tmp2 = (int)this->energyPoints;

		this->hitPoints = (tmp1 + (int)amount > 10) ? 10 : (tmp1 + (int)amount);
		this->energyPoints = (tmp2 + (int)amount > 10) ? 10 : (tmp2 + (int)amount);
		std::cout << "ClapTrap " \
			<< this->name << " has repaired.\n" \
			<< "His Hit points increased by " << (this->hitPoints - tmp1) << ".\n" \
			<< "His Energy points increased by " << (this->energyPoints - tmp2) << ".\n" \
			<< "Do the attack for chikushka!" \
			<< std::endl;
	}
}
