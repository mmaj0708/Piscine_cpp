/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 14:09:32 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/20 10:54:11 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "TacticalMarine.hpp"
#include "ISpaceMarine.hpp"
#include <iostream>

class Squad : public ISquad
{
public:

	Squad( void );
	Squad( Squad const & src );
	virtual ~Squad();
	Squad & operator=( Squad const & rhs );

	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int) const;
	virtual int push(ISpaceMarine* marine);
	int		is_already_there( ISpaceMarine* marine );

private:

	int count;
	ISpaceMarine	**marines;
};

#endif
