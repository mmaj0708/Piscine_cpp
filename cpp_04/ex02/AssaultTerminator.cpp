/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 10:44:19 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/20 10:57:55 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	 std::cout << "* teleports from space *" << std::endl;
	 return;
}

AssaultTerminator::AssaultTerminator( AssaultTerminator const & src )
{
	//  std::cout << "Tactical Marine ready for battle!" << std::endl;
	 *this = src;
	 return;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
	return;
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout <<  "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout <<  "* attacks with chainfists *" << std::endl;
}

ISpaceMarine* AssaultTerminator::clone() const
{
	return (new AssaultTerminator);
}

AssaultTerminator & AssaultTerminator::operator=( AssaultTerminator const & rhs )
{
	(void)rhs;
	return(*this);
}
