#include "AMateria.hpp"
#include "ICharacter.hpp"

/////////////////////////////////////////////////////////////////
///////////////         AMateria        /////////////////////////
/////////////////////////////////////////////////////////////////

AMateria::AMateria(const std::string& _type) : type(_type)
{
}

AMateria::AMateria(const AMateria& other) : type(other.type)
{
}

AMateria::~AMateria()
{
}

AMateria&	AMateria::operator=(const AMateria& other)
{
	other.getType();
	return *this;
}

const std::string&	AMateria::getType() const
{
	return this->type;
}

void	AMateria::use(ICharacter& target)
{
	target.getName();
	std::cout << "The Greate Universe Emptiness." << std::endl;
}

/////////////////////////////////////////////////////////////////
/////////////////         Ice        ////////////////////////////
/////////////////////////////////////////////////////////////////

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(const Ice& other) : AMateria(other.type)
{
}

Ice&	Ice::operator=(const Ice& other)
{
	other.getType();
	return *this;
}

AMateria*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" \
		<< std::endl;
}

/////////////////////////////////////////////////////////////////
/////////////////         Cure        ///////////////////////////
/////////////////////////////////////////////////////////////////

Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(const Cure& other) : AMateria(other.type)
{
	other.getType();
}

Cure&	Cure::operator=(const Cure& other)
{
	other.getType();
	return *this;
}

AMateria*	Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "`s wounds *" \
		<< std::endl;
}
