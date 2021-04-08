/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 15:57:23 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/08 17:42:59 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:

public:

	std::string			type;
	const std::string		&getType();
	void				setType(std::string _type);
	Weapon(std::string _type);
	~Weapon();

};

#endif