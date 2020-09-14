#include <iostream>
#include <typeinfo>
#include <exception>

class Parent {public: virtual ~Parent( void ) {} };
class Child1: public Parent {};
class Child2: public Parent {};

int main( void)
{
    Child1  a;// reference value

    Parent * b = &a; // implicit upcast 
    //explicit downcast
    Child1 * c = dynamic_cast<Child1 *>(b);
    if (c == NULL) {
        std::cout << "Conversion is NOT OK" << std::endl;
    }
    else {
        std::cout << "Conversion is OK" << std::endl;
    }
    //explicit downcast to reference - unreference my parent
    // will compile as a dynamic cast but at runtime it will fail as essentially
    //trying to get a Child1 to Child2 with parent inbetween 
    try {
        Child2 & d = dynamic_cast<Child2 &>(*b);
        std::cout << "Conversion is ok" << ::std::endl;
    }
    catch ( std::bad_cast &bc) {
        std::cout << "Conversion is NOT OK" << bc.what() << std::endl;
        return 0;
    }
    return 0;
}
//compile without -Wall so that you dont get unused variable exceptions

