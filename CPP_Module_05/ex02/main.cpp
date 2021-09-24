#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	std::cout << "----------------SHRUBBERY--------------" << std::endl;
	Bureaucrat aSh("IGOR", 150);
	std::cout << aSh << std::endl;
	ShrubberyCreationForm fSh("DACHA");
	std::cout << fSh << std::endl;

	aSh.signForm(fSh);
	std::cout << fSh << std::endl;

	aSh.executeForm(fSh);

	std::cout << "------------------------------" << std::endl;
	Bureaucrat bSh("EGOR", 140);
	std::cout << bSh << std::endl;
	ShrubberyCreationForm ffSh("DACHA");
	std::cout << ffSh << std::endl;

	bSh.signForm(ffSh);
	std::cout << ffSh << std::endl;

	bSh.executeForm(ffSh);

	std::cout << "------------------------------" << std::endl;
	Bureaucrat cSh("SASHA", 120);
	std::cout << cSh << std::endl;
	ShrubberyCreationForm fffSh("DACHA");
	std::cout << fffSh << std::endl;

	cSh.signForm(fffSh);
	std::cout << fffSh << std::endl;

	cSh.executeForm(fffSh);

	std::cout << "----------------ROBOTOMY--------------" << std::endl;
	Bureaucrat aRo("IGOR", 75);
	std::cout << aRo << std::endl;
	RobotomyRequestForm fRo("BOCAL");
	std::cout << fRo << std::endl;

	aRo.signForm(fRo);
	std::cout << fRo << std::endl;

	aRo.executeForm(fRo);

	std::cout << "------------------------------" << std::endl;
	Bureaucrat bRo("EGOR", 50);
	std::cout << bRo << std::endl;
	RobotomyRequestForm ffRo("BOCAL");
	std::cout << ffRo << std::endl;

	bRo.signForm(ffRo);
	std::cout << ffRo << std::endl;

	bRo.executeForm(ffRo);

	std::cout << "------------------------------" << std::endl;
	Bureaucrat cRo("SASHA", 20);
	std::cout << cRo << std::endl;
	RobotomyRequestForm fffRo("BOCAL");
	std::cout << fffRo << std::endl;

	cRo.signForm(fffRo);
	std::cout << fffRo << std::endl;

	cRo.executeForm(fffRo);

	std::cout << "----------------PRESIDENTAL_PARDON--------------" << std::endl;
	Bureaucrat aPP("IGOR", 30);
	std::cout << aPP << std::endl;
	PresidentialPardonForm fPP("BOCAL");
	std::cout << fPP << std::endl;

	aPP.signForm(fPP);
	std::cout << fPP << std::endl;

	aPP.executeForm(fPP);

	std::cout << "------------------------------" << std::endl;
	Bureaucrat bPP("EGOR", 20);
	std::cout << bPP << std::endl;
	PresidentialPardonForm ffPP("BOCAL");
	std::cout << ffPP << std::endl;

	bPP.signForm(ffPP);
	std::cout << ffPP << std::endl;

	bPP.executeForm(ffPP);

	std::cout << "------------------------------" << std::endl;
	Bureaucrat cPP("SASHA", 1);
	std::cout << cPP << std::endl;
	PresidentialPardonForm fffPP("BOCAL");
	std::cout << fffPP << std::endl;

	cPP.signForm(fffPP);
	std::cout << fffPP << std::endl;

	cPP.executeForm(fffPP);

	return 0;
}