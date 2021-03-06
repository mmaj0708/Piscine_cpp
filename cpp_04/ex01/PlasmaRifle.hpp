/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:52:07 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/19 11:55:30 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : virtual public AWeapon
{

public:

	PlasmaRifle( void );
	PlasmaRifle( std::string const & name, int apcost, int damage );
	PlasmaRifle( PlasmaRifle const & src );
	virtual ~PlasmaRifle( void );
	virtual void attack() const;
	PlasmaRifle & operator=( PlasmaRifle const & rhs );

};

// std::ostream & operator<<( std::ostream & o, PowerFist const & rhs );

#endif
