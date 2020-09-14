#include <iostream>
#include "e.g.3.tpp"

int main( void) {
    Vertex< int >   v1(12, 23, 34);
    Vertex<>        v2(12, 23, 34); // as type not instantiated default float type will be used
    std::cout << v1 << std:: endl;
    std::cout << v2 << std:: endl;
    return (0);
}