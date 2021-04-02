/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:23:10 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/02 14:43:10 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void		contact::addcontact(void) {

	std::cout << "Enter first name :" << std::endl;
	std::cin >> this->fName;
	std::cout << "Enter last name :" << std::endl;
	std::cin >> this->lName;	
	std::cout << "Enter nickname :" << std::endl;
	std::cin >> this->nName;
	std::cout << "Enter login :" << std::endl;
	std::cin >> this->login;
	std::cout << "Enter postal address :" << std::endl;
	std::cin >> this->postAddress;
	std::cout << "Enter email address :" << std::endl;
	std::cin >> this->emailAddress;
	std::cout << "Enter phone number :" << std::endl;
	std::cin >> this->phone;
	std::cout << "Enter birthday date :" << std::endl;
	std::cin >> this->birthday;
	std::cout << "Enter favorite meal :" << std::endl;
	std::cin >> this->meal;
	std::cout << "Enter color underwear :" << std::endl;
	std::cin >> this->underwear;
	std::cout << "Enter darkest secret :" << std::endl;
	std::cin >> this->secret;
}

void		contact::printcontact(void) {

	std::cout << this->fName << std::endl;
	std::cout << this->lName << std::endl;
}

std::string contact::getFirstName(void) const {
	
	return (this->fName);
}
