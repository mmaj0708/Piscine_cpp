/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:32:13 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/09 10:07:05 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon) 
: name(_name), weapon(_weapon)
{
	return;
}

HumanA::~HumanA()
{
	return;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon.type << std::endl;
	return;
}
