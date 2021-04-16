/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cheval.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:08:06 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/16 12:10:59 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cheval.hpp"
#include "Victim.hpp"

// Cheval::Cheval()
// {
// 	 std::cout << "default constructor called" << std::endl;
// 	 return;
// }

Cheval::Cheval( std::string name ) : Victim::Victim(name)
{
	std::cout << "huuuuh" << std::endl;
}

Cheval::Cheval( Cheval const & src ) : Victim(src)
{
	this->name = src.name;
	*this = src;
	return;
}

Cheval::~Cheval()
{
	std::cout << "Hihan..." << std::endl;
	return;
}

void Cheval::getPolymorphed( void ) const
{
	std::cout << this->name << " has been turned into a human!" << std::endl;
}

Cheval & Cheval::operator=( Cheval const & rhs )
{
	this->name = rhs.name;
	return(*this);
}
