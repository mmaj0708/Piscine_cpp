
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

	span bigspan(10010);
	std::deque<int> tmp;
	// for (int i = 0; i < 5000; i++)
	// {
	// 	tmp.push_back(i - 7000);
	// 	tmp.push_front(100 + i);
	// }
	for (int i = 0; i < 10000; i++)
		tmp.push_back(i);
	bigspan.add(tmp.begin(), tmp.end());
	std::cout << bigspan.shortestSpan() << std::endl;
	std::cout << bigspan.longestSpan() << std::endl;
	try
	{
		bigspan.add(tmp.begin(), tmp.begin() + 11);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception RAISED ! " << e.what() << std::endl;
	}
	return (0);
}