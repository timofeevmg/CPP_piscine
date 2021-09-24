#ifndef FORM_HPP
#define FORM_HPP

#include <string>

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	const unsigned int	signGrade;
	const unsigned int	execGrade;
	bool				signState;

public:
	Form(const std::string& _name, \
	const unsigned int& _sg, const unsigned int& _eg);
	~Form();
	Form(const Form& other);

	Form&	operator=(const Form& other);

	const std::string&	getFormName() const;
	const unsigned int&	getFormSignGrade() const;
	const unsigned int&	getFormExecGrade() const;
	bool				getFormSignState() const;

	void	beSigned(const Bureaucrat& b);

	///////////////////////////////////////////////////////
	/////////////        Exceptions         ///////////////
	///////////////////////////////////////////////////////
	class EmptyNameException : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};
	//////////////           ***         //////////////////
};

std::ostream&	operator<<(std::ostream& out, const Form& f);

#endif
