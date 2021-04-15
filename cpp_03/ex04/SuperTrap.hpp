/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 12:19:22 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/15 14:08:31 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
private:

public:

	SuperTrap( void );
	SuperTrap( std::string Name );
	SuperTrap( SuperTrap const & src );
	~SuperTrap( void );

	void	init_vars(void);

	SuperTrap & operator=( SuperTrap const & rhs );
};

std::ostream & operator<<( std::ostream & o, SuperTrap const & rhs );

#endif
