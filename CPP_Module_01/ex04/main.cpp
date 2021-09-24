#include "replace.hpp"

int		main(int ac, char **av)
{
	if (ac != 4)
	{
		callError(ERRNUMARGS);
		return 0;
	}
	else
	{
		std::string const	inf = av[1];
		std::string const	s1 = av[2];
		std::string const	s2 = av[3];
		
		if (!s1.length())
		{
			callError(ERREMPTY);
			return 0;
		}
		if (!s2.compare(s1))
		{
			callError(ERREQSTR);
			return 0;
		}
		if (!replaceStr(inf, s1, s2))
			return 0;
	}
	return 0;
}
