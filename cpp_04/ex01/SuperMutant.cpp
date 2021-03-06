/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 09:52:12 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/19 11:25:01 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy::Enemy(170, "Super Mutant")
{
	 std::cout << "Gaaah. Me want smash heads!" << std::endl;
	 return;
}

SuperMutant::SuperMutant( SuperMutant const & src ) : Enemy()
{
	 std::cout << "Gaaah. Me want smash heads!" << std::endl;
	 *this = src;
	 return;
}

SuperMutant::~SuperMutant()
{
	std::cout <<  "Aaargh..." << std::endl;
	return;
}

void SuperMutant::takeDamage(int amount)
{
	Enemy::takeDamage(amount - 3);
}

SuperMutant & SuperMutant::operator=( SuperMutant const & rhs )
{
	this->hp = rhs.hp;
	this->type = rhs.type;
	return (*this);
}
