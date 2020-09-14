#include <iostream>

template< typename T>
class List {
    public:
        List<T>( T const & content ){
            //
        }
        List<T>( List<T> const & list) {
            //
        }
        ~List<T>( void ){
            //
        }
    private:
        T *         _content; // could be T _countent too no *
        List<T> *   _next;
};

int main( void )
{
    List< int >     a( 42 );
    List< float >   b(3.14f);
    List< List< int > > c(a); // this is a 2D list, a list of lists using just one template, I made a list of list of ints but coulf o been a  list of anything
}