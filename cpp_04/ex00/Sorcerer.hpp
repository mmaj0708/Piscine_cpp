/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:40:16 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/15 16:19:49 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Sorcerer.hpp"

class Sorcerer
{
private:

	Sorcerer( void );

public:

	Sorcerer( std::string name, std::string title );
	Sorcerer( Sorcerer const & src );
	~Sorcerer( void );
	Sorcerer & operator=( Sorcerer const & rhs );

	std::string	name;
	std::string	title;
};

#endif