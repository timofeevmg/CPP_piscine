#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
private:
	AMateria&	operator=(const AMateria& other);

protected:
	const std::string	type;

public:
	AMateria(const std::string& _type);
	AMateria(const AMateria& other);
	virtual ~AMateria();

	const std::string&	getType() const; //Returns the materia type

	virtual AMateria	*clone() const = 0;
	virtual void	use(ICharacter& target);
};

class Ice : public AMateria
{
private:
	Ice&	operator=(const Ice& other);

public:
	Ice();
	virtual ~Ice();
	Ice(const Ice& other);

	virtual AMateria*	clone() const;
	virtual void	use(ICharacter& target);	
};

class Cure : public AMateria
{
private:
	Cure&	operator=(const Cure& other);

public:
	Cure();
	virtual ~Cure();
	Cure(const Cure& other);

	virtual AMateria*	clone() const;
	virtual void	use(ICharacter& target);	
};

#endif
