/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 11:19:59 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/16 11:53:59 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
	 std::cout << "default constructor called" << std::endl;
	 return;
}

Victim::Victim( std::string name ) : name(name)
{
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::Victim( Victim const & src )
{
	 std::cout << "copy constructor called" << std::endl;
	 *this = src;
	 return;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
	return;
}

void Victim::getPolymorphed( void ) const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

Victim & Victim::operator=( Victim const & rhs )
{
	this->name = rhs.name;
	return(*this);
}

std::ostream & operator<<( std::ostream & o, Victim const & rhs )
{
	o << "I'm " << rhs.name << " and I like otters!\n";
	return (o);
}