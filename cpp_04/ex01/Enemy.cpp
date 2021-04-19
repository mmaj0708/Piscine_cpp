/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 17:03:05 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/19 11:46:56 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
	//  std::cout << "Enemy default constructor called" << std::endl;
	 return;
}

Enemy::Enemy( Enemy const & src )
{
	//  std::cout << "Enemy copy constructor called" << std::endl;
	 *this = src;
	 return;
}

Enemy::~Enemy()
{
	// std::cout << "Enemy destructor called" << std::endl;
	return;
}

Enemy::Enemy(int hp, std::string const & type) : hp(hp), type(type)
{
	return;
}

std::string Enemy::getType() const
{
	return (this->type);
}

int Enemy::getHP() const
{
	return (this->hp);
}

void Enemy::takeDamage(int amount)
{
	this->hp = this->hp - amount;
	if (this->hp < 0)
		this->hp = 0;
	return;
}

Enemy & Enemy::operator=( Enemy const & rhs )
{
	this->hp = rhs.hp;
	this->type = rhs.type;
	return (*this);
}
