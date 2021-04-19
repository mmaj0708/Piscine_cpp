/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   banana.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:01:28 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/19 12:04:53 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Banana.hpp"
#include "AWeapon.hpp"

Banana::Banana()
{
	//  std::cout << "Banana default constructor called" << std::endl;
	 this->name = "Banana";
	 this->damage = 500;
	 this->apcost = 20;
	 return;
}

Banana::Banana( std::string const & name, int apcost, int damage )
: AWeapon::AWeapon(name, damage, apcost)
{
	// std::cout << "Banana parametric constructor called" << std::endl;
	return;
}

Banana::Banana( Banana const & src )
{
	//  std::cout << "Banana copy constructor called" << std::endl;
	 *this = src;
	 return;
}

Banana::~Banana()
{
	// std::cout << "Banana destructor called" << std::endl;
	return;
}

void Banana::attack() const
{
	std::cout << "* Yummy yummy *" << std::endl;
}

Banana & Banana::operator=( Banana const & rhs )
{
	this->name = rhs.name;
	this->damage = rhs.damage;
	this->apcost = rhs.apcost;
	return(*this);
}