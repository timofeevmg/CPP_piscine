#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	const std::string	target;

	RobotomyRequestForm&	operator=(const RobotomyRequestForm& other);

public:
	RobotomyRequestForm(const std::string& _target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm& other);

	virtual void	execute(const Bureaucrat& executor) const;
};

#endif
