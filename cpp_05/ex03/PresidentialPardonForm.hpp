/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 11:51:16 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/26 11:55:04 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"
#include <cstdlib>

class PresidentialPardonForm : public Form
{
private:

	std::string _target;
	PresidentialPardonForm( void );

public:

	PresidentialPardonForm( std::string target );
	PresidentialPardonForm( PresidentialPardonForm const & src );
	~PresidentialPardonForm( void );
	PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs );

	std::string 	getTarget() const;
	virtual void	execute(Bureaucrat const &executor) const;
};

#endif