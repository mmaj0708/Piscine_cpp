/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:21:09 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/15 09:26:32 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP
# define FRAG_TRAP

#include <iostream>
#include <cstdlib>

class FragTrap
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
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
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

std::ostream & operator<<( std::ostream & o, FragTrap const & rhs );

#endif