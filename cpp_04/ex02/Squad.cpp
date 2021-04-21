/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 14:13:08 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/19 16:18:53 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
	//  std::cout << "default constructor called" << std::endl;
	this->count = 0;
	this->marines = NULL;
	return;
}

Squad::Squad( Squad const & src )
{
	 *this = src;
	 return;
}

Squad::~Squad()
{
	for (int i = 0 ; i < count ; i++)
		delete marines[i];
	delete [] marines;
	return;
}

int		Squad::is_already_there( ISpaceMarine* marine )
{
	for (int i = 0 ; i < count ; i++)
	{
		if (marines[i] == marine)
			return (1);
	}
	return (0);
}

int Squad::getCount() const
{
	return (this->count);
}

ISpaceMarine* Squad::getUnit(int n) const
{
	if (n < 0 || n > this->count)
		return (NULL);
	else
		return (this->marines[n]);
}

int Squad::push(ISpaceMarine* marine)
{
	ISpaceMarine	**tmp;

	if (this->count == 0 && this->marines == NULL)
	{
		this->marines = new ISpaceMarine*[1];
		marines[0] = marine;
		this->count++;
		return(this->count);
	}
	if (is_already_there(marine) == 1)
	{
		return (count);
	}
	tmp = new ISpaceMarine*[count + 1];
	for (int i = 0 ; i < this->count ; i++)
		tmp[i] = marines[i];
	tmp[count] = marine;
	delete [] marines;
	marines = tmp;
	this->count++;
	return (count);
}

Squad & Squad::operator=( Squad const & rhs )
{
	if (this->marines)
	{
		for (int i = 0 ; i < this->count ; i++)
			delete this->marines[i]; // ecraser units de la squad actuelle
		delete [] marines;
	}
	count = 0;
	marines = NULL;
	for (int j = 0 ; j < rhs.getCount() ; j++)
		this->push(rhs.getUnit(j)->clone()); // envoyer clone de l'unit ds squad
	return(*this);
}
