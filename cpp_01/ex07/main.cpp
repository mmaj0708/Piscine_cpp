/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 11:09:21 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/09 14:48:36 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int	main(int ac, char **av)
{
	std::string			str0;
	std::string			filename = av[1];
	std::string			str1 = av[2];
	std::string			str2 = av[3];
	std::stringstream	str_file;
	size_t					i;
	int					j = 0;
	int					len_str1;
	int					len_str2;

	if (ac != 4)
	{
		std::cout << "3 arguments needed" << std::endl;
		return (0);
	}
	if (str1 == "" || str2 == "")
	{
		std::cout << "no empty arg please" << std::endl;
		return (0);
	}
	std::ifstream		ifs(av[1]); // open test file
	if (ifs.fail())
	{
		std::cout << "error with file" << std::endl;
		return (0);
	}

	str_file << ifs.rdbuf(); // get whole content of file
	len_str1 = str1.length();
	len_str2 = str2.length();
	str0 = str_file.str();

	while(1)
	{
		i = str0.find(str1, j); // get first occurence location
		if (i == std::string::npos)
			break;
		j = i + len_str2;
		str0.replace(i, len_str1, str2);
	}

	filename.insert(filename.length(), ".replace");
	std::ofstream 		out(filename);
    out << str0;
    out.close();
}