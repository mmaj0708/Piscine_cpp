/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:47:42 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/07 11:56:22 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string c_name, std::string c_type) : name(c_name), type(c_type)
{
	return ;
}

void	Zombie::announce(void)
{
	std::cout <<
	"< " <<
	this->name <<
	" (" <<
	this->type <<
	")> " <<
	"BRAIIIIINSSS ... " <<
	std::endl;
}