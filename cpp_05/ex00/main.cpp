/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:13:00 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/23 12:32:17 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	// try
	// {
	// 	Bureaucrat Tom("Tom", 150);
	// 	std::cout << "CHECK1" << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << "CHECK1" << std::endl;
	// 	std::cerr << e.what() << '\n';
	// }

	Bureaucrat gne("gne", 150);

	try
	{
		std::cout << "CHECK2" << std::endl;
		gne.decremente();
	}
	catch(std::exception& e)
	{
		std::cout << "CHECK2" << std::endl;
		std::cerr << e.what() << '\n';
	}


	// try
	// {
	// 	std::cout << "CHECK2" << std::endl;
	// 	Bureaucrat bill("Bill", 151);
	// }
	// catch(std::exception& e)
	// {
	// 	std::cout << "CHECK2" << std::endl;
	// 	std::cerr << e.what() << '\n';
	// }
	
}