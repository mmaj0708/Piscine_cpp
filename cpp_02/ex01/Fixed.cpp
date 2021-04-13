/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 11:24:49 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/13 10:23:52 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed()
{
	std::cout << "default constructor called" << std::endl;
	this->fixed_n = 0;

	return;
}

Fixed::Fixed( const int intVal)
{
	std::cout << "int constructor called" << std::endl;
	this->fixed_n = intVal << this->binary_point;

	return;
}

Fixed::Fixed( const float floatVal )
{
	std::cout << "float constructor called" << std::endl;
	this->fixed_n = roundf( floatVal * (1 <<  this->binary_point));
	return;
}

Fixed	&Fixed::operator=( Fixed const & rhs )
{
	std::cout << "assignation operator called" << std::endl;
	this->fixed_n = rhs.fixed_n;
    return (*this);
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toFloat();
	return (o);
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "copy constructor called" << std::endl;
	this->fixed_n = 0;
	*this = src;
	return;
}

int			Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_n);
}

void		Fixed::setRawBits( int const raw )
{
	this->fixed_n = raw;
	return;
}

int			Fixed::toInt( void ) const
{
	int i = this->fixed_n >> this->binary_point;
	return (i);
}

float		Fixed::toFloat( void ) const
{
	float	f = this->fixed_n / (pow( 2, this->binary_point)); // fixed_n / (256)
	return (f);
}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
	return;
}
