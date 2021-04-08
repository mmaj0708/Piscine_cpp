/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:24:10 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/08 17:45:44 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:

public:

	std::string name;
	Weapon		weapon;
	void		attack(void);
	HumanA(std::string name, Weapon weapon);
	~HumanA();

};

#endif