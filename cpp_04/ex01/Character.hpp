/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:19:10 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/19 11:16:57 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:

	std::string name;
	int			ap;
	AWeapon		*weapon;

public:

	Character();
	Character(std::string const & name);
	Character( Character const & src );
	virtual ~Character();
	void recoverAP();
	void equip(AWeapon* wp);
	void attack(Enemy* enemy);
	std::string getName() const;
	std::string getWeaponName() const;
	int			getAp() const;
	Character & operator=( Character const & rhs );
};

std::ostream & operator<<( std::ostream & o, Character const & rhs );

#endif
