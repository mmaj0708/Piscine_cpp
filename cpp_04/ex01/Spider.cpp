/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Spider.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:20:32 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/19 12:24:27 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Spider.hpp"

Spider::Spider() : Enemy::Enemy(10, "Spider")
{
	 std::cout << "* tsssss *" << std::endl;
	 return;
}

Spider::Spider( Spider const & src ) : Enemy()
{
	 std::cout <<  "* tsssss *" << std::endl;
	 *this = src;
	 return;
}

Spider::~Spider()
{
	std::cout <<   "* NAOOON *" << std::endl;
	return;
}

Spider & Spider::operator=( Spider const & rhs )
{
	this->hp = rhs.hp;
	this->type = rhs.type;
	return (*this);
}
