#include <iostream>
#include "Sample.class.hpp"

int main() {
    
    Sample instance;

    instance.publicFoo = 42;
    std::cout << "instance.pblicFoo: " << instance.publicFoo << std::endl;
    // instance._privateFoo = 42;
    // std::cout << "instance._privateFoo: " << instance._privateFoo << std::endl;
    instance.publicBar();
    return 0;
}