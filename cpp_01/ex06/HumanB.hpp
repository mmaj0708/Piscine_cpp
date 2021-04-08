/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:36:14 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/08 17:24:26 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:

public:

	Weapon		weapon;
	std::string name;
	void		attack(void);
	void		setWeapon(Weapon _weapon);
	HumanB(std::string _name);
	~HumanB();

};

#endif