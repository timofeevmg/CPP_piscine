#include "IMateriaSource.hpp"

/////////////////////////////////////////////////////////////////
//////////////         IMateriaSource        ////////////////////
/////////////////////////////////////////////////////////////////

IMateriaSource::IMateriaSource()
{
}

IMateriaSource::~IMateriaSource()
{
}

// IMateriaSource::IMateriaSource(const IMateriaSource& other)
// {
// }

// IMateriaSource&	IMateriaSource::operator=(const IMateriaSource& other)
// {
// 	return *this;
// }

/////////////////////////////////////////////////////////////////
///////////////         MateriaSource        ////////////////////
/////////////////////////////////////////////////////////////////

MateriaSource::MateriaSource() : IMateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		this->source[i] = nullptr;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->source[i] != nullptr)
		{
			delete this->source[i];
			this->source[i] = nullptr;
		}
	}
}

MateriaSource::MateriaSource(const MateriaSource& other) : IMateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		if (other.source[i] != nullptr)
			this->source[i] = other.source[i]->clone();
		else
			this->source[i] = nullptr;
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->source[i] != nullptr)
		{
			delete this->source[i];
			this->source[i] = nullptr;
		}
	}
	for (int i = 0; i < 4; ++i)
	{
		if (other.source[i] != nullptr)
		{
			this->source[i] = other.source[i]->clone();
		}
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->source[i] == nullptr)
		{
			this->source[i] = m;
			break;
		}
	}
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->source[i]->getType() == type)
			return this->source[i]->clone();
	}
	return nullptr;
}
