/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 10:15:04 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/30 14:48:56 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY
# define ARRAY

#include <iostream>

template< typename T >
class Array
{
private:

	int		_size;
	T		*_arr;

public:

	Array( void ); // array vide
	Array( unsigned int n ); // init un array de taille n avec init a 0 ? ou mets tout a n ?
	Array( Array const & src );
	~Array( void );
	Array & operator=( Array const & rhs );
	T	& operator[]( unsigned int const & i );
	const T	& operator[]( unsigned int const & i ) const;

	unsigned int	size() const;

};

// default
template< typename T >
Array<T>::Array() : _size(0), _arr()
{
	return;
}

// param
template <typename T>
Array<T>::Array(unsigned int n) : _size(n), _arr(new T[n])
{
	return ;
}

// copie
template <typename T>
Array<T>::Array( Array const & src )
{
	*this = src;
}

// assign
template <typename T>
Array<T> & Array<T>::operator=( Array const & rhs )
{
	this->_size = rhs.size();

	this->_arr = new T[_size];
	for(int i = 0 ; i < _size ; i++)
		_arr[i] = rhs[i];

	return (*this);
}

// []
template <typename T>
T	& Array<T>::operator[]( unsigned int const & i )
{
	if (i >= size())
		throw std::exception();

	return (_arr[i]);	
}

// const [] car les construct par copie sont const
template <typename T>
const T	& Array<T>::operator[]( unsigned int const & i ) const
{
	if (i >= size())
		throw std::exception();

	return (_arr[i]);	
}

// size
template< typename T >
unsigned int	Array<T>::size() const
{
	return (this->_size);
}

// destruct
template< typename T >
Array<T>::~Array()
{
	return;
}

#endif