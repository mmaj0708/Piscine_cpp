/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 14:53:26 by mmaj              #+#    #+#             */
/*   Updated: 2021/06/14 17:42:29 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template< typename T >
class Mutantstack : public std::stack<T>
{
public:

	Mutantstack( void );
	Mutantstack( int const n );
	Mutantstack( Mutantstack const & src );
	Mutantstack( std::stack<T> const & src );
	~Mutantstack( void );

	typedef typename std::stack<T>::container_type::iterator iterator; // container_type est en gros un typedef de deque
	iterator begin( void ) { return (this->c.begin()); } // 'c' est une instance type deque possédant des iterateurs
	iterator end( void ) { return (this->c.end()); } // a mettre dans le d

	Mutantstack & operator=( Mutantstack const & rhs );
};

#endif