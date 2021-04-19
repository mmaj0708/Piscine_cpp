/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:20:17 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/19 12:14:49 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	//  std::cout << "default constructor called" << std::endl;
	 return;
}

Character::Character(std::string const & name) : name(name), ap(40), weapon(NULL)
{
	return;
}

Character::Character( Character const & src )
{
	//  std::cout << "copy constructor called" << std::endl;
	 *this = src;
	 return;
}

Character::~Character()
{
	// std::cout << "destructor called" << std::endl;
	return;
}

void Character::recoverAP()
{
	this->ap = this->ap + 10;
	if (this->ap > 40)
		this->ap = 40;
}

void Character::equip(AWeapon* wp)
{
	this->weapon = wp;
}

void Character::attack(Enemy* enemy)
{
	if (!enemy)
		return;
	if (this->ap < this->weapon->getAPCost())
	{
		std::cout << this->name << " has no enough ap tu use his weapon" << std::endl;
		return;
	}
	if (this->weapon == NULL)
		return;
	this->ap = this->ap - this->weapon->getAPCost();
	std::cout << this->name << " attacks " << enemy->getType() << " with a " << this->getWeaponName() << std::endl;
	this->weapon->attack();
	enemy->takeDamage(this->weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::string Character::getName() const
{
	return(this->name);
}

int Character::getAp() const
{
	return(this->ap);
}

std::string Character::getWeaponName() const
{
	if (this->weapon == NULL)
	{
		return("no weapon");
	}
	return(this->weapon->getName());
}

Character & Character::operator=( Character const & rhs )
{
	this->name = rhs.name;
	return (*this);
}

std::ostream & operator<<( std::ostream & o, Character const & rhs )
{
	if (rhs.getWeaponName() == "no weapon")
	{
		o << rhs.getName() << " has " << rhs.getAp() << " AP and is unarmed" << std::endl;
		return (o);
	}
	o << rhs.getName() << " has " << rhs.getAp() << " AP and wields a " << rhs.getWeaponName() << std::endl;
	return (o);
}

