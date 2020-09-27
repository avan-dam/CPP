#include <iostream>
#include "Sample.class.hpp"

int main() {
    
    Sample instance;
    Sample *    instancep = &instance; //address of instance variable
    int         Sample::*p = NULL;
    void        (Sample:: *f)( void ) const;

    p = &Sample::foo; // address of foo member or the sample class

    std::cout <<"Value of member foo: " << instance.foo << std::endl;
    instance.*p = 21;
    std::cout <<"Value of member foo: " << instance.foo << std::endl;
    instance.*p = 42;
    std::cout <<"Value of member foo: " << instance.foo << std::endl;

    f = &Sample::bar;

    (instance.*f)();
    (instancep->*f)();
    return 0;
}