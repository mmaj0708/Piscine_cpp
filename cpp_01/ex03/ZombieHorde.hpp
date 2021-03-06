/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 14:20:03 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/08 10:40:17 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class	Zombie;

class ZombieHorde
{
private:

	int		n;

public:

	ZombieHorde(int n);
	~ZombieHorde();
	Zombie		*Horde;
	void	announce(void);
};

#endif