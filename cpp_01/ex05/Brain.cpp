/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 12:02:46 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/08 15:23:31 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string 	Brain::identify(void) const
{
	std::string 		brain_addr;
	std::ostringstream	oss;

	oss << this;
	brain_addr = oss.str();
	
	return(brain_addr);
}

Brain::Brain()
{
	this->matiereGrise = 3;
	this->neurone = 5;
	 return;
}
