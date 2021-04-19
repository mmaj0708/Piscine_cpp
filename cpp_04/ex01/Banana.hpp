/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   banana.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:01:20 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/19 12:05:50 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BANANA_HPP
# define BANANA_HPP

#include "AWeapon.hpp"

class Banana : virtual public AWeapon
{

public:

	Banana( void );
	Banana( std::string const & name, int apcost, int damage );
	Banana( Banana const & src );
	virtual ~Banana( void );
	virtual void attack() const;
	Banana & operator=( Banana const & rhs );

};

// std::ostream & operator<<( std::ostream & o, PowerFist const & rhs );

#endif