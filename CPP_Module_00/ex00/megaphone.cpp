#include <iostream>

void	upperText(char *arg)
{
	int	i = 0;
	while (arg[i])
	{
		if (arg[i] >= 97 && arg[i] <= 122)
			std::cout << (char)(arg[i] - 32);
		else
			std::cout << arg[i];
		i++;
	}
}

int main (int ac, char **av)
{
	int	i = 1;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < ac)
		{
			upperText(av[i]);
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
