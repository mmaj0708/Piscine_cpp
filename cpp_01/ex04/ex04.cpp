/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:26:54 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/06 17:31:15 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int	main()
{
	std::string str =		"HI THIS IS BRAIN";
	std::string	*str_ptr =	&str;
	std::string	&str_ref =	str;

	std::cout << "str_ptr = " << *str_ptr << std::endl;
	std::cout << "str_ref = " << str_ref << std::endl;
}