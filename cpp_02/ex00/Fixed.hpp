/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:04:28 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/12 13:33:56 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:

	int					fixed_n;
	const static int	binary_point = 8;

public:

	Fixed( void );
	Fixed( Fixed const & src );
	~Fixed( void );
	Fixed & operator=( Fixed const & rhs );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif
