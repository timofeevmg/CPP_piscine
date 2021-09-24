#include "Array.hpp"
#include "Awesome.hpp"

int		main()
{
	// int *a = new int();
	// std::cout << *a << std::endl;

	std::cout << "Creating an empty array a:" << std::endl;
	Array<int> a; //create empty array
	
	unsigned int size_a = a.size();
	std::cout << "size: " << size_a << std::endl;

	try
	{
			std::cout << "elements: " << a[size_a] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "Creating an array b:" << std::endl;
	Array<int> b(5);

	unsigned int size_b = b.size();
	std::cout << "size: " << size_b << std::endl;
	std::cout << "elements: " ;
	for (unsigned int i = 0; i < size_b; ++i)
		std::cout << b[i] << " ";
	std::cout << "." << std::endl;

	try
	{
		std::cout << "b[5]: " << b[5] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	b[0] = 0, b[1] = 1, b[2] = 2, b[3] = 3, b[4] = 4;
	std::cout << "b[0] = 0, b[1] = 1, b[2] = 2, b[3] = 3, b[4] = 4." << std::endl;
	std::cout << "elements: " ;
	for (unsigned int i = 0; i < size_b; ++i)
		std::cout << b[i] << " ";
	std::cout << "." << std::endl;

	std::cout << "Creating an array c from b: c(b)." << std::endl;
	Array<int> c(b);
	std::cout << "elements: " ;
	for (unsigned int i = 0; i < c.size(); ++i)
		std::cout << b[i] << " ";
	std::cout << "." << std::endl;

	b[0] = 4, b[1] = 3, b[2] = 2, b[3] = 1, b[4] = 0;
	std::cout << "b[0] = 4, b[1] = 3, b[2] = 2, b[3] = 1, b[4] = 0." << std::endl;
	std::cout << "elements: " ;
	for (unsigned int i = 0; i < size_b; ++i)
		std::cout << b[i] << " ";
	std::cout << "." << std::endl;

	std::cout << "Assigning b to c: c = b." << std::endl;
	c = b;
	std::cout << "elements: " ;
	for (unsigned int i = 0; i < c.size(); ++i)
		std::cout << b[i] << " ";
	std::cout << "." << std::endl;

/////////////////////////////////////////////////////////////
	std::cout << "/** array of class object test **/" << std::endl;

	std::cout << "Creating an empty array x from class objects Awesome." << std::endl;
	Array<Awesome> x;
	try
	{
		std::cout << x[x.size()] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Creating an array x from class objects Awesome: y(5)" << std::endl;
	Array<Awesome> y(5);
	std::cout << "size: " << y.size() << std::endl;
	std::cout << "elements: " ;
	for (unsigned int i = 0; i < y.size(); ++i)
		std::cout << y[i] << " ";
	std::cout << "." << std::endl;

	y[1] = 21, y[3] = 21;
	std::cout << "y[1] = 21, y[3] = 21." << std::endl;
	std::cout << "elements: " ;
	for (unsigned int i = 0; i < y.size(); ++i)
		std::cout << y[i] << " ";
	std::cout << "." << std::endl;

	std::cout << "x = y." << std::endl;
	x = y;
	std::cout << "x elements: " ;
	for (unsigned int i = 0; i < x.size(); ++i)
		std::cout << x[i] << " ";
	std::cout << "." << std::endl;

	try
	{
		std::cout << x[x.size() + 1] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
