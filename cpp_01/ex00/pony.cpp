/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 10:48:31 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/06 11:34:28 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

void	ponyOnTheStack(void)
{
	pony	ponyStack;

	ponyStack.name = "joeStack";
	ponyStack.color = "blue";
	ponyStack.qi = 12;

	std::cout << "Pony on Stack\n" << std::endl;
	std::cout << "Name 	: " << ponyStack.name << std::endl;
	std::cout << "Color : " << ponyStack.color << std::endl;
	std::cout << "qi    : " << ponyStack.qi << std::endl;
}

void	ponyOnTheHeap(void)
{
	pony	*ponyHeap = new pony();

	ponyHeap->name = "billyHeap";
	ponyHeap->color = "yellow";
	ponyHeap->qi = 22;

	std::cout << "\nPony on Heap\n" << std::endl;
	std::cout << "Name  : " << ponyHeap->name << std::endl;
	std::cout << "Color : " << ponyHeap->color << std::endl;
	std::cout << "qi    : " << ponyHeap->qi << std::endl;

	delete ponyHeap;
}
