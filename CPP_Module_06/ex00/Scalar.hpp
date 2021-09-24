#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <string>
#include <iostream>
#include <exception>
#include <cstdlib>
#include <cmath>

#define BADARGS	"Error. Only one argument is acceptable."
#define NOARG	"Error. An argument is empty."
#define INVNUM	"Error. Invalid number."
#define IMPOS	"impossible"
#define NONDISP	"Non displayable"

class Scalar
{
private:
	const std::string	num;
	bool				spec;

	void	printChar();
	void	printInt();
	void	printFloat();
	void	printDouble();

	Scalar&	operator=(const Scalar& other);

public:
	Scalar(const char *arg);
	virtual ~Scalar();

	Scalar(const Scalar& other);
	
	const std::string&	getScalarNum() const;
	bool				getSpecStatus() const;

	void	setSpecStatus(const bool status);

	/**************************************/
	//             exceptions             //
	/**************************************/
	class InvalidArgNums : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};

	class EmptyArg : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};

	class InvalidNumber : public std::exception
	{
		virtual const char* what() const throw();
	};

	/**************************************/

	void	convert();
};

#endif
