/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:40:16 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/16 11:51:47 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Victim;

class Sorcerer
{
private:

	Sorcerer( void );

public:

	Sorcerer( std::string name, std::string title );
	Sorcerer( Sorcerer const & src );
	~Sorcerer( void );
	void polymorph(Victim const & v) const;
	Sorcerer & operator=( Sorcerer const & rhs );

	std::string	name;
	std::string	title;
};

std::ostream & operator<<( std::ostream & o, Sorcerer const & rhs );

#endif