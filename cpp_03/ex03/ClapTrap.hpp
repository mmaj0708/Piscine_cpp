/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 10:42:36 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/15 11:20:42 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP	
# define CLAPTRAP_HPP	

#include <iostream>
#include <cstdlib>

class ClapTrap
{
private:

public:

	ClapTrap( void );
	ClapTrap( std::string Name );
	ClapTrap( ClapTrap const & src );
	~ClapTrap( void );
	ClapTrap & operator=( ClapTrap const & rhs );

	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string		Name;
	int 			Hit_points;
	int				Max_hit_points;
	int				Energy_points;
	int				Max_energy_points;
	int				Level;
	int				Melee_attack_damage;
	int				Ranged_attack_damage;
	int				Armor_damage_reduction;

};

std::ostream & operator<<( std::ostream & o, ClapTrap const & rhs );

#endif