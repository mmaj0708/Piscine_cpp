/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 12:19:13 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/15 14:42:09 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

void	SuperTrap::init_vars(void)
{
	NinjaTrap::init_specs();
	FragTrap::init_specs();
}

SuperTrap::SuperTrap() : ClapTrap::ClapTrap()
{
	 std::cout << "* SuperTrap default constructor called *" << std::endl;
	 init_vars();
	 return;
}

SuperTrap::SuperTrap( std::string _Name ) : ClapTrap::ClapTrap(_Name)
{
	std::cout << "* SuperTrap parametric constructor called *" << std::endl;
	init_vars();
	return;
}

SuperTrap::SuperTrap( SuperTrap const & src ) : ClapTrap(src), NinjaTrap(src), FragTrap(src)
{
	 std::cout << "* SuperTrap copy constructor called *" << std::endl;
	 *this = src;
	 return;
}

SuperTrap::~SuperTrap()
{
	std::cout << "* SuperTrap destructor called *" << std::endl;
	return;
}

SuperTrap & SuperTrap::operator=( SuperTrap const & rhs )
{
	std::cout << "assignation operator called" << std::endl;
	this->Hit_points = rhs.Hit_points;
	this->Max_hit_points = rhs.Max_hit_points;
	this->Energy_points = rhs.Energy_points;
	this->Max_energy_points = rhs.Max_energy_points ;
	this->Level = rhs.Level;
	this->Melee_attack_damage = rhs.Melee_attack_damage;
	this->Ranged_attack_damage = rhs.Ranged_attack_damage;
	this->Armor_damage_reduction = rhs.Armor_damage_reduction;
    return (*this);
}

std::ostream & operator<<( std::ostream & o, SuperTrap const & rhs )
{
	o << "name :\t\t\t " << rhs.Name << std::endl;
	o << "level :\t\t\t " << rhs.Level << std::endl;
	o << "hit_points :\t\t " << rhs.Hit_points << std::endl;
	o << "energy_points :\t\t " << rhs.Energy_points << std::endl;
	o << "max_hit_points :\t " << rhs.Max_hit_points << std::endl;
	o << "melee_attack_damage :\t " << rhs.Melee_attack_damage << std::endl;
	o << "range_attack_damage :\t " << rhs.Ranged_attack_damage << std::endl;
	o << "armor_damage_reduction : " << rhs.Armor_damage_reduction << std::endl;
	return (o);
}