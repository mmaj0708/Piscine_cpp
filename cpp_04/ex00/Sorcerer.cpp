/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:18:30 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/15 17:06:47 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	 std::cout << "default constructor called" << std::endl;
	 return;
}

Sorcerer::Sorcerer( std::string name, std::string title ) : name(name), title(title)
{
	std::cout << name << ", " << title << " is born !" << std::endl;
}

Sorcerer::Sorcerer( Sorcerer const & src )
{
	 std::cout << "copy constructor called" << std::endl;
	 *this = src;
	 return;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", " << "is dead. Consequences will never be the same!" << std::endl;
	return;
}

Sorcerer & Sorcerer::operator=( Sorcerer const & rhs )
{
	this->name = rhs.name;
	this->title = rhs.title;
	return(*this);
}
