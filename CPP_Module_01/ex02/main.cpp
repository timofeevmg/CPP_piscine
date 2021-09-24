#include <iostream>
#include <string>

int		main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string		&stringREF = str;

	std::cout << "address of the string:\t\t" << &str << std::endl;
	std::cout << "address of the string using ptr:" << stringPTR << std::endl;
	std::cout << "address of the string using ref:" << &stringREF << std::endl;

	std::cout << "the string:\t\t" << str << std::endl;
	std::cout << "the string using ptr:\t" << *stringPTR << std::endl;
	std::cout << "the string using ref:\t" << stringREF << std::endl;
}
