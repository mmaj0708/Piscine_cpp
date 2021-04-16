/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:27:01 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/16 16:49:41 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST
# define POWERFIST

#include "AWeapon.hpp"

class PowerFist : AWeapon
{

public:

	PowerFist( void );
	PowerFist( std::string const & name, int apcost, int damage );
	PowerFist( PowerFist const & src );
	virtual ~PowerFist( void );
	virtual void attack() const;
	PowerFist & operator=( PowerFist const & rhs );

};

// std::ostream & operator<<( std::ostream & o, PowerFist const & rhs );

#endif