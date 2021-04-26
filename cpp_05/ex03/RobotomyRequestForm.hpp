/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 11:32:58 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/26 14:37:56 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form
{
private:

	std::string _target;
	RobotomyRequestForm( void );

public:

	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( RobotomyRequestForm const & src );
	virtual ~RobotomyRequestForm( void );
	RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );

	std::string 	getTarget() const;
	virtual void	execute(Bureaucrat const &executor) const;
};

#endif