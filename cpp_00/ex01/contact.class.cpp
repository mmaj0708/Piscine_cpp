/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:23:10 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/06 15:40:44 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void		contact::addcontact(void) {

	std::cout << "Enter first name :" << std::endl;
	getline(std::cin, this->fName, '\n');
	std::cout << "Enter last name :" << std::endl;
	getline(std::cin, this->lName, '\n');
	std::cout << "Enter nickname :" << std::endl;
	getline(std::cin, this->nName, '\n');
	std::cout << "Enter login :" << std::endl;
	getline(std::cin, this->login, '\n');
	std::cout << "Enter postal address :" << std::endl;
	getline(std::cin, this->postAddress, '\n');
	std::cout << "Enter email address :" << std::endl;
	getline(std::cin, this->emailAddress, '\n');
	std::cout << "Enter phone number :" << std::endl;
	getline(std::cin, this->phone, '\n');
	std::cout << "Enter birthday date :" << std::endl;
	getline(std::cin, this->birthday, '\n');
	std::cout << "Enter favorite meal :" << std::endl;
	getline(std::cin, this->meal, '\n');
	std::cout << "Enter color underwear :" << std::endl;
	getline(std::cin, this->underwear, '\n');
	std::cout << "Enter darkest secret :" << std::endl;
	getline(std::cin, this->secret, '\n');
}

std::string contact::getFirstName(void) const {
	
	return (this->fName);
}

std::string contact::getLastName(void) const {
	
	return (this->lName);
}

std::string contact::getNickName(void) const {
	
	return (this->nName);
}

std::string contact::getLogin(void) const {
	
	return (this->login);
}

std::string contact::getPostAddress(void) const {
	
	return (this->postAddress);
}

std::string contact::getEmailAddress(void) const {
	
	return (this->emailAddress);
}

std::string contact::getPhone(void) const {
	
	return (this->birthday);
}

std::string contact::getBirth(void) const {

	return (this->birthday);
}

std::string contact::getMeal(void) const {
	
	return (this->meal);
}

std::string contact::getUnderwear(void) const {
	
	return (this->underwear);
}

std::string contact::getSecret(void) const {
	
	return (this->secret);
}


