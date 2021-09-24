#include "iter.hpp"
#include "Awesome.hpp"
#include <iostream>

template <typename T>
void	print(const T& t)
{
	std::cout << t << std::endl;
};

int		main()
{
	int	tab[] = {0, 1, 2, 3, 4};
	iter(tab, 5, print);

	Awesome tab2[5];
	iter(tab2, 5, print);

	char tab3[] = {'a', 'b', 'c', 'd', 'e'};
	iter(tab3, 5, print);

	float tab4[] = {1.05f, 2.099f, 3.567f, 4.8f, 5.3f};
	iter(tab4, 5, print);

	double tab5[] = {5.3, 4.8, 3.567, 2.099, 1.05};
	iter(tab5, 5, print);

	return 0;
}
