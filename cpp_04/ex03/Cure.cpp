

#include "Cure.hpp"

Cure::Cure()
{

}

Cure::Cure( Cure const & src )
{

}

Cure::~Cure()
{
    return;
}

Cure & Cure::operator=( Cure const & rhs )
{
    return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}