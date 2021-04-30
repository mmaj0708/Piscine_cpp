/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 14:59:59 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/30 10:09:43 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template< typename T >
void	iter(T *arr, int size, void (*fct)(T const &x))
{
	for (int i = 0 ; i < size ; i++)
	{
		(*fct)(arr[i]);
	}
	return;
}

#endif
