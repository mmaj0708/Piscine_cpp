/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:16:31 by mmaj              #+#    #+#             */
/*   Updated: 2021/06/14 17:27:11 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mutantstack.hpp"

template< typename T >
Mutantstack<T>::Mutantstack() : std::stack<T>()
{
	 return;
}

template< typename T >
Mutantstack<T>::Mutantstack( Mutantstack const & src ) : std::stack<T>(src)
{
	 return;
}

template< typename T >
Mutantstack<T>::Mutantstack( std::stack<T> const & src ) : std::stack<T>(src)
{
	 return;
}

template< typename T >
Mutantstack<T>::~Mutantstack()
{
	return;
}

template< typename T >
Mutantstack<T> & Mutantstack<T>::operator=( Mutantstack<T> const & rhs )
{
	this->c = rhs.c;
	return(*this);
}
