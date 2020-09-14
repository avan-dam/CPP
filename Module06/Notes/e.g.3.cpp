#include <iostream>

class Parent {};
class Child1: public Parent {};
class Child2: public Parent {};

int main( void)
{
    Child1  a;// reference value

    Parent * b = &a; // implicit 'reinterpration' cast
    Parent * c = (Parent *)&a;//explicit 'reinterprtation' cast
    Parent * d = &a; // implicit upcast -> ok
    // Child1 * e = d; // implicit downcast -> hellNO
    Child2* f =(Child2 *)d; // explicit downcast -> ok but really?
    (void)a;
    (void)b;
    (void)c;
    (void)d;
    // (void)e;
    (void)f;
}