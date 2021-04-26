/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:13:00 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/26 14:39:45 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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

	try
	{
		ShrubberyCreationForm	contrat2("gne");
		RobotomyRequestForm		contrat3("robot");
		PresidentialPardonForm	contrat4("prisonnier");
		Bureaucrat  sam2("sam2", 101);
		Bureaucrat  exec("executor", 101);
		Bureaucrat  signator1("signator1", 45);
		Bureaucrat  exec2("executor1", 45);

		Bureaucrat  signator2("signator2", 25);
		Bureaucrat  exec3("executor2", 5);

		std::cout << std::endl;
		std::cout << contrat2 << std::endl;
	
		sam2.signForm(contrat2);
		std::cout << contrat2 << std::endl;
		exec.executeForm(contrat2);
		std::cout << std::endl;

		signator1.signForm(contrat3);
		std::cout << std::endl;
		exec2.executeForm(contrat3);
	
		std::cout << std::endl;

		signator2.signForm(contrat4);
		std::cout << std::endl;
		exec3.executeForm(contrat4);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// intern
	// 	_tabFormName[0] = "robotomy request";
	// _tabFormName[1] = "presidential request";
	// _tabFormName[2] = "shrubbery request";
	std::cout << std::endl;
	Intern someRandomIntern;
	Form* rrf;
	Form* rrf2;
	rrf = someRandomIntern.makeForm("presidential request", "Bender");
	rrf2 = someRandomIntern.makeForm("rorgawrgw", "Bender");

	delete rrf;
	delete rrf2;
}
