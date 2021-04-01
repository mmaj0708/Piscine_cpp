/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 10:38:00 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/01 16:41:56 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

void	print_upper(std::string str)
{
	for (std::string::iterator i = str.begin(); i != str.end(); i++)
	{
		if (*i >= 'a' && *i <= 'z')
			*i = *i - 32;
		std::cout << *i;
	}
}

int		main(int ac, char **av)
{
	int		i = 1;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < ac)
		print_upper(av[i++]);
	std::cout << std::endl;
	return 0;
}
