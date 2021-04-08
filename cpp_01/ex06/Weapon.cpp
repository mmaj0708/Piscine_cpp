/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:57:37 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/08 17:30:05 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type) : type(_type)
{
	return;
}

Weapon::~Weapon()
{
	return;
}

const std::string	 &Weapon::getType()
{
	return(this->type);
}

void				Weapon::setType(std::string str)
{
	this->type = str;
}