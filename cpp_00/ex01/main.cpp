/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 16:49:56 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/06 15:34:59 by mmaj             ###   ########.fr       */
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
    "\nAdd new contact\n" << \
    std::endl;
	contact contact_inst;
	contact_inst.addcontact();
	(*index)++;
	contact_tab[(*index) - 1] = contact_inst;
}

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

void	ft_print_contact(int i, contact *contact_tab)
{
	std::cout << "first name      : " << contact_tab[i - 1].getFirstName() << std::endl;
	std::cout << "last name       : " << contact_tab[i - 1].getLastName() << std::endl;
	std::cout << "nickname        : " << contact_tab[i - 1].getNickName() << std::endl;
	std::cout << "login           : " << contact_tab[i - 1].getLogin() << std::endl;
	std::cout << "postal address  : " << contact_tab[i - 1].getPostAddress() << std::endl;
	std::cout << "email address   : " << contact_tab[i - 1].getEmailAddress() << std::endl;
	std::cout << "phone number    : " << contact_tab[i - 1].getPhone() << std::endl;
	std::cout << "birthday date   : " << contact_tab[i - 1].getBirth() << std::endl;
	std::cout << "favorite meal   : " << contact_tab[i - 1].getMeal() << std::endl;
	std::cout << "underwear color : " << contact_tab[i - 1].getUnderwear() << std::endl;
	std::cout << "darkest secret  : " << contact_tab[i - 1].getSecret() << std::endl;
}

void    ft_search(int *index, contact *contact_tab)
{
	std::string				input_int;
	std::string::iterator	it = input_int.begin();

	if (*index == 0) {
		std::cout << "\nplease add contact first\n" << std::endl;
		return ;
	}
	ft_print_all_contact(*index, contact_tab);
	std::cout << "\nPlease choose an index" << std::endl;
	std::cin >> input_int;
	if (it[0] < '1' || it[0] - 48 > (*index) || input_int.length() > 1)
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
	ft_print_contact((int)it[0] - 48, contact_tab);
}

void    phonebook(void)
{
	int			index;
    std::string command;
	contact		contact_tab[8];
    
	index = 0;
    std::cout << "\nPlease enter command (ADD/SEARCH/EXIT)" << std::endl;
    while (1)
    {
		// std::cin.clear();
    	// std::cin.ignore(256,'\n');
		getline(std::cin, command, '\n');
        if (command == "ADD")
            ft_add(&index, contact_tab);
        else if (command == "SEARCH")
            ft_search(&index, contact_tab);
        else if (command == "EXIT")
            break;
        else
            std::cout << command << " is not a command" << std::endl;
        std::cout << "\nPlease enter command (ADD/SEARCH/EXIT)" << std::endl;
    }
}

int        main()
{
    std::cout << "Welcome, this is your phonebook\n" << std::endl;
    phonebook();
    std::cout << "Goodbye!" << std::endl;
    return (0);
}
