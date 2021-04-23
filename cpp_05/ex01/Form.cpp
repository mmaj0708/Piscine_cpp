/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 14:45:43 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/23 15:03:59 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _signGrade(75), _execGrade(75)
{
	 return;
}

Form::Form( Form const & src ) : _name(src.getName()), _signGrade(src.getSignedGrade()), _execGrade(src.getExecGrade())
{
	 *this = src;
	 return;
}

Form::Form( std::string name, int sGrade, int eGrade ) : _name(name), _signGrade(sGrade), _execGrade(eGrade)
{
	return;
}

std::string Form::getName() const
{
	return(_name);
}

bool		Form::getBool() const
{
	return(_bool);
}

int			Form::getSignedGrade() const
{
	return(_signGrade);
}

int			Form::getExecGrade() const
{
	return(_execGrade);
}

Form::~Form()
{
	return;
}

Form & Form::operator=( Form const & rhs )
{

	return;
}
