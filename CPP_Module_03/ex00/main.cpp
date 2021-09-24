#include "ClapTrap.hpp"

int		main()
{
	std::cout << "--------------ClapTrap story----------------" << std::endl;
	ClapTrap	benny("BENNY");

	ClapTrap	vova("VOVA");
	benny = vova;

	benny.attack("KIOSK");
	benny.takeDamage(3);
	benny.attack("NALIVAYKA");
	benny.takeDamage(5);
	benny.attack("KRASNOE&BELOE");
	benny.beRepaired(2);

	benny.attack("MAGNIT");
	benny.takeDamage(6);
	benny.attack("5-KA");
	benny.takeDamage(6);
	benny.beRepaired(10);
	benny.beRepaired(5);
	return 0;
}