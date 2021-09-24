#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
private:
	unsigned int		hitPoints;
	unsigned int		energyPoints;
	unsigned int		attackDamage;

public:
	FragTrap();
	FragTrap(const std::string& str);
	virtual ~FragTrap();
	FragTrap(const FragTrap& other);

	FragTrap&	operator=(const FragTrap& other);

	const unsigned int&	getHitPoints() const;
	const unsigned int& getEnergyPoints() const;
	const unsigned int& getAttackDamage() const;

	void	setHitPoints(const unsigned int& num);
	void	setEnergyPoints(const unsigned int& num);
	void	setAttackDamage(const unsigned int& num);

	void	highFivesGuys(void);
};

#endif
