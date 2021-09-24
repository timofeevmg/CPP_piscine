#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat x("", 150);

	Bureaucrat y("nobody", 151);
	Bureaucrat z("nobody", -5);
	Bureaucrat f("nobody", 0);

	Bureaucrat a("Sasha", 10);
	std::cout << a << std::endl;
	--a;
	std::cout << "After decrement: " << a << std::endl;
	++a;
	std::cout << "After increment: " << a << std::endl;

	Bureaucrat b(a);
	std::cout << "After copy constructor: " << b << std::endl;

	Bureaucrat c("Igor", 120);
	std::cout << c << std::endl;
	b = c;
	std::cout << "After assignation overload: " << b << std::endl;

	Bureaucrat d("Seva", 1);
	++d;
	for (int i = 0; i < 150; ++i)
		--d;

	return 0;
}