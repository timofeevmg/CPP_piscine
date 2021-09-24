#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Form	*Intern::makeForm(const std::string& name, const std::string& target) const
{
	Form	*tmp = nullptr;

	std::string	forms[3] = \
	{
		"SHRUBBERY CREATION",
		"ROBOTOMY REQUEST",
		"PRESIDENTAL PARDON"
	};

	int	i = 0;
	for (; i < 3; ++i)
	{
		if (forms[i] == name)
			break;
	}

	switch(i)
	{
		case 0:
		{
			tmp = new ShrubberyCreationForm(target);
			break;
		}
		case 1:
		{
			tmp = new RobotomyRequestForm(target);
			break;
		}
		case 2:
		{
			tmp = new PresidentialPardonForm(target);
			break;
		}
		default:
		{
			std::cout << "Intern couldn`t find a sample " << name << " form for " << target << "."\
				<< std::endl;
		}
	}
	if (tmp != nullptr)
		std::cout << "Intern creates " << name << " form for " << target << "."\
				<< std::endl;

	return tmp;
}
