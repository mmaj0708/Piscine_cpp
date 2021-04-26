/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:04:39 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/26 14:33:46 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
//: _tabFormName[] = {"robotomy request", "presidential request", "shrubbery request"};
//= {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};
{
	_tabFormName[0] = "robotomy request";
	_tabFormName[1] = "presidential request";
	_tabFormName[2] = "shrubbery request";
	return;
}

Intern::Intern( Intern const & src )
{
	 *this = src;
	 return;
}

Intern::~Intern()
{
	return;
}

Form	*makeShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*makeRobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form	*makePresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form* Intern::makeForm (std::string formName, std::string targetForm)
{
	Form		*(*_tabFunct[3])(std::string);
	_tabFunct[0] = &makeRobotomyRequestForm;
	_tabFunct[1] = &makePresidentialPardonForm;
	_tabFunct[2] = &makeShrubberyCreationForm;
	for (int i = 0 ; i < 3 ; i++)
	{
		if (_tabFormName[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (_tabFunct[i](targetForm));
		}
	}
	std::cerr << \
	"FormType not found by the intern" \
	<< std::endl;
	return (new Form );
}

Intern & Intern::operator=( Intern const & rhs )
{
	(void) rhs;
	return(*this);
}
