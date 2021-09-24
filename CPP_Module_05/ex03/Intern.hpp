#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>

class Form;

class Intern
{
public:
	Intern() {};
	~Intern() {};

	Form	*makeForm(const std::string& name, const std::string& target) const;
};

#endif
