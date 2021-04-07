/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:47:32 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/07 16:28:26 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>


class Zombie
{
public:

	std::string	name;
	std::string	type;
	Zombie(std::string c_name, std::string c_type);
};

#endif
