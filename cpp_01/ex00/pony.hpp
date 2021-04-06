/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 10:48:52 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/06 11:24:47 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class pony
{
public:

	std::string name;
	std::string color;
	int			qi;
};

void	ponyOnTheStack(void);
void	ponyOnTheHeap(void);

#endif