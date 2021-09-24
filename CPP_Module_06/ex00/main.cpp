#include "Scalar.hpp"

bool	checkSpecNum(const std::string& num)
{
	return (num == "nanf" || num == "+inff" || num == "-inff" || \
		num == "nan" || num == "+inf" || num == "-inf");
}

int		main(int ac, char *av[])
{
	try
	{
		if (ac == 2)
		{
			Scalar num(av[1]);
			if (num.getScalarNum().empty())
				throw Scalar::EmptyArg();
			if (checkSpecNum(num.getScalarNum()))
				num.setSpecStatus(true);
			num.convert();
		}
		else
			throw Scalar::InvalidArgNums();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}