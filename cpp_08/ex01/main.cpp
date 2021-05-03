
#include "span.hpp"

int		main()
{

	span sp = span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		sp.addNumber(56);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "------" << std::endl;

	span spa = span(4);

	spa.addNumber(2);
	spa.addNumber(7);
	spa.addNumber(3);
	spa.addNumber(9);
	try
	{
		spa.addNumber(56);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << spa.shortestSpan() << std::endl;
	std::cout << spa.longestSpan() << std::endl;
	std::cout << "------" << std::endl;

	span spa2 = span(1);
    spa2.addNumber(1);

	try
	{
        std::cout << spa2.shortestSpan() << std::endl;
        std::cout << spa2.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "------" << std::endl;

	span sp5 = span(40000);

	for (int i = 0; i < 20000; i++)
	{
		sp5.addNumber(i);
	}
	std::cout << sp5.shortestSpan() << std::endl;
	std::cout << sp5.longestSpan() << std::endl;
	return (0);
}