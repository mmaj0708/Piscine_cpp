/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:13:13 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/15 12:15:25 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	FragTrap Sherman("Sherman");
	FragTrap Tom("Tom");
	ScavTrap Sheila("Sheila");
	ClapTrap Clark("Clark");
	NinjaTrap Nietsch("Nietsch");
	NinjaTrap Narwal("Narwal");

	std::cout << std::endl;
    Sherman.rangedAttack(Tom.Name);
    Sherman.meleeAttack(Tom.Name);
	std::cout << std::endl;
    Tom.takeDamage(50);
    Tom.beRepaired(20);
	std::cout << std::endl;
	Sherman.vaulthunter_dot_exe(Tom.Name);
	Sherman.vaulthunter_dot_exe(Tom.Name);
	Sherman.vaulthunter_dot_exe(Tom.Name);
	Sherman.vaulthunter_dot_exe(Tom.Name);
	Sherman.vaulthunter_dot_exe(Tom.Name);
	std::cout << std::endl;
    Sherman.beRepaired(100);
	std::cout << std::endl;
	Sherman.vaulthunter_dot_exe(Tom.Name);
	Sherman.vaulthunter_dot_exe(Tom.Name);
	std::cout << std::endl;
	Sheila.meleeAttack(Tom.Name);
	std::cout << std::endl;
	Sheila.challengeNewcomer(Tom.Name);
	std::cout << std::endl;
	Nietsch.ninjaShoeBox(Clark);
	Nietsch.ninjaShoeBox(Sherman);
	Nietsch.ninjaShoeBox(Sheila);
	Nietsch.ninjaShoeBox(Narwal);
	std::cout << std::endl;
	// std::cout << Nietsch << std::endl;
	return (0);
}
