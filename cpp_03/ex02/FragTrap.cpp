/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:23:15 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/15 11:26:51 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	FragTrap::init_vars(void)
{
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 100;
	this->Max_energy_points = 100;
	this->Level = 1;
	this->Melee_attack_damage = 30;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;
}

FragTrap::FragTrap() : ClapTrap::ClapTrap()
{
	 std::cout << "* FragTrap default constructor called" << std::endl;
	 init_vars();
	 return;
}

FragTrap::FragTrap( std::string _Name ) : ClapTrap::ClapTrap(_Name) 
{
	std::cout << "* FragTrap parametric constructor called" << std::endl;
	 init_vars();
	return;
}

FragTrap::FragTrap( FragTrap const & src )
{
	 std::cout << "* FragTrap copy constructor called" << std::endl;
	 *this = src;
	 return;
}

FragTrap::~FragTrap()
{
	std::cout << "* FragTrap destructor called" << std::endl;
	// ClapTrap::~ClapTrap();
	return;
}

FragTrap & FragTrap::operator=( FragTrap const & rhs )
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

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout <<
	"FR4G-TP " << 
	this->Name << 
	" attaque " << 
	target << 
	" ?? distance, causant " <<
	this->Ranged_attack_damage <<
	" points de d??g??ts !" <<
	std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout <<
	"FR4G-TP " << 
	this->Name << 
	" attaque " << 
	target << 
	" en m??l??e, causant " <<
	this->Melee_attack_damage <<
	" points de d??g??ts !" <<
	std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string tab[5] = {"poignardage de dos", "coup de pied dans ta t??te", "gros doigt", "eye contact", "BLABLABLA JENTENDS RIEN"};
	if (this->Energy_points - 25 < 0)
	{
		std::cout << "FR4G-TP " << this->Name << " a moins de 25 energy_points !" << std::endl;
		return;
	}
	this->Energy_points = this->Energy_points - 25;
	std::cout << "FR4G-TP " << this->Name << " utilise \"" << tab[std::rand() % 5] << "\" sur " << target << std::endl;
}

std::ostream & operator<<( std::ostream & o, FragTrap const & rhs )
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
