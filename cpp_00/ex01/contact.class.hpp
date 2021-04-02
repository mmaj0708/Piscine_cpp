/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 10:46:12 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/02 11:50:37 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include "header.hpp"

class	contact {

public:

	std::string get(void) const;
	std::string get(void) const;
	std::string get(void) const;
	std::string get(void) const;
	std::string get(void) const;
	std::string get(void) const;
	std::string get(void) const;
	std::string get(void) const;
	std::string get(void) const;
	std::string get(void) const;
	std::string get(void) const;

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
	int			index;
};

#endif