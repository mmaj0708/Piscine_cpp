/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:13:00 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/26 09:57:28 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	// normal
	try
	{
		Bureaucrat Tom("Tom", 149);
		Tom.decremente();
		std::cout << Tom;
		Tom.incremente();
		std::cout << Tom;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// error too high
	try
	{
		Bureaucrat gne("gne", 150);
		gne.decremente();
		std::cout << gne;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// error too low
	try
	{
		Bureaucrat bill("Bill", 1);
		bill.incremente();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Form		papier("papier", 100, 45);
		Bureaucrat  jim("jim", 101);

		std::cout << std::endl;
		std::cout << papier << std::endl;
		jim.incremente();
		jim.signForm(papier);
		std::cout << papier << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

		try
	{
		Form		contrat("contrat", 100, 45);
		Bureaucrat  sam("sam", 101);

		std::cout << std::endl;
		std::cout << contrat << std::endl;
		// sam.incremente();
		sam.signForm(contrat);
		std::cout << contrat << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
