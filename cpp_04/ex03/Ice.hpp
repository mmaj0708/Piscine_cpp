/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 10:33:24 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/22 10:33:47 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{

public:

    Ice();
	Ice( Ice const & src );
    virtual ~Ice();
	Ice & operator=( Ice const & rhs );

    virtual AMateria* clone() const;
	virtual void	  use(ICharacter &target);
};

#endif // CURE_HPP
