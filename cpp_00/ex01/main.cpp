/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 16:49:56 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/02 12:10:57 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void    ft_add(int *index)
{
    if (*index == 8) {
		std::cout << "you can't add more than 8 contacts" << std::endl;
		return ;	
	}
    std::cout <<         \
    "Add new contact" << \
    std::endl;
	*index++;
}

void    ft_search(void)
{
    
}

void    phonebook(void)
{
	int			*index;
    std::string command;
    
	*index = 0;
    std::cout << "Please enter command (ADD/SEARCH/EXIT)" << std::endl;
    while (1)
    {
        std::cin >> command;
        if (command == "ADD")
            ft_add(index);
        else if (command == "SEARCH")
            ft_search();
        else if (command == "EXIT")
            break;
        else
            std::cout << command << " is not a command" << std::endl;
        std::cout << "Please enter command (ADD/SEARCH/EXIT)" << std::endl;
    }
}

int        main()
{
    std::cout << "Welcome, this is your phonebook" << std::endl;
    std::cout << std::endl;
    phonebook();
    std::cout << "Goodbye!" << std::endl;
    return (0);
}
