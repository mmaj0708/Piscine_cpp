/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 09:58:56 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/15 10:29:50 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	ScavTrap::init_vars(void)
{
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 50;
	this->Max_energy_points = 100;
	this->Level = 1;
	this->Melee_attack_damage = 20;
	this->Ranged_attack_damage = 15;
	this->Armor_damage_reduction = 3;
}

ScavTrap::ScavTrap() : Name("default ScavTrap")
{
	 std::cout << "* ScavTrap default constructor called *" << std::endl;
	 init_vars();
	 return;
}

ScavTrap::ScavTrap( std::string _Name ) : Name(_Name) 
{
	std::cout << "* ScavTrap parametric constructor called *" << std::endl;
	 init_vars();
	return;
}

ScavTrap::ScavTrap( ScavTrap const & src )
{
	 std::cout << "* ScavTrap copy constructor called *" << std::endl;
	 *this = src;
	 return;
}

ScavTrap::~ScavTrap()
{
	std::cout << "* ScavTrap destructor called *" << std::endl;
	return;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs )
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

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout <<
	"FR4G-TP * ScavTrap " << 
	this->Name << 
	" attaque " << 
	target << 
	" à distance, causant " <<
	this->Ranged_attack_damage <<
	" points de dégâts !" <<
	std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout <<
	"FR4G-TP * ScavTrap " << 
	this->Name << 
	" attaque " << 
	target << 
	" en mêlée, causant " <<
	this->Melee_attack_damage <<
	" points de dégâts !" <<
	std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout <<
	"FR4G-TP * ScavTrap " << 
	this->Name << 
	" prend " << 
	amount - this->Armor_damage_reduction <<
	" de dommage !" <<
	std::endl;
	this->Hit_points = this->Hit_points - amount + this->Armor_damage_reduction;
	if (this->Hit_points < 0)
		this->Hit_points = 0;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout <<
	"FR4G-TP * ScavTrap " << 
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

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string index;

	std::cout << "CHALLENGE INCOMING ON " << target << "\n" << std::endl;
	std::cout << "CHOOSE YOUR CHALLENGE (1 or 2):" << std::endl;
	std::cout << "1.Sing a song/2.Imit human\n" << std::endl;
	std::cin >> index;
	if (index != "1" && index != "2")
	{
		std::cout << "WRONG INDEX ! DIIIIIED" << std::endl;
		return;
	}
	if (index == "1")
	{
		std::cout << "* robot voice *" << std::endl;
		std::cout << "IIIIII AAAAAAAAM A ROBOOOOOT" << std::endl;
		std::cout << "AND IIIIII'M SOOOOOOOOOOO" << std::endl;
		std::cout << "ALOOOOOOOOOOOOOOOOONE" << std::endl;
		std::cout << "YEAH YEAH YEAH YEAH" << std::endl;
		std::cout << "* mic drop *" << std::endl;
	}
	if (index == "2")
	{
		std::cout << "* bad human voice *" << std::endl;
		std::cout << "I am a human gnagnagna" << std::endl;
		std::cout << "And i'm asking myself question on existence gnagnagna" << std::endl;
		std::cout << "Cogito ergo sum gnagna" << std::endl;
		std::cout << "* mic drop *" << std::endl;
	}
}

std::ostream & operator<<( std::ostream & o, ScavTrap const & rhs )
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