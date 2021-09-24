#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	Bureaucrat *a = new Bureaucrat("", 0);
	delete a;

	Intern	i;

	Form	*rf = nullptr;
	rf = i.makeForm("SPRAVKA", "VOENKOMAT");

	if (rf != nullptr)
	{
		std::cout << *rf << std::endl;

		Bureaucrat b("IGOR", 120);
		std::cout << b << std::endl;

		b.signForm(*rf);
		std::cout << *rf << std::endl;
		b.executeForm(*rf);

		delete rf;
	}

	rf = i.makeForm("SHRUBBERY CREATION", "OGOROD");

	if (rf != nullptr)
	{
		std::cout << *rf << std::endl;

		Bureaucrat b("IGOR", 120);
		std::cout << b << std::endl;

		b.signForm(*rf);
		std::cout << *rf << std::endl;
		b.executeForm(*rf);

		delete rf;
	}

	return 0;
}