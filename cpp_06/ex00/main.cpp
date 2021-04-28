/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 14:12:07 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/28 12:03:22 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_convertible(std::string arg, int	*floatexception, int *charexception)
{
	int						i = 0;
	std::string::iterator	it = arg.begin();
	
	/* VERIF POUR INF/NAN */
	if (arg == "+inff" || arg == "-inff"
	|| arg == "+inf" || arg == "-inf" || arg == "nan" || arg == "nanf")
	{
		*floatexception = 1;
		return (1);
	}
	/* VERIF POUR ONE CHAR */
	if (arg.length() == 1 && it[0] >= ASCII_MIN_PRINTABLE && it[0] <= ASCII_MAX_PRINTABLE)
	{
		*charexception = 1;
		return (1);
	}
	/* VERIF POUR NUMBER */
	if (it[0] == '+' || it[0] == '-' || is_digit(it[i]))
	{
		i++;
		while (it[i] && is_digit(it[i]))
			i++;
		if (it[i] == '.')
			i++;
		while (it[i] && is_digit(it[i]))
			i++;
		if (!it[i] || (it[i] == 'f' && !it[i + 1]))
			return (1);
		else
			return (0);				
	}
	return (0);
}

int	main(int ac,char **av)
{
	int floatexception = 0;
	int charexception = 0;

	if (ac != 2)
	{
		std::cout << "nb of arg invalid" << std::endl;
		return (0);
	}
	if (is_convertible(av[1], &floatexception, &charexception) == 0)
	{
		std::cout << "string cannot be converted" << std::endl;
		return (0);		
	}

	convert(av[1], floatexception, charexception);
}
