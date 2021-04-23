/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 12:01:55 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/23 09:38:05 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	AMateria* tmp2;
	AMateria* tmp3; // fake
	AMateria* tmp4;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp2 = src->createMateria("ice");
	me->equip(tmp2);
	tmp4 = src->createMateria("cure");
	me->equip(tmp4);
	//fake type
	tmp3 = src->createMateria("gnee");
	me->equip(tmp3);

	// tmp = new Ice();
	// tmp2 = new Cure();
	// me->equip(tmp);
	// me->equip(tmp2);

	ICharacter* bob = new Character("bob");

	// check xp
	std::cout << "CURE XP = " << tmp->getXP() << std::endl;
	me->use(0, *bob);
	std::cout << "CURE XP = " << tmp->getXP() << std::endl;
	me->use(0, *bob);
	std::cout << "CURE XP = " << tmp->getXP() << std::endl;
	me->use(0, *bob);
	std::cout << "CURE XP = " << tmp->getXP() << std::endl;
	
	std::cout << std::endl;
	me->use(1, *bob);
	std::cout << "ICE XP = " << tmp2->getXP() << std::endl;
	me->use(1, *bob);
	std::cout << "ICE XP = " << tmp2->getXP() << std::endl;
	
	std::cout << std::endl;
	me->use(2, *bob);
	std::cout << "CURE2 XP = " << tmp4->getXP() << std::endl;
	me->use(2, *bob);
	std::cout << "CURE2 XP = " << tmp4->getXP() << std::endl;

	//nothing on gne
	me->use(3, *bob);


	me->unequip(1);
	me->use(1, *bob);

	delete src;
	delete me;
	delete bob;
	return 0;
}
