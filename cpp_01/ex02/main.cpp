/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:47:39 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/07 12:33:48 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent	zEvent;
	Zombie 		*z1;

	zEvent.setZombieType("stylé");
	z1 = zEvent.newZombie("Hector");
	z1->announce();
	delete z1;

	zEvent.randomChump();
	zEvent.randomChump();
	zEvent.randomChump();
	zEvent.randomChump();
	zEvent.randomChump();
	zEvent.randomChump();
	zEvent.randomChump();
	zEvent.randomChump();
	zEvent.randomChump();
	zEvent.randomChump();
	zEvent.randomChump();
	zEvent.randomChump();
	return (0);
}