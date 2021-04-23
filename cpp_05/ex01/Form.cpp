/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 14:45:43 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/23 16:52:46 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _bool(false), _signGrade(75), _execGrade(75)
{
	 return;
}

Form::Form( Form const & src )
: _name(src.getName()), _bool(false), _signGrade(src.getSignedGrade()), _execGrade(src.getExecGrade())
{
	 *this = src;
	 return;
}

Form::Form( std::string name, int sGrade, int eGrade ) 
: _name(name), _bool(false), _signGrade(sGrade), _execGrade(eGrade)
{
	if (sGrade > 150 || eGrade > 150)
		throw Form::GradeTooHighException();
	if (sGrade < 1 || eGrade < 1)
		throw Form::GradeTooLowException();
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

void		Form::beSigned(Bureaucrat const & bur)
{
	if (bur.getGrade() <=  _signGrade)
		_bool = true;
	else
		throw Form::GradeTooLowException();		
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low");
}

Form::~Form()
{
	return;
}

Form & Form::operator=( Form const & rhs )
{
	_bool = rhs._bool;
	return(*this);
}

std::ostream & operator<<( std::ostream & o, Form const & rhs )
{
	o << "Form Name : " << rhs.getName() << std::endl;
	o << "bool      : " << rhs.getBool() << std::endl;
	o << "signGrade : " << rhs.getSignedGrade() << std::endl;
	o << "execGrade : " << rhs.getExecGrade() << std::endl;

	return (o);
}