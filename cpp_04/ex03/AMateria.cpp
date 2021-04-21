

#include "AMateria.hpp"

AMateria::AMateria() : _xp(0), _type("default")
{
    return;
}

AMateria::AMateria( AMateria const & src )
{

}

AMateria::AMateria(std::string const & type) : _xp(0), _type(type)
{
    return;
}

AMateria::~AMateria()
{
    return;
}

AMateria & AMateria::operator=( AMateria const & rhs )
{
    this->_xp = rhs._xp;
    this->_type = rhs._type;
    return (*this);
}

std::string const & AMateria::getType() const //Returns the materia type
{
    return (this->_type);
}

unsigned int AMateria::getXP() const //Returns the Materia's XP
{
    return (this->_xp);
}

void AMateria::use(ICharacter& target)
{
    this->_xp = this->_xp + 10;
}