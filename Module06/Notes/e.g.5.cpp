#include <iostream>

class Parent {};
class Child1: public Parent {};
class Child2: public Parent {};

class Unrelated {};

int main( void)
{
    Child1  a;// reference value

    Parent * b = &a; // implicit upcast ->ok
    // Child1 * c = b;//implicit downcat -> Hello NO
    Child2 * d = static_cast<Child2 *>(b); // explicit downcast-> ok I obey
    // Unrelated * e = static_cast<Child2 *>(&a);  // explicit conversion -> NO
    (void)a;
    (void)b;
    // (void)c;
    (void)d;
    // (void)e;
    return (0);
}