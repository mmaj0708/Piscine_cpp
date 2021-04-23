/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:17:55 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/23 12:28:15 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
	return;
}

Bureaucrat::Bureaucrat( std::string const name, int grade ) : _name(name)
{
	if (grade > 150)
		throw (Bureaucrat::GradeTooHighException());
	if (grade < 1)
		throw (Bureaucrat::GradeTooLowException());
	_grade = grade;
	return;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) : _name(src.getName()), _grade(src.getGrade())
{
	 *this = src;
	 return;
}

Bureaucrat::~Bureaucrat()
{
	return;
}

std::string  Bureaucrat::getName() const
{
	return (_name);
}

int		     Bureaucrat::getGrade() const
{
	return (_grade);
}

void		 Bureaucrat::incremente()
{
	if (_grade == 1)
		throw (Bureaucrat::GradeTooLowException());
	_grade--;
}

void		 Bureaucrat::decremente()
{
	if (_grade == 150)
		throw (Bureaucrat::GradeTooHighException());
	_grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs )
{
	this->_grade = rhs.getGrade();
	return(*this);
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs )
{
	o << "<" << rhs.getName() << ">, bureaucrat grade <" << rhs.getGrade() << ">" << std::endl;
	return (o);
}
