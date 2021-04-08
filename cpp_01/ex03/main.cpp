/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 16:19:04 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/08 10:46:37 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	ZombieHorde zh1(5);
	ZombieHorde zh2(4);
	ZombieHorde zh3(10);

	zh1.announce();
	zh2.announce();
	zh3.announce();

	return (0);
}
