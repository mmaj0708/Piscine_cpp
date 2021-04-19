/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 14:13:08 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/19 14:14:33 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
	 std::cout << "default constructor called" << std::endl;
	 return;
}

Squad::Squad( Squad const & src )
{
	 std::cout << "copy constructor called" << std::endl;
	 *this = src;
	 return;
}

Squad::~Squad()
{
	std::cout << "destructor called" << std::endl;
	return;
}

Squad & Squad::operator=( Squad const & rhs )
{

	return;
}
