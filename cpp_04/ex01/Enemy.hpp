/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:59:39 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/16 18:16:57 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include "AWeapon.hpp"

class Enemy
{
protected:

	int			hp;
	std::string type;

public:

	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	std::string [...] getType() const;
	int getHP() const;
	virtual void takeDamage(int);
};

#endif

c