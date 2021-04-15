/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 09:55:28 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/15 10:12:13 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP	
# define SCAVTRAP_HPP	

#include <iostream>
#include <cstdlib>

class ScavTrap
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
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(std::string const & target);
	void	init_vars(void);

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

std::ostream & operator<<( std::ostream & o, ScavTrap const & rhs );

#endif