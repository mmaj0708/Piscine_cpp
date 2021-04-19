/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:06:49 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/19 11:25:17 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy::Enemy(80, "RadScorpion")
{
	 std::cout << "* click click click *" << std::endl;
	 return;
}

RadScorpion::RadScorpion( RadScorpion const & src ) : Enemy()
{
	 std::cout <<  "* click click click *" << std::endl;
	 *this = src;
	 return;
}

RadScorpion::~RadScorpion()
{
	std::cout <<   "* SPROTCH *" << std::endl;
	return;
}

RadScorpion & RadScorpion::operator=( RadScorpion const & rhs )
{
	this->hp = rhs.hp;
	this->type = rhs.type;
	return (*this);
}
