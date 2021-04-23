/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 14:25:24 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/23 16:48:41 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{
private:

	std::string const _name;
	bool			  _bool;
	int	const		  _signGrade;
	int	const		  _execGrade;

public:

	Form( void );
	Form( std::string name, int sGrade, int eGrade );
	Form( Form const & src );
	~Form( void );

	std::string getName() const;
	bool		getBool() const;
	int			getSignedGrade() const;
	int			getExecGrade() const;

	void		beSigned(Bureaucrat const & bur);

	class	GradeTooHighException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};

	Form & operator=( Form const & rhs );

};

std::ostream & operator<<( std::ostream & o, Form const & rhs );

#endif