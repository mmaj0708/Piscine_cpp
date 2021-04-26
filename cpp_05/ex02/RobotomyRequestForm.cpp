/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 11:35:22 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/26 11:43:22 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target )
: Form("RobotomyRequestForm", 72, 45), _target(target)
{
	return;
}


RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src )
: Form(src), _target(src.getTarget())
{
	root_signing(src.getBool());
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);

	if (rand() % 2 == 1)
	{
		std::cout << "*  some drilling noises *" << std::endl;
		std::cout << getTarget() << " has been robotomized successfully 50% of the time" << std::endl;
	}
	else
	{
		std::cout << "Robotization failed" << std::endl;
	}
	return;
}

std::string 	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	this->_target = rhs.getTarget();
	return(*this);
}
