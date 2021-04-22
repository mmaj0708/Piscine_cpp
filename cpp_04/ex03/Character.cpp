/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 09:06:09 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/22 16:51:07 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _tab(new AMateria*[4]), _count(0)
{
	this->_tab[0] = NULL;
	this->_tab[1] = NULL;
	this->_tab[2] = NULL;
	this->_tab[3] = NULL;
	return;
}

Character::Character( Character const & src )
{
	 *this = src;
	 return;
}

Character::~Character()
{
	for (int i = 0 ; i < _count ; i++)
	{
		delete _tab[i];
	}
	delete [] _tab;
	return;
}

Character::Character( std::string name ) : _name(name), _tab(new AMateria*[4]), _count(0)
{
	this->_tab[0] = NULL;
	this->_tab[1] = NULL;
	this->_tab[2] = NULL;
	this->_tab[3] = NULL;
	return;
}

std::string const & Character::getName() const
{
	return(this->_name);
}

void Character::equip(AMateria* m)
{
	// int i = 0;

	// // std::cout << m->getXP() << std::endl;
	// if (_count > 4 || !m)
	// 	return;
	// while (_tab[i])
	// 	i++;
	// // AMateria *tmp =  m->clone();
	// _tab[i] = m;
	// _count++;

	if (_count == 4 || !m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!_tab[_count])
		{
			_tab[_count] = m;
			_count++;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
		return;
	if (_tab[idx])
		_count--;
	_tab[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (!_tab[idx])
		return;
	_tab[idx]->use(target);
}

AMateria	*Character::getMateria(int const i) const
{
	return (_tab[i]);
}

int			Character::getCount() const
{
	return (_count);
}

std::string const	Character::getMaterias(void) const
{
	std::stringstream ss;

	for (int i = 0; i < 4; i++)
	{
		if (_tab[i])
			ss << "  [" << i << "] = " <<		\
			_tab[i]->getType() << " " <<	\
			_tab[i]->getXP() << std::endl;
	}
	return (ss.str());
}

Character & Character::operator=( Character const & rhs )
{
	_name = rhs.getName();
	_count = rhs.getCount();

	for (int i = 0 ; i < 4 ; i++)
	{
		if (rhs.getMateria(i))
			_tab[i] = rhs.getMateria(i)->clone();
		else
			_tab[i] = NULL;
	}
	return(*this);
}
