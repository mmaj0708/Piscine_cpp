
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <exception>

class Excep : public std::exception
{
public :
    Excep(void);
    Excep(Excep const &src);
    Excep	&operator=(Excep const &src);
    char const *what() const throw();

};

Excep::Excep(void)
{
	return ;
}

Excep::Excep(Excep const &src)
{
	*this = src;
}

char const *Excep::what() const throw()
{
	return ("no occurence");
}

Excep	&Excep::operator=(Excep const &src)
{
    static_cast<void> (src);
	return (*this);
}

template <typename T>
int  easyfind(T &tab, int i)
{
    if (std::find(tab.begin(), tab.end(), i) != tab.end())
        return (i);
    throw Excep();
    return -1;
}

#endif