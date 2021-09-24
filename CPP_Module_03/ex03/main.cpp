#include "DiamondTrap.hpp"

int		main()
{
	std::cout << "--------------DiamondTrap story----------------" << std::endl;

	DiamondTrap G("GLASS");

	DiamondTrap D(G);

	DiamondTrap T("TMP");
	T = G;

	G.whoAmI();

	std::cout << "FragTrap Hitpoints: \t" << G.FragTrap::getHitPoints() << std::endl;
	std::cout << "ScavTrap Energy points: " << G.ScavTrap::getEnergyPoints() << std::endl;
	std::cout << "FragTrap Attack damage: " << G.FragTrap::getAttackDamage() << std::endl;

	G.ScavTrap::attack("ARBUZ");

	return 0;
}
