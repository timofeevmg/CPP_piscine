#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string& str);
	~FragTrap();
	FragTrap(const FragTrap& other);

	FragTrap&	operator=(const FragTrap& other);

	void	highFivesGuys(void);
};

#endif
