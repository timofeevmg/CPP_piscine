#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Who`s created ClapTrap object anonymously?!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& str) : name(str), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << str \
		<< " has born and yawned loudly." << std::endl;
}

ClapTrap::ClapTrap(const std::string& str, const unsigned int& hp, const unsigned int& ep, const unsigned int& ad) : \
name(str), hitPoints(hp), energyPoints(ep), attackDamage(ad)
{
	// std::cout << "ClapTrap " << str << " with parameters Hit points=" << hp << " Energy points=" << ep << " Attack damage=" << ad \
	// 	<< " has born and yawned loudly." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name \
		<< " has catched by MILITSIONER and sent to VYTREZVITEL." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << this->name \
		<< " reproduct himself. And that`s only the beginning!" << std::endl;
}

const std::string&	ClapTrap::getClapTrapName() const
{
	// std::cout << "I`ll tell you my name, but once and for all!" \
	// 	<< this->name << std::endl;
	return this->name;
}

const unsigned int&	ClapTrap::getHitPoints() const
{
	return this->hitPoints;
}

const unsigned int&	ClapTrap::getEnergyPoints() const
{
	return this->energyPoints;
}

const unsigned int&	ClapTrap::getAttackDamage() const
{
	return this->attackDamage;
}

void	ClapTrap::setHitPoints(const unsigned int& num)
{
	this->hitPoints = num;
}

void	ClapTrap::setEnergyPoints(const unsigned int& num)
{
	this->energyPoints = num;
}

void	ClapTrap::setAttackDamage(const unsigned int& num)
{
	this->attackDamage = num;
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
		this->energyPoints = ((tmp - 50) < 0) ? 0 : (tmp - 50);

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
	if (this->hitPoints == 100 && this->energyPoints == 50)
	{
		std::cout << "ClapTrap " \
				<< this->name << " has no need to repair.\n" \
				<< "His Hit points and Energy points are full (100/50)." \
				<< std::endl;
	}
	else if (this->hitPoints != 100 && this->energyPoints == 50)
	{
		int	tmp = (int)this->hitPoints;
		this->hitPoints = ((tmp + (int)amount) > 100) ? 100 : (tmp + (int)amount);
		std::cout << "ClapTrap " \
			<< this->name << " has repaired.\n" \
			<< "His Hit points increased by " << (this->hitPoints - tmp) \
			<< ". Do the attack for VODKA!" \
			<< std::endl;
	}
	else if (this->hitPoints == 100 && this->energyPoints != 50)
	{
		int	tmp = (int)this->energyPoints;
		this->energyPoints = ((tmp + (int)amount) > 50) ? 50 : (tmp + (int)amount);
		std::cout << "ClapTrap " \
			<< this->name << " has repaired.\n" \
			<< "His Energy points increased by " << (this->energyPoints - tmp) \
			<< ". Do the attack for BEER!" \
			<< std::endl;
	}
	else
	{
		int	tmp1 = (int)this->hitPoints;
		int	tmp2 = (int)this->energyPoints;

		this->hitPoints = (tmp1 + (int)amount > 100) ? 100 : (tmp1 + (int)amount);
		this->energyPoints = (tmp2 + (int)amount > 50) ? 50 : (tmp2 + (int)amount);
		std::cout << "ClapTrap " \
			<< this->name << " has repaired.\n" \
			<< "His Hit points increased by " << (this->hitPoints - tmp1) << ".\n" \
			<< "His Energy points increased by " << (this->energyPoints - tmp2) << ".\n" \
			<< "Do the attack for CHEKUSHKA!" \
			<< std::endl;
	}
}
