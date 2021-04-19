/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:30:47 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/19 11:48:04 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include "AWeapon.hpp"

PowerFist::PowerFist()
{
	//  std::cout << "PowerFist default constructor called" << std::endl;
	 this->name = "Power Fist";
	 this->damage = 50;
	 this->apcost = 8;
	 return;
}

PowerFist::PowerFist( std::string const & name, int apcost, int damage )
: AWeapon::AWeapon(name, damage, apcost)
{
	// std::cout << "PowerFist parametric constructor called" << std::endl;
	return;
}

PowerFist::PowerFist( PowerFist const & src )
{
	//  std::cout << "PowerFist copy constructor called" << std::endl;
	 *this = src;
	 return;
}

PowerFist::~PowerFist()
{
	// std::cout << "PowerFist destructor called" << std::endl;
	return;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist & PowerFist::operator=( PowerFist const & rhs )
{
	this->name = rhs.name;
	this->damage = rhs.damage;
	this->apcost = rhs.apcost;
	return(*this);
}

// std::ostream & operator<<( std::ostream & o, PowerFist const & rhs )
// {
// 	o << "name :\t\t\t " << rhs.getName() << std::endl;
// 	o << "damge :\t\t\t " << rhs.getDamage() << std::endl;
// 	o << "apcost :\t\t " << rhs.getAPCost() << std::endl;
// 	return (o);
// }