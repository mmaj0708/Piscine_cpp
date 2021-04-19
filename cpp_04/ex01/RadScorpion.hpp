/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 10:05:54 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/19 12:32:22 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPIONS_HPP
# define RADSCORPIONS_HPP

#include "Enemy.hpp"

class Enemy;

class RadScorpion : virtual public Enemy
{
private:


public:

	RadScorpion( void );
	RadScorpion( RadScorpion const & src );
	~RadScorpion( void );
	RadScorpion & operator=( RadScorpion const & rhs );

};

#endif