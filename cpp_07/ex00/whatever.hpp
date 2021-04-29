/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:42:59 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/29 14:15:33 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template< typename T>
void	swap(T &a, T &b)
{
	T	tmp(a);

	a = b;
	b = tmp;
}

template< typename T>
T		&min(T &a, T &b)
{
	if (a > b || a == b)
		return (b);	
	return (a);
}

template< typename T>
T		&max(T &a, T &b)
{
	if (a > b)
		return (a);
	return (b);	
}

#endif
