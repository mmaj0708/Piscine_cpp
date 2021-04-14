/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:21:09 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/13 14:48:45 by mmaj             ###   ########.fr       */
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

	std::string		Name;
	int 			Hit_points = 100;
	int				Max_hit_points = 100;
	int				Energy_points = 100;
	int				Max_energy_points = 100;
	int				Level = 1;
	int				Melee_attack_damage = 30;
	int				Ranged_attack_damage = 20;
	int				Armor_damage_reduction = 5;

};

std::ostream & operator<<( std::ostream & o, FragTrap const & rhs );

#endif