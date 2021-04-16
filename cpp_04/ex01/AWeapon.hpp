/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:01:23 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/16 16:39:29 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON
# define AWEAPON

#include <iostream>

class AWeapon
{

protected:

	std::string name;
	int			damage;
	int			apcost;

public:

	AWeapon( void );
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon( AWeapon const & src );
	virtual ~AWeapon();
	std::string		getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
	AWeapon & operator=( AWeapon const & rhs );
};

#endif
