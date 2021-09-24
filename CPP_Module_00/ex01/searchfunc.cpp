#include "phonebook.hpp"

void	printResizeContactField(PhoneBook *PhoneBook, int i, int field)
{
	std::string	tmp;

	{
		tmp = PhoneBook->GetContactField(i, field);
		tmp.resize(9);
		tmp.append(".");
		std::cout << tmp;
	}
}

void	printShortContactsFields(PhoneBook *PhoneBook, int i)
{
	int			field;

	std::cout << std::setw(10);
	std::cout << (i + 1);
	std::cout << "|";
	field = 1;
	std::cout << std::setw(10);
	if (PhoneBook->GetContactField(i, field).length() > 10)
		printResizeContactField(PhoneBook, i, field);
	else
		std::cout << PhoneBook->GetContactField(i, field);
	std::cout << "|";
	field = 2;
	std::cout << std::setw(10);
	if (PhoneBook->GetContactField(i, field).length() > 10)
		printResizeContactField(PhoneBook, i, field);
	else
		std::cout << PhoneBook->GetContactField(i, field);
	std::cout << "|";
	field = 3;
	std::cout << std::setw(10);
	if (PhoneBook->GetContactField(i, field).length() > 10)
		printResizeContactField(PhoneBook, i, field);
	else
		std::cout << PhoneBook->GetContactField(i, field);
	std::cout << std::endl;
}

void	printFullContacts(PhoneBook *PhoneBook)
{
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	std::cout << "----------|----------|----------|----------" << std::endl;

	int		i = 0;

	while (i <= 7)
	{
		if (PhoneBook->GetContactFull(i))
		{
			printShortContactsFields(PhoneBook, i);
		}
		i++;
	}
	std::cout << "-------------------------------------------" << std::endl;
}

bool	isIndexNum(std::string index)
{
	char	sym;

	sym = index.at(0);
	if (sym >= 49 && sym <= 56)
		return true;
	else
		return false;
}

void	printContactFields(PhoneBook *PhoneBook, int i)
{
	std::cout << "First name:\t";
	std::cout << PhoneBook->GetContactField(i, 1) << std::endl;
	std::cout << "Last name:\t";
	std::cout << PhoneBook->GetContactField(i, 2) << std::endl;
	std::cout << "Nickname:\t";
	std::cout << PhoneBook->GetContactField(i, 3) << std::endl;
	std::cout << "Phone number:\t";
	std::cout << PhoneBook->GetContactField(i, 4) << std::endl;
	std::cout << "Darkest secret:\t";
	std::cout << PhoneBook->GetContactField(i, 5) << std::endl;
}

int		searchFunc(PhoneBook *PhoneBook)
{
	printFullContacts(PhoneBook);

	std::string	index;
	int			i;
	bool		ret;
	while (1)
	{
		std::cout << "Enter the required contact index: ";
		ret = std::getline(std::cin, index);
		if (!ret)
			return 1;
		if (index.length() != 1 || !isIndexNum(index))
		{
			std::cout << "Incorrect!Index value should be 1 - 8." << std::endl;
			continue ;
		}
		i = (int)index.at(0) - 48 - 1;
		if (PhoneBook->GetContactFull(i))
		{
			printContactFields(PhoneBook, i);
			break ;
		}
		else
		{
			std::cout << "Sorry, this contact is not full yet." << std::endl;
			continue ;
		}
	}
	return 0;
}
