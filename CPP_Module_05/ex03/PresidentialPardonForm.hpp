#ifndef PRESIDENTALPARDONFORM_HPP
#define PRESIDENTALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	const std::string	target;

	PresidentialPardonForm&	operator=(const PresidentialPardonForm& other);

public:
	PresidentialPardonForm(const std::string& _target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm& other);

	virtual void	execute(const Bureaucrat& executor) const;
};

#endif
