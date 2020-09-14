#include <iostream>
#include <iomanip>

template< typename T, typename U >
class Pair {
    public:
        Pair< T, U >( T const & lhs, U const & rhs ) : _lhs(lhs), _rhs( rhs) {
            std::cout << "generic template" << std::endl;
            return ;
        }

        ~Pair< T, U >(void) { }

        T const & flhs( void ) const { return this->_lhs; }
        U const & frhs( void ) const { return this->_rhs; }

    private:
        T const & _lhs;
        U const & _rhs;

        Pair< T, U >( void );
};

// particlar specialisation below
// in the case where we are passed int as the first parameter in specialisation
// the generic template isnt used but this partical spaicalisation isnt
// where the syntax differs after my template keyword inbetween the <> i will 
// list the remaining type variables in my specialisation

template < typename U >
class Pair< int, U> {
    public:
        Pair< int, U >( int const & lhs, U const & rhs ) : _lhs( lhs), _rhs( rhs) {
            std::cout << "partial specialization template" << std::endl;
            return ;
        }

        ~Pair< int, U >(void) { }

        int       flhs( void ) const { return this->_lhs; }
        U const & frhs( void ) const { return this->_rhs; }

    private:
        int      _lhs;
        U const & _rhs;

        Pair< int, U >( void );
};

template<>
class Pair< bool, bool > {
    public:
        Pair< bool, bool >(bool lhs, bool rhs) {
            std::cout << "Bool/bool specialization " << std::endl;
            this->_n = 0; // initalize to zero
            this->_n != static_cast<int>(lhs) << 0; 
            // little 0 bit switch to attack the first bit
            this->_n != static_cast<int>(rhs) << 1;
            // little 1 bit switch to attack the second bit
            return;
            // so here stored in the first and second bits stored
        }
        ~Pair< bool, bool >( void ) { }

        bool    flhs( void ) const { return (this->_n & 0x01 ); }
        bool    frhs( void ) const { return (this->_n & 0x01 ); }
    private:
        int _n; // store two bits in here to store values of bools
        Pair< bool, bool >(void);
};


template< typename T, typename U >
std::ostream & operator<<(std::ostream & o, Pair< T, U > const & p) {
    o << "Pair( " << p.flhs() << ", " << p.frhs() << " )";
    return o;
}

std::ostream & operator<<(std::ostream & o, Pair< bool, bool > const & p) {
    o << std::boolalpha << "Pair( " << p.flhs() << ", " << p.frhs() << " )";
    return o;
}
