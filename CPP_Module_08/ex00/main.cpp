#include "easyfind.hpp"
// #include <exception>
// #include <string>
#include <iostream>
#include <vector>
#include <list>
#include <deque>


int		main()
{
	std::vector<int>	vi;
	vi.push_back(10);
	vi.push_back(20);
	vi.push_back(30);

	// std::vector<std::string>	vi;
	// vi.push_back("10");
	// vi.push_back("20");
	// vi.push_back("30");

	// std::cout << easyfind(vi, "10") << std::endl;

	std::cout << easyfind(vi, 10) << std::endl;
	std::cout << easyfind(vi, 30) << std::endl;
	std::cout << easyfind(vi, 5) << std::endl;

	return 0;
}
