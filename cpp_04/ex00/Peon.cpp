/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 11:32:00 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/16 12:07:46 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Victim.hpp"

// Peon::Peon()
// {
// 	 std::cout << "default constructor called" << std::endl;
// 	 return;
// }

Peon::Peon( std::string name ) : Victim::Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon( Peon const & src ) : Victim(src)
{
	this->name = src.name;
	*this = src;
	return;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
	return;
}

void Peon::getPolymorphed( void ) const
{
	std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}

Peon & Peon::operator=( Peon const & rhs )
{
	this->name = rhs.name;
	return(*this);
}
