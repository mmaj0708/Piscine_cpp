/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:38:09 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/30 14:48:37 by mmaj             ###   ########.fr       */
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

	Array <int>arr(5);

	arr[0] = 42;
	arr[1] = 42;
	arr[2] = 42;
	arr[3] = 42;
	arr[4] = 42;
	try
	{
		arr[5] = 42;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: Index not in range of datas amount." << std::endl;
	}
	std::cout << arr[0] << ", " << arr[1] << ", " << arr[2] << ", " << arr[3] << ", " << arr[4] << std::endl;

	Array <int>arr_cpy;
	Array <int>arr_cpy2(arr); // construct par cpy

	arr_cpy = arr;
	std::cout << arr_cpy[0] << ", " << arr_cpy[1] << ", " << arr_cpy[2] << ", " << arr_cpy[3] << ", " << arr_cpy[4] << std::endl;
	std::cout << arr_cpy2[0] << ", " << arr_cpy2[1] << ", " << arr_cpy2[2] << ", " << arr_cpy2[3] << ", " << arr_cpy2[4] << std::endl;

	Array <std::string>str_arr(5);

	str_arr[0] = "gne0";
	str_arr[1] = "gne1";
	str_arr[2] = "gne2";
	str_arr[3] = "gne3";
	str_arr[4] = "gne4";
	try
	{
		str_arr[5] = 42;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception: Index not in range of datas amount." << std::endl;
	}
	std::cout << str_arr[0] << ", " << str_arr[1] << ", " << str_arr[2] << ", " << str_arr[3] << ", " << str_arr[4] << std::endl;

	Array <std::string>str_arr_cpy;
	Array <std::string>str_arr_cpy2(str_arr);

	str_arr_cpy = str_arr;
	std::cout << str_arr_cpy[0] << ", " << str_arr_cpy[1] << ", " << str_arr_cpy[2] << ", " << str_arr_cpy[3] << ", " << str_arr_cpy[4] << std::endl;
	std::cout << str_arr_cpy2[0] << ", " << str_arr_cpy2[1] << ", " << str_arr_cpy2[2] << ", " << str_arr_cpy2[3] << ", " << str_arr_cpy2[4] << std::endl;
	return (0);
}


// verif avec correction