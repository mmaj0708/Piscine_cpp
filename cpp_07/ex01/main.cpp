/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaj <mmaj@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 14:56:33 by mmaj              #+#    #+#             */
/*   Updated: 2021/06/15 12:38:12 by mmaj             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// void func1(int const & n)
// {
// 	std::cout << "func1 : " << n << std::endl;
// }

// void func2(float const & n)
// {
// 	std::cout << "func2 : " << n << std::endl;
// }

// int main()
// {
// 	int		intTab[] = {1, 2, 3, 4, 5};
// 	float	floatTab[] = {1.5, 2.6, 3.7, 4.8, 5.8};

// 	iter<int>(intTab, 5, func1);
// 	std::cout << std::endl;
// 	iter<float>(floatTab, 5, func2);
// }

class Awesome {

public:
Awesome( void ) : _n( 42 ) { return; }
int get( void ) const { return this->_n; }

private:
int _n;};


std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {

int tab[] = { 0, 1, 2, 3, 4 };
Awesome tab2[5];

iter( tab, 5, print );
iter( tab2, 5, print );

//////
std::string str_tab[3] = { "bonjour", "robert", "chaise"};
float f_tab[3] = { 1.3, 3.54, 4.7893};
iter( str_tab, 3, print );
iter( f_tab, 3, print );

return 0;
}
