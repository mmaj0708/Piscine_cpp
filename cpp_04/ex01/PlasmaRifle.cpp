/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:53:14 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/16 16:55:44 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"

PlasmaRifle::PlasmaRifle()
{
	 std::cout << "PlasmaRifle default constructor called" << std::endl;
	 this->name = "Plasma Rifle";
	 this->damage = 21;
	 this->apcost = 5;
	 return;
}

PlasmaRifle::PlasmaRifle( std::string const & name, int apcost, int damage )
: AWeapon::AWeapon(name, damage, apcost)
{
	std::cout << "PlasmaRifle parametric constructor called" << std::endl;
	return;
}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & src )
{
	 std::cout << "PlasmaRifle copy constructor called" << std::endl;
	 *this = src;
	 return;
}

PlasmaRifle::~PlasmaRifle()
{
	std::cout << "PlasmaRifle destructor called" << std::endl;
	return;
}

void PlasmaRifle::attack() const
{
	std::cout << "*  piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle & PlasmaRifle::operator=( PlasmaRifle const & rhs )
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