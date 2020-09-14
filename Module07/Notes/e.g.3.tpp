#include <iostream>
#include <iomanip>

template< typename T = float >
class Vertex {
    public:
        Vertex( T const & x, T const & y, T const & z ) : _x(x), _y(y), _z( z ) { }
        ~Vertex( void) { }
        T const & getx(void) const { return this->_x; }
        T const & gety(void) const { return this->_y; }
        T const & getz(void) const { return this->_z; }
    private:
        T const _x;
        T const _y;
        T const _z;
        Vertex( void );

};

template< typename T >
std::ostream & operator<<( std::ostream & o, Vertex< T > const & V) {
    std::cout.precision( 1 );
    o << std::setiosflags( std::ios::fixed );
    o << "Vertex( ";
    o << V.getx() << ", ";
    o << V.gety() << ", ";
    o << V.getz() << " )";
    return o;
}
