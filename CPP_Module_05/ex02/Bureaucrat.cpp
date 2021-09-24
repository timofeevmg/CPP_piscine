#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string& _name, const unsigned int& _grade) : \
name(_name), grade(_grade)
{
	try
	{
		if (_name.empty())
			throw EmptyNameException();
		else if (_grade < 1)
			throw GradeTooHighException();
		else if (_grade > 150)
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		this->~Bureaucrat();
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : \
name(other.name), grade(other.grade)
{
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this->grade != other.grade)
		this->grade = other.grade;
	return *this;
}

const std::string&	Bureaucrat::getName() const
{
	return this->name;
}

const unsigned int&	Bureaucrat::getGrade() const
{
	return this->grade;
}

Bureaucrat&	Bureaucrat::operator++()
{
	try
	{
		if (this->grade > 1)
			--this->grade;
		else
			throw GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " "  << e.what() << std::endl;
	}
	return *this;
}

Bureaucrat&	Bureaucrat::operator--()
{
	try
	{	
		if (this->grade < 150)
			++this->grade;
		else
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " " << e.what() << std::endl;
	}
	return *this;
}

void	Bureaucrat::signForm(Form& f)
{
	try
	{
		if (this->grade <= f.getFormSignGrade())
			f.beSigned(*this);
		else
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(const Form& form) const
{
	try
	{
		form.execute(*this);
		std::cout << "Bureaucrat " << this->name \
		<< " executes " << form.getFormName() << "." \
		<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

///////////////////////////////////////////////////////
/////////////        Exceptions         ///////////////
///////////////////////////////////////////////////////
const char*	Bureaucrat::EmptyNameException::what() const throw()
{
	return "Bureaucrat with empty name is forbidden.";
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat`s grade is too high.";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat`s grade is too low.";
}
//////////////           ***         //////////////////

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& clerk)
{
	out << "Bureaucrat " << clerk.getName() << ", " \
		<< "bureaucrat grade " << clerk.getGrade() << ".";
	return out;
}
