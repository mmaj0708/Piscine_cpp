/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:01:47 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/19 11:47:17 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
	//  std::cout << "AWeapon default constructor called" << std::endl;
	 return;
}

AWeapon::AWeapon( AWeapon const & src )
{
	//  std::cout << "AWeapon copy constructor called" << std::endl;
	 *this = src;
	 return;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
: name(name), apcost(apcost), damage(damage)
{	
	// std::cout << "AWeapon parametric constructor called" << std::endl;
}

AWeapon::~AWeapon()
{
	// std::cout << "AWeapon destructor called" << std::endl;
	return;
}

std::string	AWeapon::getName() const
{
	return (this->name);
}

int AWeapon::getAPCost() const
{
	return (this->apcost);
}

int AWeapon::getDamage() const
{
	return (this->damage);
}

AWeapon & AWeapon::operator=( AWeapon const & rhs )
{
	this->name = rhs.name;
	this->damage = rhs.damage;
	this->apcost = rhs.apcost;
	return(*this);
}
