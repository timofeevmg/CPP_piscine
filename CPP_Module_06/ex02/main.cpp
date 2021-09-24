#include "Base.hpp"

int		main()
{
	Base	tmp;
	Base *ptr = tmp.generate();

	tmp.identify(ptr);

	tmp.identify(*ptr);

	return 0;
}
