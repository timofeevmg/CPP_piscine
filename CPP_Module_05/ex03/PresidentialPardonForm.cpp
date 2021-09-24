#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& _target) : \
Form("PRESIDENTAL_PARDON", 25, 5), target(_target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : \
Form("PRESIDENTAL_PARDON", 25, 5), target(other.target)
{
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	other.getFormName();
	return *this;
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	Form::execute(executor);
	std::cout << this->target \
		<< " has been pardoned by Zafod Beeblebrox." \
		<< std::endl;
}
