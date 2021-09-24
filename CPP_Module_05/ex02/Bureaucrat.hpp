#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Form;

class Bureaucrat
{
private:
	const std::string	name;
	unsigned int		grade;

public:
	Bureaucrat(const std::string& _name, const unsigned int& _grade);
	virtual ~Bureaucrat();
	Bureaucrat(const Bureaucrat& other);

	Bureaucrat&	operator=(const Bureaucrat& other);

	const std::string&	getName() const;
	const unsigned int&	getGrade() const;

	//prefix
	Bureaucrat&	operator++();
	Bureaucrat&	operator--();
	
	void	signForm(Form& f);

	void	executeForm(const Form& form) const;

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
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& clerk);

#endif
