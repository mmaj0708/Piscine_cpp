/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:13:00 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/23 14:16:14 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	// normal
	try
	{
		Bureaucrat Tom("Tom", 149);
		// std::cout << "CHECK1" << std::endl;
		Tom.decremente();
		std::cout << Tom;
		Tom.incremente();
		std::cout << Tom;
	}
	catch(const std::exception& e)
	{
		// std::cout << "CHECK1" << std::endl;
		std::cerr << e.what() << '\n';
	}

	// error too high
	try
	{
		Bureaucrat gne("gne", 150);
		// std::cout << "CHECK2" << std::endl;
		gne.decremente();
		std::cout << gne;
	}
	catch(std::exception& e)
	{
		// std::cout << "CHECK2" << std::endl;
		std::cerr << e.what() << '\n';
	}

	// error too low
	try
	{
		// std::cout << "CHECK2" << std::endl;
		Bureaucrat bill("Bill", 1);
		bill.incremente();
	}
	catch(std::exception& e)
	{
		// std::cout << "CHECK2" << std::endl;
		std::cerr << e.what() << '\n';
	}
}
