/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 11:09:21 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/09 12:30:36 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "3 arguments needed" << std::endl;
		return (0);
	}
	// if str1 ou str2 empty

	std::string			str0;
	std::string			str1 = av[2];
	std::string			str2 = av[3];
	std::ifstream		ifs(av[1]); // open test file
	std::stringstream	str_file;
	int					i;
	int					len_str1;

	str_file << ifs.rdbuf(); // get whole content of file

	str0 = str_file.str();

	i = str0.find(str1, 0); // get first occurence location
	len_str1 = str1.length();

	std::cout << "i = " << len_str1 << std::endl;

	str0.replace(i, len_str1, str2);
	std::cout << str0 << std::endl;

	// std::cout << std::string::npos << std::endl;
}