/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 11:29:43 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/16 12:05:57 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"

class Peon : public Victim
{
private:


public:

	Peon( void );
	Peon( std::string name );
	Peon( Peon const & src );
	virtual ~Peon( void );
	void getPolymorphed( void ) const;
	Peon & operator=( Peon const & rhs );

	std::string	name;
};

#endif