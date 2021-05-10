/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 14:46:10 by mmaj              #+#    #+#             */
/*   Updated: 2021/04/28 16:11:24 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

char *str_rand(void)
{
	char *str = new char[9];

	for(int i = 0 ; i < 8 ; i++)
	{
		while (isalnum(str[i] = rand() % 256) == 0)
		{}
	}
	return (str);
}

void * serialize(void)
{
	char	*serialStr = new char[20];
	char	*s1 = str_rand();
	char	*s2 = str_rand();
	int		n = rand();
	int		*n_ptr = &n;


	std::cout << "random string s1 = " << s1 << std::endl;
	std::cout << "random number  n = " << n << std::endl;
	std::cout << "random string s2 = " << s2 << std::endl;

	memcpy(serialStr, reinterpret_cast<void *>(s1), 8);	
	memcpy(&serialStr[8], reinterpret_cast<void *>(n_ptr), 4);	
	memcpy(&serialStr[12], reinterpret_cast<void *>(s2), 8);	
	

	delete s1;
	delete s2;
	return (static_cast<void*>(serialStr));
}

Data * deserialize(void * raw)
{
	Data *data_ret = new Data;
	char *ptrRaw   = reinterpret_cast<char*>(raw);
	char	temp[9];

	temp[8] = '\0';
	data_ret->s1 = static_cast<char*>(memcpy(temp, static_cast<char*>(ptrRaw), 8));
	data_ret->n = *(reinterpret_cast<int*>(ptrRaw + 8));
	data_ret->s2 = static_cast<char*>(memcpy(temp, static_cast<char*>(ptrRaw + 12), 8));
	return (data_ret);
}

int main ()
{
	Data *d1 = deserialize(serialize());
	Data *d2 = deserialize(serialize());
	Data *d3 = deserialize(serialize());
	Data *d4 = deserialize(serialize());

	std::cout << "\n|---- D1 ----|" << std::endl;
	std::cout << "s1 = " << d1->s1 << std::endl;
	std::cout << "n = " << d1->n << std::endl;
	std::cout << "s2 = " << d1->s2 << std::endl;
	std::cout << "|---- D2 ----|" << std::endl;
	std::cout << "s1 = " << d2->s1 << std::endl;
	std::cout << "n = " << d2->n << std::endl;
	std::cout << "s2 = " << d2->s2 << std::endl;
	std::cout << "|---- D3 ----|" << std::endl;
	std::cout << "s1 = " << d3->s1 << std::endl;
	std::cout << "n = " << d3->n << std::endl;
	std::cout << "s2 = " << d3->s2 << std::endl;

	delete d1;
	delete d2;
	delete d3;
	delete d4;
	return (0);
}