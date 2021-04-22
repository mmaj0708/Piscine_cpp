/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 09:01:44 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/22 10:59:06 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <sstream>

class Character : public ICharacter
{

private:

	std::string _name;
	AMateria	**_tab;
	int			_count;

public:

	Character( void );
	Character( std::string name );
	Character( Character const & src );
	virtual ~Character( void );
	Character & operator=( Character const & rhs );

	virtual std::string const & getName() const;
	virtual AMateria *getMateria(int const i) const;
	virtual int getCount() const;
	virtual std::string const getMaterias() const;


	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

};

#endif