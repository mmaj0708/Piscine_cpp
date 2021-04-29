/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 14:46:10 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/29 10:42:03 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void)
{
	int i;

	i = rand() % 3;

	if (i == 0)
	{
		std::cout << "A has been generated" << std::endl;
		return (new A);
	}
	if (i == 1)
	{
		std::cout << "B has been generated" << std::endl;
		return (new B);
	}
	if (i == 2)
	{
		std::cout << "C has been generated" << std::endl;
		return (new C);
	}

	return (NULL);
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "identify from pointer : A" << std::endl;
		return;
	}
	if (dynamic_cast<B*>(p))
	{
		std::cout << "identify from pointer : B" << std::endl;
		return;
	}
	if (dynamic_cast<C*>(p))
	{
		std::cout << "identify from pointer : C" << std::endl;
		return;
	}
}

void identify_from_reference( Base & p)
{
	Base *ptr = &p;
	if (dynamic_cast<A*>(ptr))
	{
		std::cout << "identify from from ref : A" << std::endl;
		return;
	}
	if (dynamic_cast<B*>(ptr))
	{
		std::cout << "identify from from ref : B" << std::endl;
		return;
	}
	if (dynamic_cast<C*>(ptr))
	{
		std::cout << "identify from from ref : C" << std::endl;
		return;
	}
}

int main ()
{
	// TEST FROM PTR
	identify_from_pointer(generate());
	std::cout << std::endl;
	identify_from_pointer(generate());
	std::cout << std::endl;
	identify_from_pointer(generate());
	std::cout << std::endl;
	identify_from_pointer(generate());
	std::cout << std::endl;
	identify_from_pointer(generate());
	std::cout << std::endl;
	identify_from_pointer(generate());
	std::cout << std::endl;
	identify_from_pointer(generate());
	std::cout << std::endl;
	identify_from_pointer(generate());
	std::cout << std::endl;

	// TEST FROM REF
	identify_from_reference(*generate());
	std::cout << std::endl;
	identify_from_reference(*generate());
	std::cout << std::endl;
	identify_from_reference(*generate());
	std::cout << std::endl;
	identify_from_reference(*generate());
	std::cout << std::endl;
	identify_from_reference(*generate());
	std::cout << std::endl;
	identify_from_reference(*generate());
	std::cout << std::endl;
	identify_from_reference(*generate());
	std::cout << std::endl;
	identify_from_reference(*generate());
	return (0);
}
