#include "span.hpp"
#include <ctime>

int		main()
{
	Span	s(100);

	try
	{
	s.addNumber(0);
	s.addNumber(10);
	s.addNumber(68);
	s.addNumber(1);
	s.addNumber(5);

	s.print();

	std::cout << "SHORT: " << s.shortestSpan() << std::endl;
	std::cout << "LONG: " << s.longestSpan() << std::endl;

	std::vector<int> w;

	srand(time(NULL));
	for (int i = 0; i < 90; ++i)//try i > 100 for errors
	{
		int num = rand() % 1000;
		w.push_back(num);
	}

	s.addNumber((w.begin() + 10), (w.end() - 50));
	s.print();

	std::cout << "SHORT: " << s.shortestSpan() << std::endl;
	std::cout << "LONG: " << s.longestSpan() << std::endl;

	Span	tmp(10);
	for (int i = 0; i < 10; ++i)
	{
		int num = rand() % 1000;
		tmp.addNumber(num);
	}

	tmp.print();

	s = tmp;

	s.print();

	std::cout << "SHORT: " << s.shortestSpan() << std::endl;
	std::cout << "LONG: " << s.longestSpan() << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}