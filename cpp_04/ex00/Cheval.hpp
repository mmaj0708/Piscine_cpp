/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cheval.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:08:53 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/27 16:19:30 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHEVAL_HPP
# define CHEVAL_HPP

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"

class Cheval : public Victim
{
private:


public:

	Cheval( void );
	Cheval( std::string name );
	Cheval( Cheval const & src );
	virtual ~Cheval( void );
	virtual void getPolymorphed( void ) const;
	Cheval & operator=( Cheval const & rhs );

	std::string	name;
};

#endif