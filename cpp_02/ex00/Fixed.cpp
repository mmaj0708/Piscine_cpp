/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 11:24:49 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/12 13:34:30 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed() 
{
	std::cout << "default constructor called" << std::endl;
	this->fixed_n = 0;

	return;
}

Fixed	&Fixed::operator=( Fixed const & rhs )
{
	std::cout << "assignation operator called" << std::endl;
	this->fixed_n = rhs.getRawBits();
    return (*this);
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "copy constructor called" << std::endl;
	this->fixed_n = 0;
	*this = src;
	return;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_n);
}

void	Fixed::setRawBits( int const raw )
{
	this->fixed_n = raw;
	return;
}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
	return;
}
