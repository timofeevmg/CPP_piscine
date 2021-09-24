#include "phonebook.hpp"

int		main(void)
{
	printGreetings();

	bool		ret;
	std::string	cmd;
	PhoneBook	PhoneBook;

	while(1)
	{
		std::cout << "> ";
		ret = std::getline(std::cin, cmd);
		if (!ret)
		{
			std::cout << std::endl;
			break ;
		}
		if (cmd.empty())
			continue ;
		if (!cmd.compare("ADD"))
		{
			if (addFunc(&PhoneBook))
				return 0;
		}
		else if (!cmd.compare("SEARCH"))
		{
			if (searchFunc(&PhoneBook))
				return 0;;
		}
		else if (!cmd.compare("EXIT"))
		{
			std::cout << "Now all contacts will be erased!" << std::endl;
			printBye();
			return (0);
		}
		else
			std::cout << "Incorrect command!\nPlease use ADD/SEARCH/EXIT." << std::endl;
	}
	return 0;
}
