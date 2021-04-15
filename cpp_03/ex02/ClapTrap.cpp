/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 10:51:43 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/15 11:22:31 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("default")
{
	 std::cout << "* ClapTrap default constructor called *" << std::endl;
	 return;
}

ClapTrap::ClapTrap( std::string _Name ) : Name(_Name)
{
	std::cout << "* ClapTrap parametric constructor called *" << std::endl;
	return;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	 std::cout << "* ClapTrap copy constructor called *" << std::endl;
	 *this = src;
	 return;
}

ClapTrap::~ClapTrap()
{
	std::cout << "* ClapTrap destructor called *" << std::endl;
	return;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs )
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

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout <<
	"FR4G-TP * " << 
	this->Name << 
	" prend " << 
	amount - this->Armor_damage_reduction <<
	" de dommage !" <<
	std::endl;
	this->Hit_points = this->Hit_points - amount + this->Armor_damage_reduction;
	if (this->Hit_points < 0)
		this->Hit_points = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout <<
	"FR4G-TP * " << 
	this->Name << 
	" se voit réparer " <<
	amount <<
	" HP et " <<
	amount <<
	" point d'énergie !" << 
	std::endl;
	this->Hit_points = this->Hit_points + amount;
	this->Energy_points = this->Energy_points + amount;
	if (this->Hit_points > this->Max_hit_points)
		this->Hit_points = Max_hit_points;
	if (this->Energy_points > this->Max_energy_points)
		this->Energy_points = Max_energy_points;
}

std::ostream & operator<<( std::ostream & o, ClapTrap const & rhs )
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