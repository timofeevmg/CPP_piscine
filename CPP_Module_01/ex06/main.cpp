#include "Karen.hpp"

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		Karen karen;

		karen.complain(av[1]);
	}
	return 0;
}
