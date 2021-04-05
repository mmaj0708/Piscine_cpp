/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:23:10 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/05 17:09:04 by mmaj             ###   ########.fr       */
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


