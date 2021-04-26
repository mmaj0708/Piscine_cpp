/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 11:56:02 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/26 11:57:36 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target )
: Form("PresidentialPardonForm", 25, 5), _target(target)
{
	return;
}


PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src )
: Form(src), _target(src.getTarget())
{
	root_signing(src.getBool());
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
	return;
}

std::string 	PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	this->_target = rhs.getTarget();
	return(*this);
}
