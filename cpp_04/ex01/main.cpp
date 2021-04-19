/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:16:30 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/19 13:48:48 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Banana.hpp"
#include "Spider.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	// MY TEST
	std::cout << std::endl;
	AWeapon* bn = new Banana;
	Enemy*	 spider = new Spider;
	Enemy*	 spider2 = new Spider;

	me->equip(bn);
	me->attack(spider);
	std::cout << *me;
	me->attack(spider);
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	me->attack(spider2);

	delete pr;
	delete pf;
	delete bn;
	return 0;
}