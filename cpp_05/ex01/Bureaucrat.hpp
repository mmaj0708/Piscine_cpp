/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 10:13:54 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/23 12:35:58 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
private:

	std::string const _name;
	int				  _grade;

public:

	Bureaucrat( void );
	Bureaucrat( std::string const name, int grade );
	Bureaucrat( Bureaucrat const & src );
	~Bureaucrat( void );

	std::string  getName() const;
	int		     getGrade() const;
	void		 incremente();
	void		 decremente();

	class GradeTooHighException : public std::exception
	{
		public :
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public :
		virtual const char* what() const throw();
	};

	Bureaucrat & operator=( Bureaucrat const & rhs );

};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs );

#endif
