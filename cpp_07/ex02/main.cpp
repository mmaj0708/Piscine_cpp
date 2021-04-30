/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:38:09 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/30 12:21:06 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main( void ) {

	Array<int> tab(5);

	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 4;

	std::cout << tab[0] << std::endl;
	std::cout << tab[1] << std::endl;
	std::cout << tab[2] << std::endl;
	std::cout << tab[3] << std::endl;
	std::cout << tab[4] << std::endl;
}
