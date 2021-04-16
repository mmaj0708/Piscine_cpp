/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 17:03:05 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/16 17:03:17 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
	 std::cout << "default constructor called" << std::endl;
	 return;
}

Enemy::Enemy( Enemy const & src )
{
	 std::cout << "copy constructor called" << std::endl;
	 *this = src;
	 return;
}

Enemy::~Enemy()
{
	std::cout << "destructor called" << std::endl;
	return;
}

Enemy & Enemy::operator=( Enemy const & rhs );
{

	return;
}
