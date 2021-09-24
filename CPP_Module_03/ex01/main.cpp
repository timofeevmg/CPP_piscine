#include "ScavTrap.hpp"

int		main()
{
	std::cout << "--------------ScavTrap story----------------" << std::endl;
	ScavTrap	benny("BENNY");

	ScavTrap	vova("VOVA");
	benny = vova;

	benny.attack("KIOSK");
	benny.takeDamage(30);
	benny.attack("NALIVAYKA");
	benny.takeDamage(50);
	benny.attack("KRASNOE&BELOE");
	benny.beRepaired(20);

	benny.attack("MAGNIT");
	benny.takeDamage(60);
	benny.attack("5-KA");
	benny.takeDamage(60);
	benny.guardGate();
	benny.beRepaired(100);
	benny.beRepaired(50);
	return 0;
}
