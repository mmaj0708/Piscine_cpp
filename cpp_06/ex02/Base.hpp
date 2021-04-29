/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 10:03:35 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/29 10:30:31 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstdlib>

class Base
{
public:

	virtual ~Base( void );
};

Base::~Base()
{
	return ;
}

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void);
void identify_from_pointer(Base * p);
void identify_from_reference( Base & p);

#endif