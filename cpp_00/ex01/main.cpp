/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 16:49:56 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/05 15:27:12 by mmaj             ###   ########.fr       */
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
	(*index)++;
	contact_tab[(*index) - 1] = contact_inst;
}
	// contact_inst.printcontact();

std::string	transform_string(std::string str)
{
	std::string str2;
	
	if (str.length() > 10)
	{
		str2 = str.substr(0, 10);
		std::string::iterator it = str2.begin();
		it[9] = '.';
		return (str2);
	}
	return (str);
}

void	ft_print_all_contact(int index, contact *contact_tab)
{
	int		i = 0;

	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << "index";
	std::cout << "|";
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << "first name";
	std::cout << "|";
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << "last name";
	std::cout << "|";
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << "nickname" << std::endl;

	while (i < index)
	{	
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << i + 1;
		std::cout << "|";
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << transform_string(contact_tab[i].getFirstName());
		std::cout << "|";
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << transform_string(contact_tab[i].getLastName());
		std::cout << "|";
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << transform_string(contact_tab[i].getNickName());
		std::cout << std::endl;
		i++;
	}
}

void	ft_print_contact(int index, contact *contact_tab)
{
	
}

void    ft_search(int *index, contact *contact_tab)
{
	int			input_int;

	if (*index == 0) {
		std::cout << "\nplease add contact first\n" << std::endl;
		return ;
	}
	ft_print_all_contact(*index, contact_tab);
	std::cout << "\nPlease choose an index\n" << std::endl;
	std::cin >> input_int;
	if (std::cin.fail() || input_int < 1 || input_int > *index)
	{
		std::cout << "Error" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
		std::cout << "The index you choose doesn't exist" << std::endl;
		return ;
	}
	std::cout << "index is : " << input_int << std::endl;
    std::cin.clear();
    std::cin.ignore(256,'\n');
	ft_print_contact();
}

void    phonebook(void)
{
	int			index;
    std::string command;
	contact		contact_tab[8];
    
	index = 0;
    std::cout << "Please enter command (ADD/SEARCH/EXIT)" << std::endl;
    while (1)
    {
        std::cin >> command;
        if (command == "ADD")
            ft_add(&index, contact_tab);
        else if (command == "SEARCH")
            ft_search(&index, contact_tab);
        else if (command == "EXIT")
            break;
        else
            std::cout << command << " is not a command" << std::endl;
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
