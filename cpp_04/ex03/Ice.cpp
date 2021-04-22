/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 10:34:04 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/22 12:32:32 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->setType("ice");
}

Ice::Ice( Ice const & src ) : AMateria(src)
{
	this->setType(src.getType());
	this->setXP(src.getXP());
	*this = src;
}

Ice::~Ice()
{
    return;
}

Ice & Ice::operator=( Ice const & rhs )
{
	this->setType(rhs.getType());
	this->setXP(rhs.getXP());
    return (*this);
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void	  Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
