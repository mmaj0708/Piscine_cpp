/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 09:55:28 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/15 11:20:26 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP	
# define SCAVTRAP_HPP	

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:

	ScavTrap( void );
	ScavTrap( std::string Name );
	ScavTrap( ScavTrap const & src );
	~ScavTrap( void );
	ScavTrap & operator=( ScavTrap const & rhs );

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	challengeNewcomer(std::string const & target);
	void	init_vars(void);
};

std::ostream & operator<<( std::ostream & o, ScavTrap const & rhs );

#endif