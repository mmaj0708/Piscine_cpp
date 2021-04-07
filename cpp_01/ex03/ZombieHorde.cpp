/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:24:12 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/07 16:45:50 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int _n) : n(_n)
{
	std::string name[] = { "rudolph", "gégé", "Tom", "Nathan", "emilie", "nicolas", "mel", "yann" };
	this->Horde = new Zombie[n];
	for (int i = 0 ; i < n ; i++)
	{
		this->Horde[i].name = name[rand() % 8];
		this->Horde[i].type = "default type";
		this->Horde[i].announce();
	}
	return;
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->Horde;
	return;
}