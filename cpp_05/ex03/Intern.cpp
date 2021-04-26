/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:04:39 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/26 12:39:24 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
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

Form	*Intern::makeShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeRobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::makePresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form* Intern::makeForm (std::string formName, std::string targetForm)
{
	for (int i = 0 ; i < 3 ; i++)
	{
		if (_tabFormName[i] == formName)
		{
			return (new Form );
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
