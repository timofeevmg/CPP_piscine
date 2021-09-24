#include "templates.hpp"
#include <iostream>
#include "Awesome.hpp"

int		main()
{
	/**************     subj     ***************/
	std::cout << "********     subj     ********" << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

	/**************     char     ***************/
	std::cout << "********     char     ********" << std::endl;
	char x = 'x';
	char y = 'y';

	std::cout << "before:\tx=" << x << " |" \
		<< " y=" << y << std::endl;
	swap(x, y);
	std::cout << "swap:\tx=" << x << " |" \
		<< " y=" << y << std::endl;

	std::cout << "min:\t" << min(x, y) << std::endl;

	std::cout << "max:\t" << max(x, y) << std::endl;

	/**************     int     ***************/
	std::cout << "********     int     ********" << std::endl;
	int i = 10;
	int j = 50;

	std::cout << "before:\ti=" << i << " |" \
		<< " j=" << j << std::endl;
	swap(i, j);
	std::cout << "swap:\ti=" << i << " |" \
		<< " j=" << j << std::endl;

	std::cout << "min:\t" << min(i, j) << std::endl;

	std::cout << "max:\t" << max(i, j) << std::endl;

	/**************     float     ***************/
	std::cout << "********     float     ********" << std::endl;
	float v = 42.042f;
	float w = 21.021f;
	
	std::cout << "before:\tv=" << v << " |" \
		<< " w=" << w << std::endl;
	swap(v, w);
	std::cout << "swap:\tv=" << v << " |" \
		<< " w=" << w << std::endl;

	std::cout << "min:\t" << min(v, w) << std::endl;

	std::cout << "max:\t" << max(v, w) << std::endl;

	/**************     double     ***************/
	std::cout << "********     double     ********" << std::endl;
	double f = 42.042;
	double e = 21.021;
	
	std::cout << "before:\tf=" << f << " |" \
		<< " e=" << e << std::endl;
	swap(f, e);
	std::cout << "swap:\tf=" << f << " |" \
		<< " e=" << e << std::endl;

	std::cout << "min:\t" << min(f, e) << std::endl;

	std::cout << "max:\t" << max(f, e) << std::endl;

	/**************     Awesome     ***************/
	std::cout << "********     Awesome     ********" << std::endl;
	Awesome one(42);
	Awesome two(21);
	
	std::cout << "before:\tone=" << one << " |" \
		<< " two=" << two << std::endl;
	swap(one, two);
	std::cout << "swap:\tone=" << one << " |" \
		<< " two=" << two << std::endl;

	std::cout << "min:\t" << min(one, two) << std::endl;

	std::cout << "max:\t" << max(one, two) << std::endl;

	return 0;
}
