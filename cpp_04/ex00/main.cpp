/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 10:55:21 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/16 14:09:22 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Cheval.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	std::cout << std::endl;
	
	Victim jim("Jimmy");
	Peon joe("Joe");
	Cheval cheval("Cheval");
	std::cout << std::endl;
	
	std::cout << robert << jim << joe << cheval;
	std::cout << std::endl;
	
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(cheval);
	std::cout << std::endl;
	return 0;
}
