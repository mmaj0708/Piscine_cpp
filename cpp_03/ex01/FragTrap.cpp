/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:23:15 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/15 09:41:46 by mmaj             ###   ########.fr       */
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

FragTrap::FragTrap() : Name("default FragTrap")
{
	 std::cout << "default constructor called" << std::endl;
	 init_vars();
	 return;
}

FragTrap::FragTrap( std::string _Name ) : Name(_Name) 
{
	std::cout << "parametric constructor called" << std::endl;
	 init_vars();
	return;
}

FragTrap::FragTrap( FragTrap const & src )
{
	 std::cout << "copy constructor called" << std::endl;
	 *this = src;
	 return;
}

FragTrap::~FragTrap()
{
	std::cout << "destructor called" << std::endl;
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
	" à distance, causant " <<
	this->Ranged_attack_damage <<
	" points de dégâts !" <<
	std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout <<
	"FR4G-TP " << 
	this->Name << 
	" attaque " << 
	target << 
	" en mêlée, causant " <<
	this->Melee_attack_damage <<
	" points de dégâts !" <<
	std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout <<
	"FR4G-TP " << 
	this->Name << 
	" prend " << 
	amount - this->Armor_damage_reduction <<
	" de dommage !" <<
	std::endl;
	this->Hit_points = this->Hit_points - amount + this->Armor_damage_reduction;
	if (this->Hit_points < 0)
		this->Hit_points = 0;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout <<
	"FR4G-TP " << 
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

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string tab[5] = {"poignardage de dos", "coup de pied dans ta tête", "gros doigt", "eye contact", "BLABLABLA JENTENDS RIEN"};
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
