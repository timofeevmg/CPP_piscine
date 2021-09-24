#include "ICharacter.hpp"
#include "AMateria.hpp"

/////////////////////////////////////////////////////////////////
////////////////         ICharacter        //////////////////////
/////////////////////////////////////////////////////////////////

ICharacter::ICharacter()
{
}

ICharacter::~ICharacter()
{
}

ICharacter::ICharacter(const ICharacter& other)
{
	other.getName();
}

ICharacter&	ICharacter::operator=(const ICharacter& other)
{
	other.getName();
	return *this;
}

/////////////////////////////////////////////////////////////////
/////////////////         Character        //////////////////////
/////////////////////////////////////////////////////////////////

Character::Character(const std::string& _name) : ICharacter(), name(_name)
{
	for (int i = 0; i < 4; ++i)
	{
		this->inv[i] = nullptr;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->inv[i] != nullptr)
			delete this->inv[i];
	}
}

Character::Character(const Character& other) : ICharacter(), name(other.name)
{
	for (int i = 0; i < 4; ++i)
	{
		if (other.inv[i] != nullptr)
		{
			this->inv[i] = other.getInventoryMateria(i)->clone();
		}
		else
			this->inv[i] = nullptr;
	}
}

Character&	Character::operator=(const Character& other)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->inv[i] != nullptr)
		{
			delete this->inv[i];
			this->inv[i] = nullptr;
		}
	}
	for (int i = 0; i < 4; ++i)
	{
		if (other.inv[i] != nullptr)
		{
			this->inv[i] = other.getInventoryMateria(i)->clone();
		}
	}
	return *this;
}

const std::string&	Character::getName() const
{
	return this->name;
}

AMateria*	Character::getInventoryMateria(const int& i) const
{
	if (i >= 0 && i < 4)
		return (this->inv[i]);
	else
		return nullptr;
}

void	Character::equip(AMateria* m)
{
	if (m != nullptr)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (this->inv[i] == nullptr)
			{
				this->inv[i] = m;
				break ;
			}
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->inv[idx] = nullptr;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		this->inv[idx]->use(target);
	}
}
