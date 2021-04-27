/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Spider.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:20:23 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/19 12:32:37 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPIDER_HPP
# define SPIDER_HPP

#include "Enemy.hpp"

class Enemy;

class Spider : virtual public Enemy
{
private:


public:

	Spider( void );
	Spider( Spider const & src );
	virtual ~Spider( void );
	Spider & operator=( Spider const & rhs );

};

#endif