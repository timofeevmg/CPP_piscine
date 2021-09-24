#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string& _name, \
const unsigned int& _sg, const unsigned int& _eg) : \
name(_name), signGrade(_sg), execGrade(_eg), signState(false)
{
	try
	{
		if (name.empty())
			throw EmptyNameException();
		else if (signGrade < 1 || execGrade < 1)
			throw GradeTooHighException();
		else if (signGrade > 150 || execGrade > 150)
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		this->~Form();
		std::cerr << e.what() << std::endl;
	}
}

Form::~Form()
{
}

Form::Form(const Form& other) : \
name(other.name), signGrade(other.signGrade), \
execGrade(other.execGrade), signState(other.signState)
{
}

Form&	Form::operator=(const Form& other)
{
	if (this->signState != other.signState)
		this->signState = other.signState;
	return *this;
}

const std::string&	Form::getFormName() const
{
	return this->name;
}

bool				Form::getFormSignState() const
{
	return this->signState;
}

const unsigned int&	Form::getFormSignGrade() const
{
	return this->signGrade;
}

const unsigned int&	Form::getFormExecGrade() const
{
	return this->execGrade;
}

void	Form::beSigned(const Bureaucrat& b)
{
	try
	{
		if (this->signGrade >= b.getGrade())
		{
			this->signState = true;
		}
		else
			throw GradeTooHighException();//form has higher grade!!!
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& out, const Form& f)
{
	std::cout << "Form " << f.getFormName() \
		<< " has Sign Grade: " << f.getFormSignGrade() \
		<< ", Execute Grade: " << f.getFormExecGrade();
	if (f.getFormSignState())
		std::cout << ", signed.";
	else
		std::cout << ", not signed.";
	return out;
}

///////////////////////////////////////////////////////
/////////////        Exceptions         ///////////////
///////////////////////////////////////////////////////
const char*	Form::EmptyNameException::what() const throw()
{
	return "Form with empty name is forbidden.";
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return "Form`s grade is too high.";
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return "Form`s grade is too low.";
}
//////////////           ***         //////////////////
