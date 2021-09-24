#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
// private:
// 	IMateriaSource(const IMateriaSource& other);

// 	IMateriaSource&	operator=(const IMateriaSource& other);

public:
	IMateriaSource();
	virtual ~IMateriaSource();


	virtual void	learnMateria(AMateria* m) = 0;
	virtual AMateria*	createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
private:
	AMateria* source[4];

public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource& other);

	MateriaSource&	operator=(const MateriaSource& other);

	virtual void	learnMateria(AMateria* m);
	virtual AMateria*	createMateria(const std::string& type);
};

#endif
