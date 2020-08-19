#include "Interger.class.hpp"

int main( void )
{
    Interger    x( 30 );
    Interger    y( 10 );
    Interger    z( 0 );

    std::cout << "Value of x : " << x << std::endl;
    std::cout << "Value of y : " << y << std::endl;
    y = Interger(12);
    std::cout << "Value of y : " << y << std::endl;
    std::cout << "Value of z : " << z << std::endl;
    z = x + y;
    std::cout << "Value of z : " << z << std::endl;
    return 0;
}
