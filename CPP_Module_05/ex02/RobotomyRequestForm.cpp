#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& _target) : \
Form("ROBOTOMY", 72, 45), target(_target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : \
Form("ROBOTOMY", 72, 45), target(other.target)
{
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	other.getFormName();
	return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	Form::execute(executor);
	std::cout << "Vzyk-Vzyk-Vzyk!.." \
		<< this->target << " has been robotomized successfully 50'%' of the time." \
		<< std::endl;
}
