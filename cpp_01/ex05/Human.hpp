/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:12:34 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/08 15:27:04 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"
#include <iostream>

class Brain;

class Human
{
private:


public:

	// Human();
	// ~Human();
	Brain const		brain;
	std::string		identify(void) const;
	const Brain		&getBrain(void);

};

#endif
