/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 10:41:30 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/26 11:31:12 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target )
: Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return;
}


ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src )
: Form(src), _target(src.getTarget())
{
	root_signing(src.getBool());
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string		filename;
	std::ofstream	shrubbery;

	Form::execute(executor);
	filename = _target + "_shrubbery";
	shrubbery.open(filename, std::ios::out | std::ios::trunc);
	if (shrubbery.is_open())
	{
		shrubbery << TREE1 << std::endl;
		shrubbery << TREE2 << std::endl;
		shrubbery << TREE3 << std::endl;
		shrubbery.close();
	}
	else
		std::cerr << "Error : Failed to create the schrubbery." << std::endl;
}

std::string 	ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	this->_target = rhs.getTarget();
	return(*this);
}
