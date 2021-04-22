/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 11:24:33 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/22 12:32:46 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _sourceTab(new AMateria*[4]), _sourceCount(0)
{
	_sourceTab[0] = NULL;
	_sourceTab[1] = NULL;
	_sourceTab[2] = NULL;
	_sourceTab[3] = NULL;
	return;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	for (int i = 0; i < 4; i++)
	{
		if (src.getMateria(i))
			_sourceTab[i] = src.getMateria(i)->clone();
		else
			_sourceTab[i] = NULL;
	}
	return ;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_sourceTab[i])
			delete _sourceTab[i];
	}
	delete [] _sourceTab;
	return;
}

AMateria	*MateriaSource::getMateria(int const i) const
{
	return (_sourceTab[i]);
}

void MateriaSource::learnMateria(AMateria* src)
{
	if (_sourceCount > 3 || !src)
		return;
	_sourceTab[_sourceCount] = src;
	// std::cout << "check src " << src->getType() << std::endl;
	// std::cout << "check " << _sourceTab[_sourceCount]->getType() << std::endl;
	_sourceCount++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while (_sourceTab[i] && i < 4)
	{
		if (_sourceTab[i] && _sourceTab[i]->getType() == type)
			return (_sourceTab[i]->clone());
		i++;
	}
	return (0);
}

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs )
{
	for (int i = 0 ; i < 4 ; i++)
	{
		if (rhs.getMateria(i))
			_sourceTab[i] = rhs.getMateria(i)->clone();
		else
			_sourceTab[i] = NULL;		
	}
	return(*this);
}
