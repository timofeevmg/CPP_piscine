#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Form x("", 150, 150);
	Form y("NOBODY", 151, 151);
	Form z("NOBODY", -5, -5);
	Form f("NOBODY", 0, 0);

	Form a("DOC", 100, 100);
	std::cout << a << std::endl;
	Form b(a);
	std::cout << b << std::endl;
	Form c("SPARVKA", 50, 50);
	c = a;
	std::cout << c << std::endl;

	Bureaucrat h("OLEG", 120);
	h.signForm(c);
	std::cout << c << std::endl;
	Bureaucrat w("EGOR", 10);
	w.signForm(c);
	std::cout << c << std::endl;

	c = a;
	std::cout << c << std::endl;

	return 0;
}