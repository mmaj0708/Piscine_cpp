/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:47:39 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/07 13:56:16 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent	zEvent;
	Zombie 		z2("bill", "guepard mort");
	Zombie 		z3("ralph", "heretique");
	Zombie 		*z1;

	zEvent.setZombieType("stylé");
	z1 = zEvent.newZombie("Hector");
	z1->announce();
	delete z1;

	z2.announce();
	z3.announce();
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