/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 09:30:04 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/22 12:09:10 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:

    unsigned int _xp;
    std::string  _type;

    public:

    AMateria();
	AMateria( AMateria const & src );
    AMateria(std::string const & type);
    virtual ~AMateria();
	AMateria & operator=( AMateria const & rhs );

    std::string const & getType() const; //Returns the materia type
    unsigned int getXP() const; //Returns the Materia's XP
	void	setType(std::string const &type);
	void	setXP(int const xp);

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif