/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 11:36:09 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/15 12:11:12 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

void	NinjaTrap::init_vars(void)
{
	this->Hit_points = 60;
	this->Max_hit_points = 60;
	this->Energy_points = 120;
	this->Max_energy_points = 120;
	this->Level = 1;
	this->Melee_attack_damage = 60;
	this->Ranged_attack_damage = 5;
	this->Armor_damage_reduction = 0;
}

NinjaTrap::NinjaTrap() : ClapTrap::ClapTrap()
{
	 std::cout << "* NinjaTrap default constructor called *" << std::endl;
	 init_vars();
	 return;
}

NinjaTrap::NinjaTrap( std::string _Name ) : ClapTrap::ClapTrap(_Name)
{
	std::cout << "* NinjaTrap parametric constructor called *" << std::endl;
	init_vars();
	return;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src )
{
	 std::cout << "* NinjaTrap copy constructor called *" << std::endl;
	 *this = src;
	 return;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "* NinjaTrap destructor called *" << std::endl;
	return;
}

void	NinjaTrap::ninjaShoeBox(ClapTrap & target)
{
	std::cout << "Ninja " << this->Name << " va taper tres fort sur ClapTrap " << target.Name << std::endl;
	return;
}

void	NinjaTrap::ninjaShoeBox(FragTrap & target)
{
	std::cout << "Ninja " << this->Name << " attaque sournoisement FragTrap " << target.Name << std::endl;
	return;
}
void	NinjaTrap::ninjaShoeBox(NinjaTrap & target)
{
	std::cout << "Ninja " << this->Name << " mange NinjaTrap " << target.Name << std::endl;
	return;
}

void	NinjaTrap::ninjaShoeBox(ScavTrap & target)
{
	std::cout << "Ninja " << this->Name << " fais une clé de bras à ScavTrap " << target.Name << std::endl;
	return;
}

NinjaTrap & NinjaTrap::operator=( NinjaTrap const & rhs )
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

std::ostream & operator<<( std::ostream & o, NinjaTrap const & rhs )
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