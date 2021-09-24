#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>

class AMateria;

class ICharacter
{
private:
	ICharacter(const ICharacter& other);

	ICharacter&	operator=(const ICharacter& other);

public:
	ICharacter();
	virtual ~ICharacter();

	virtual const std::string&	getName() const = 0;
	virtual void	equip(AMateria *m) = 0;
	virtual void	unequip(int idx) = 0;
	virtual void	use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
private:
	const std::string	name;
	AMateria*	inv[4];

public:
	Character(const std::string& _name);
	virtual ~Character();
	Character(const Character& other);

	Character&	operator=(const Character& other);

	virtual const std::string&	getName() const;

	AMateria*	getInventoryMateria(const int& i) const;

	virtual void	equip(AMateria* m);
	virtual void	unequip(int idx);
	virtual void	use(int idx, ICharacter& target);
};

#endif
