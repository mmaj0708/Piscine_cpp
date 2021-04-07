/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:47:45 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/07 12:30:31 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*newZ = new Zombie(name, this->type);

	return (newZ);
}

void	ZombieEvent::randomChump(void)
{
	std::string name[] = { "rudolph", "gégé", "Tom", "Nathan", "emilie", "nicolas", "mel", "yann" };
    Zombie zombie(name[std::rand() % 8], "random");
    zombie.announce();
}

void	ZombieEvent::setZombieType(std::string type_name)
{
	this->type = type_name;
}