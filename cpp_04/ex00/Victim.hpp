/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 11:18:02 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/27 16:19:08 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include "Sorcerer.hpp"

class Victim
{
private:

	Victim( void );

public:

	Victim( std::string name );
	Victim( Victim const & src );
	virtual ~Victim( void );
	virtual void getPolymorphed( void ) const;
	Victim & operator=( Victim const & rhs );

	std::string	name;
};

std::ostream & operator<<( std::ostream & o, Victim const & rhs );

#endif
