#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	const std::string	target;

	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);

public:
	ShrubberyCreationForm(const std::string& _target);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm& other);

	virtual void	execute(const Bureaucrat& executor) const;

	///////////////////////////////////////////////////////
	/////////////        Exceptions         ///////////////
	///////////////////////////////////////////////////////
	class ErrorFileCreate : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};
	//////////////           ***         //////////////////
};

void	writeASCIITrees(std::ofstream& outFile);

#endif
