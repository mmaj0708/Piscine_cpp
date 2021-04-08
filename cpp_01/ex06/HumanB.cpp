/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:35:40 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/08 17:46:17 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name)
{
	return;
}

HumanB::~HumanB()
{
	return;
}

void		HumanB::attack(void)
{
	std::cout << this->name << "attacks with his" << this->weapon.type << std::endl;
	return;
}

void		HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}
