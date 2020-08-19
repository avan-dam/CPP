
#include "Interger.class.hpp"

Interger::Interger( int const n ) : _n(n) {
    std::cout << "Constructor called with value " << n << std::endl;
    return;
}

Interger::~Interger( void ) {
    std::cout << "Destructor called with value " << this->_n << std::endl;
    return;
}

int     Interger::getvalue( void ) const {
    return this->_n;
}

Interger &  Interger::operator=(Interger const & rhs)
{
    std::cout << "Assignment operator called with " << this->_n;
    std::cout << "to " << rhs.getvalue() << std::endl;

    this->_n = rhs.getvalue();
    return *this;
}

Interger  Interger::operator+(Interger const & rhs) const
{
    std::cout << "Assignment operator called with " << this->_n;
    std::cout << "And " << rhs.getvalue() << std::endl;

    return Interger( this->_n + rhs.getvalue() );
}

std::ostream & operator <<( std::ostream & o, Interger const & rhs )
{
     o << rhs.getvalue();
     return o;
}