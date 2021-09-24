#include "phonebook.hpp"

int	addFunc(PhoneBook *PhoneBook)
{
	int			i = PhoneBook->GetNextContact();
	int			field = 1;
	std::string	str;
	bool		ret;

	while (field <= 5)
	{
		std::cout << "Enter the ";
		if (field == 1)
			std::cout << "first name";
		else if (field == 2)
			std::cout << "last name";
		else if (field == 3)
			std::cout << "nickname";
		else if (field == 4)
			std::cout << "phone number";
		else if (field == 5)
			std::cout << "darkest secret";
		std::cout << " of contact#";
		std::cout << (i + 1);
		std::cout << ": ";
		ret = std::getline(std::cin, str);
		if (!ret)
		{
			std::cout << std::endl;
			return 1;
		}
		PhoneBook->SetContactField(i, field, str);
		field++;
	}
	PhoneBook->SetContactFull(i);
	(i == 7) ? (PhoneBook->SetNextContact(0)) : (PhoneBook->SetNextContact(i + 1));
	return 0;
}
