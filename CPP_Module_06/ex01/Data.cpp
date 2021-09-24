#include "Data.hpp"

Data::Data() : \
number(0), name("default"), symbol('_')
{
}

Data::Data(int _number, std::string _name, char _symbol) : \
number(_number), name(_name), symbol(_symbol)
{
}

Data::~Data()
{
}

Data::Data(const Data& other) : \
number(other.number), name(other.name), symbol(other.symbol)
{
}

Data&	Data::operator=(const Data& other)
{
	this->number = other.number;
	this->name = other.name;
	this->symbol = other.symbol;

	return *this;
}

int			Data::getDataNum() const
{
	return this->number;
}

std::string	Data::getDataName() const
{
	return this->name;
}

char		Data::getDataSymbol() const
{
	return this->symbol;
}

uintptr_t	Data::serialize(Data *ptr)
{
	return reinterpret_cast<std::uintptr_t>(ptr);
}

Data		*Data::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
