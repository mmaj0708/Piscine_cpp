/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 11:21:23 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/22 12:01:30 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:

	AMateria	**_sourceTab;
	int			_sourceCount;

public:

	MateriaSource( void );
	MateriaSource( int const n );
	MateriaSource( MateriaSource const & src );
	~MateriaSource( void );
	MateriaSource & operator=( MateriaSource const & rhs );

	AMateria	*getMateria(int const i) const;

	virtual void learnMateria(AMateria* src);
	virtual AMateria* createMateria(std::string const & type);

};

#endif
