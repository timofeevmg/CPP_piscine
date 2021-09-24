#ifndef DATA_HPP
#define DATA_HPP

#include <string>
#include <iostream>

class Data
{
private:
	int			number;
	std::string	name;
	char		symbol;

public:
	Data();
	Data(int _number, std::string _name, char _symbol);
	virtual ~Data();

	Data(const Data& other);

	Data&	operator=(const Data& other);

	int			getDataNum() const;
	std::string	getDataName() const;
	char		getDataSymbol() const;

	uintptr_t	serialize(Data *ptr);
	Data		*deserialize(uintptr_t raw);
};

#endif

