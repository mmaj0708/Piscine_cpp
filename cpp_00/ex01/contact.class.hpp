/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 10:46:12 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/02 14:18:58 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include "header.hpp"

class	contact {

public:

	void		addcontact(void);
	void		printcontact(void);

	std::string getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getNickName(void) const;
	std::string getLogin(void) const;
	std::string getPostAddress(void) const;
	std::string getEmailAddress(void) const;
	std::string getPhone(void) const;
	std::string getBirth(void) const;
	std::string getMeal(void) const;
	std::string getUnderwear(void) const;
	std::string getSecret(void) const;

private:

	std::string fName;
	std::string lName;
	std::string nName;
	std::string login;
	std::string postAddress;
	std::string emailAddress;
	std::string phone;
	std::string birthday;
	std::string meal;
	std::string underwear;
	std::string secret;
};

#endif