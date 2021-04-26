/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 14:25:24 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/26 11:13:54 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

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
	void		root_signing(bool sign_state);

	void		beSigned(Bureaucrat const & bur);
	virtual void	execute(Bureaucrat const &executor) const;
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

	class	NotSigned : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};

	Form & operator=( Form const & rhs );

};

std::ostream & operator<<( std::ostream & o, Form const & rhs );

#endif