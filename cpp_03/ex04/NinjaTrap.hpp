/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 11:33:57 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/15 11:51:02 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:

public:

	NinjaTrap( void );
	NinjaTrap( std::string Name );
	NinjaTrap( NinjaTrap const & src );
	~NinjaTrap( void );

	void	init_vars(void);
	void	ninjaShoeBox(ClapTrap & target);
	void	ninjaShoeBox(FragTrap & target);
	void	ninjaShoeBox(NinjaTrap & target);
	void	ninjaShoeBox(ScavTrap & target);

	NinjaTrap & operator=( NinjaTrap const & rhs );
};

std::ostream & operator<<( std::ostream & o, NinjaTrap const & rhs );

#endif