/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 09:53:27 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/22 09:57:03 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{

public:

    Cure();
	Cure( Cure const & src );
    virtual ~Cure();
	Cure & operator=( Cure const & rhs );

    virtual AMateria* clone() const;
	virtual void	  use(ICharacter &target);
};

#endif // CURE_HPP
