/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 12:04:04 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/22 12:10:50 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _xp(0), _type("")
{
    return;
}

AMateria::AMateria( AMateria const & src )
{
	*this = src;
}

AMateria::AMateria(std::string const & type) : _xp(0), _type(type)
{
    return;
}

AMateria::~AMateria()
{
    return;
}

std::string const & AMateria::getType() const //Returns the materia type
{
    return (this->_type);
}

unsigned int AMateria::getXP() const //Returns the Materia's XP
{
    return (this->_xp);
}

void	AMateria::setType(std::string const &type)
{
	_type = type;
}

void	AMateria::setXP(int const xp)
{
	_xp = xp;
}

void AMateria::use(ICharacter& target)
{
	(void) target;
    this->_xp = this->_xp + 10;
}

AMateria & AMateria::operator=( AMateria const & rhs )
{
    this->_xp = rhs._xp;
    this->_type = rhs._type;
    return (*this);
}
