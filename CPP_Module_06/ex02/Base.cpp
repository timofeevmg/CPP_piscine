#include "Base.hpp"

Base::~Base()
{
}

Base	*Base::generate(void)
{
	srand(time(NULL));

	int i = rand() % 3 + 1;

	switch (i)
	{
		case 1 :
			return new A;
			break;
		case 2 :
			return new B;
			break;
		default :
			return new C;
	}
}

void	Base::identify(Base *p)
{
	try
	{
		A *a;
		a = dynamic_cast<A *>(p);
		if (a)
			std::cout << "A" << std::endl;

		B *b;
		b = dynamic_cast<B *>(p);
		if (b)
			std::cout << "B" << std::endl;

		C *c;
		c = dynamic_cast<C *>(p);
		if (c)
			std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
		return;
	}
}

void	Base::identify(Base& p)
{
	try
	{
		A *a;
		a = dynamic_cast<A *>(&p);
		if (a)
			std::cout << "A" << std::endl;

		B *b;
		b = dynamic_cast<B *>(&p);
		if (b)
			std::cout << "B" << std::endl;

		C *c;
		c = dynamic_cast<C *>(&p);
		if (c)
			std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
		return;
	}
}
