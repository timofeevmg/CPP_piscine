#include "Scalar.hpp"

Scalar::Scalar(const char *arg) : num(arg), spec(false)
{
}

Scalar::~Scalar()
{
}

Scalar::Scalar(const Scalar& other) : num(other.num), spec(other.spec)
{
}

Scalar&	Scalar::operator=(const Scalar& other)
{
	this->spec = other.spec;
	return *this;
}

const std::string&	Scalar::getScalarNum() const
{
	return this->num;
}

bool	Scalar::getSpecStatus() const
{
	return this->spec;
}

void	Scalar::setSpecStatus(const bool status)
{
	this->spec = status;
}

	/**************************************/
	//             exceptions             //
	/**************************************/

const char*	Scalar::InvalidArgNums::what() const throw()
{
	return BADARGS;
}

const char*	Scalar::EmptyArg::what() const throw()
{
	return NOARG;
}

const char* Scalar::InvalidNumber::what() const throw()
{
	return INVNUM;
}

	/**************************************/

void	Scalar::printChar()
{
	if (this->getSpecStatus())
		std::cout << "char:\t" << IMPOS << std::endl;
	else
	{
		try
		{
			int		tmp;

			tmp = stoi(this->num);

			float	ftmp;
			size_t	fpos;
			ftmp = stof(this->num, &fpos);

			if ((fpos == (this->num.length() - 1) && this->num[fpos] != 'f') || \
				(fpos < (this->num.length() - 1)))
				throw Scalar::InvalidNumber();

			if (tmp > 31 && tmp < 127)
			{
				std::cout << "char:\t" << "'" << static_cast<char>(tmp) << "'" << std::endl;
			}
			else if (tmp < 0 || tmp > 127)
				std::cout << "char:\t" << IMPOS << std::endl;
			else
				std::cout << "char:\t" << NONDISP << std::endl;
			}
		catch(const std::invalid_argument& ia)
		{
			throw Scalar::InvalidNumber();
		}
		catch(const std::out_of_range& oor)
		{
			std::cout << "char:\t" << IMPOS << std::endl;
		}
	}
}

void	Scalar::printInt()
{
	if (this->getSpecStatus())
		std::cout << "int:\t" << IMPOS << std::endl;
	else
	{
		try
		{
			int		tmp;
			tmp = stoi(this->num);

			std::cout << "int:\t" << tmp << std::endl;
		}
		catch(const std::invalid_argument& ia)
		{
			throw Scalar::InvalidNumber();
		}
		catch(const std::out_of_range& oor)
		{
			std::cout << "int:\t" << IMPOS << std::endl;
		}
		
	}
}

void	Scalar::printFloat()
{
	if (this->getSpecStatus())
		std::cout << "float:\t" << stof(this->num) << "f" << std::endl;
	else
	{
		try
		{
			float	ftmp;
			ftmp = stof(this->num);

			int		itmp;
			itmp = stoi(this->num);

			if ((ftmp - static_cast<float>(itmp)) > 0)
				std::cout << "float:\t" << ftmp << "f" << std::endl;
			else
				std::cout << "float:\t" << ftmp << ".0f" << std::endl;
		}
		catch(const std::invalid_argument& ia)
		{
			throw Scalar::InvalidNumber();
		}
		catch(const std::out_of_range& oor)
		{
			std::cout << "float:\t" << IMPOS << std::endl;
		}
	}
}

void	Scalar::printDouble()
{
	if (this->getSpecStatus())
		std::cout << "double:\t" << stod(this->num) << std::endl;
	else
	{
		try
		{
			double	dtmp;
			dtmp = stod(this->num);

			int		itmp;
			itmp = stoi(this->num);

			if ((dtmp - static_cast<double>(itmp)) == 0)
				std::cout << "double:\t" << dtmp << ".0" << std::endl;
			else
				std::cout << "double:\t" << dtmp << std::endl;
		}
		catch(const std::invalid_argument& ia)
		{
			throw Scalar::InvalidNumber();
		}
		catch(const std::out_of_range& oor)
		{
			std::cout << "double:\t" << IMPOS << std::endl;
		}
	}
}

void	Scalar::convert()
{
	printChar();
	printInt();
	printFloat();
	printDouble();
}
