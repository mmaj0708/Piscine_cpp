/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 16:49:56 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/02 14:56:45 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void    ft_add(int *index, contact *contact_tab)
{
    if (*index == 8) {
		std::cout << "you can't add more than 8 contacts\n" << std::endl;
		return ;	
	}

    std::cout <<         \
    "Add new contact\n" << \
    std::endl;
	
	contact contact_inst;
	contact_inst.addcontact();
	// contact_inst.printcontact();
	contact_tab[(*index) - 1] = contact_inst;
	std::cout << "CHECK FIRST NAME" << contact_tab[*index - 1].getFirstName() << std::endl;
	(*index)++;
}

void    ft_search(void)
{
    
}

void    phonebook(void)
{
	int			index;
    std::string command;
	contact		contact_tab[8];
    
	index = 1;
    std::cout << "Please enter command (ADD/SEARCH/EXIT)" << std::endl;
    while (1)
    {
        std::cin >> command;
        if (command == "ADD")
            ft_add(&index, contact_tab);
        else if (command == "SEARCH")
            ft_search();
        else if (command == "EXIT")
            break;
        else
            std::cout << command << " is not a command" << std::endl;
		
	// std::cout << index << std::endl;

        std::cout << "Please enter command (ADD/SEARCH/EXIT)" << std::endl;
    }
}

int        main()
{
    std::cout << "Welcome, this is your phonebook\n" << std::endl;
    phonebook();
    std::cout << "Goodbye!" << std::endl;
    return (0);
}
