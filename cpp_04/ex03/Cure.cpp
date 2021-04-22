/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 09:53:22 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/22 10:30:24 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->setType("cure");
}

Cure::Cure( Cure const & src ) : AMateria(src)
{
	this->setType(src.getType());
	this->setXP(src.getXP());
	*this = src;
}

Cure::~Cure()
{
    return;
}

Cure & Cure::operator=( Cure const & rhs )
{
	this->setType(rhs.getType());
	this->setXP(rhs.getXP());
    return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void	  Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}
