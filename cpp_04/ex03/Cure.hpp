

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure
{

public:

    Cure();
	Cure( Cure const & src );
    virtual ~Cure();
	Cure & operator=( Cure const & rhs );

    virtual AMateria* clone() const;

};

#endif // CURE_HPP
