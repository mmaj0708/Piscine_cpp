/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 09:49:23 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/19 12:32:10 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class Enemy;

class SuperMutant : virtual public Enemy
{
private:


public:

	SuperMutant( void );
	SuperMutant( SuperMutant const & src );
	~SuperMutant( void );
	virtual void takeDamage(int amount);
	SuperMutant & operator=( SuperMutant const & rhs );

};

#endif