/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 14:12:07 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/27 16:23:19 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include <sstream>

int	main(int ac,char **av)
{
	// std::stringstream ss;
	char			  num_char;
	int				  num_int;
	float			  num_float;
	double			  num_double;

	if (ac != 2)
	{
		std::cout << "nb of arg invalid" << std::endl;
		return (0);
	}

	num_char = 'r';
	num_int = atoi(av[1]);
	num_float = atof(av[1]);
	num_double = strtod(av[1], NULL);

	std::cout << "string is  " << av[1] << std::endl;  
	std::cout << "char :     " << num_char << std::endl;
	std::cout << "integer :  " << num_int << std::endl;
	std::cout << "float      " << num_float << std::endl;
	std::cout << "double     " << num_double << std::endl;
}
