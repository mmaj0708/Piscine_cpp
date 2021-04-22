/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 12:01:55 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/22 12:37:58 by mmaj             ###   ########.fr       */
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
	// AMateria* tmp2;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	// tmp = new Ice();
	// tmp2 = new Cure();
	// me->equip(tmp);
	// me->equip(tmp2);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;

// IMateriaSource	*source = new MateriaSource();
// 	source->learnMateria(new Ice());
// 	source->learnMateria(new Cure());

// 	ICharacter	*moi = new Character("moi");

// 	AMateria	*tmp1;
// 	AMateria	*tmp2;
// 	AMateria	*tmp3;
// 	AMateria	*tmp4;
// 	AMateria	*tmp5;
// 	AMateria	*tmp6;

// 	tmp1 = source->createMateria("cure");
// 	moi->equip(tmp1);
// 	tmp2 = source->createMateria("ice");
// 	moi->equip(tmp2);
// 	tmp3 = source->createMateria("cure");
// 	moi->equip(tmp3);
// 	tmp4 = source->createMateria("AAAAAAA");
// 	moi->equip(tmp4);
// 	tmp5 = source->createMateria("cure");
// 	moi->equip(tmp5);
// 	tmp6 = source->createMateria("cure");
// 	moi->equip(tmp6);

	return 0;
}

// check augmentation xp
// check materia non existant