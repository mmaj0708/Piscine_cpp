/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:21:09 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/15 13:53:44 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP
# define FRAG_TRAP

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:

public:

	FragTrap( void );
	FragTrap( std::string Name );
	FragTrap( FragTrap const & src );
	~FragTrap( void );
	FragTrap & operator=( FragTrap const & rhs );

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	vaulthunter_dot_exe(std::string const & target);
	void	init_vars(void);
	void	init_specs(void);
};

std::ostream & operator<<( std::ostream & o, FragTrap const & rhs );

#endif