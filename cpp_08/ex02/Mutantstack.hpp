/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:53:26 by mmaj              #+#    #+#             */
/*   Updated: 2021/06/15 15:45:46 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template< typename T >
class Mutantstack : public std::stack<T>
{
public:

	Mutantstack( void );
	Mutantstack( Mutantstack const & src );
	Mutantstack( std::stack<T> const & src );
	virtual ~Mutantstack( void );

	typedef typename std::stack<T>::container_type::iterator iterator; // container_type est en gros un typedef de deque
	iterator begin( void ) { return (this->c.begin()); } // 'c' est une instance type deque possédant des iterateurs
	iterator end( void ) { return (this->c.end()); }

	Mutantstack & operator=( Mutantstack const & rhs );
};

template < typename T >
Mutantstack<T>::Mutantstack(void) : std::stack<T>()
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
Mutantstack<T>::~Mutantstack(void)
{
	return;
}

template< typename T >
Mutantstack<T> & Mutantstack<T>::operator=( Mutantstack<T> const & rhs )
{
	this->c = rhs.c;
	return(*this);
}

#endif