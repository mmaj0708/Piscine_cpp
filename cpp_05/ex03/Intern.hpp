/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:04:10 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/26 14:36:27 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:

	std::string		 _tabFormName[3];

public:

	Intern( void );
	Intern( Intern const & src );
	virtual ~Intern( void );
	Intern & operator=( Intern const & rhs );

	Form 	*makeForm (std::string formName, std::string targetForm);
};

Form	*makeShrubberyCreationForm(std::string target);
Form	*makeRobotomyRequestForm(std::string target);
Form	*makePresidentialPardonForm(std::string target);

#endif