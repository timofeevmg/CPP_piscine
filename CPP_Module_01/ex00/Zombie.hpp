#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string	name;

public:
	Zombie(void);
	Zombie(std::string	str);
	~Zombie(void);

	std::string	GetName();

	void	announce (void);
};

Zombie *newZombie( std::string str);
void	randomChump(std::string str);

#endif
