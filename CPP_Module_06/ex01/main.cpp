#include "Data.hpp"

int		main()
{
	Data d(42, "Maksim", 'x');
	std::cout << d.getDataNum() << "|" \
		<< d.getDataName() << "|" \
		<< d.getDataSymbol() << std::endl;

	std::uintptr_t	p = d.serialize(&d);

	Data *dd;

	dd = d.deserialize(p);

	std::cout << dd->getDataNum() << "|" \
		<< dd->getDataName() << "|" \
		<< dd->getDataSymbol() << std::endl;

	std::cout << sizeof(d) << std::endl;
	std::cout << sizeof(p) << std::endl;
	std::cout << sizeof(*dd) << std::endl;

	return 0;
}