#include <iostream>
#include "Sample.class.hpp"

int main() {
    
    Sample instance1( 42 );
    Sample instance2( 42 );

    std::cout << "instance.compare(): " << instance1.compare( &instance2 ) << std::endl;
    std::cout << "instance.compare(): " << instance2.compare( &instance1 ) << std::endl;

    if (&instance1 == &instance2)
        std::cout << " instance 1 and 2 are pyschically equal " << std::endl;
    else
        std::cout << " instance 1 and 2 are NOT pyschically equal " << std::endl;
    if (instance1.compare( &instance2 ) == 0)
         std::cout << " instance 1 and 2 are structurally equal " << std::endl;
    else
        std::cout << " instance 1 and 2 are NOT structurally equal " << std::endl;
    return 0;
}