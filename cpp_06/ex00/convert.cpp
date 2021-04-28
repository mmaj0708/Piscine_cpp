/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 11:28:56 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/28 14:08:46 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int			is_char(char c)
{
		if (c >= ASCII_MIN_PRINTABLE && c <= ASCII_MAX_PRINTABLE &&
		!(c >= '0' && c <= '9'))
		return (true);
	return (false);
}

void		print_char(double const &value)
{
	if (value >= ASCII_MIN_PRINTABLE && value <= ASCII_MAX_PRINTABLE)
		std::cout << "char   : '" << static_cast<char>(value) << "'" << std::endl;
	else
	{
		std::cout << "char   : non displayable" << std::endl;
	}
}

static void	print_int(double const &value)
{
	if (value >= INT_MIN && value <= INT_MAX)
			std::cout << "int    : " << static_cast<int>(value) << std::endl;
		else
			std::cout << "int    : impossible" << std::endl;
}

void		print_float(double const &value, int floatexception)
{
	double value2 = value;

	if (value < 0)
		value2 = -value;
	if ((value2 >= FLT_MIN && value2 <= FLT_MAX) || floatexception || value2 == 0)
	{
		if (value < 1000000 && value > -1000000)
			std::cout << "float  : " << std::fixed << std::setprecision(1) << static_cast<float>(value) << 'f' << std::endl;
		else
			std::cout << "float  : " << std::scientific << static_cast<float>(value) << "f" << std::endl;
	}
	else
		std::cout << "float : impossible" << std::endl;
}

void		print_double(double const &value)
{
	if (value < 1000000 && value > -1000000)
		std::cout << "double : " << std::fixed << std::setprecision(1) << value << std::endl;
	else
		std::cout << "double : " << std::scientific << value << std::endl;
}

void		convert(std::string str, int floatexception, int charexception)
{
	double value;

	if (charexception && is_char(str[0]))
		value = static_cast<double>(str[0]);
	else
		value = atof(str.c_str());
	if (floatexception)
	{
		std::cout << "char   : impossible" << std::endl;
		std::cout << "int    : impossible" << std::endl;
	}
	else
	{
		print_char(value);
		print_int(value);
	}
	print_float(value, floatexception);
	print_double(value);
}