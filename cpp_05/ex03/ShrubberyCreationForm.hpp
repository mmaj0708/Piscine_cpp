/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 10:39:22 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/26 14:38:44 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM__HPP
# define SHRUBBERYCREATIONFORM__HPP

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:

	std::string _target;
	ShrubberyCreationForm( void );

public:

	ShrubberyCreationForm( std::string target );
	ShrubberyCreationForm( ShrubberyCreationForm const & src );
	virtual ~ShrubberyCreationForm( void );
	ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs );

	std::string 	getTarget() const;
	virtual void	execute(Bureaucrat const &executor) const;
};

# define TREE1 \
"      /\\      " << std::endl <<		\
"     /\\*\\     " << std::endl <<		\
"    /\\O\\*\\    " << std::endl <<		\
"   /*/\\/\\/\\   " << std::endl <<		\
"  /\\O\\/\\*\\/\\  " << std::endl <<	\
" /\\*\\/\\*\\/\\/\\ " << std::endl <<	\
"/\\O\\/\\/*/\\/O/\\" << std::endl <<	\
"      ||      " << std::endl <<		\
"      ||      " << std::endl <<		\
"      ||      " << std::endl

# define TREE2 \
"          &&& &&  & &&" << std::endl <<			\
"      && &\\/&\\|& ()|/ @, &&" << std::endl <<		\
"      &\\/(/&/&||/& /_/)_&/_&" << std::endl <<		\
"   &() &\\/&|()|/&\\/ '%\" & ()" << std::endl <<	\
"  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl <<	\
"&&   && & &| &| /& & % ()& /&&" << std::endl <<	\
" ()&_---()&\\&\\|&&-&&--%---()~" << std::endl <<	\
"     &&     \\|||" << std::endl <<		\
"             |||" << std::endl <<		\
"             |||" << std::endl <<		\
"             |||" << std::endl <<		\
"       , -=-~  .-^- _" << std::endl

# define TREE3 \
"    oxoxoo    ooxoo" << std::endl <<		\
"  ooxoxo oo  oxoxooo" << std::endl <<		\
" oooo xxoxoo ooo ooox" << std::endl <<		\
" oxo o oxoxo  xoxxoxo" << std::endl <<		\
"  oxo xooxoooo o ooo" << std::endl <<		\
"    ooo\\oo\\  /o/o" << std::endl <<		\
"        \\  \\/ /" << std::endl <<			\
"         |   /" << std::endl <<	\
"         |  |" << std::endl <<		\
"         | D|" << std::endl <<		\
"         |  |" << std::endl <<		\
"         |  |" << std::endl <<		\
"  ______/____\\____" << std::endl

#endif