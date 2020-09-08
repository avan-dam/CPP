#include <iostream>

class A {};
class B {};

class C {
    public:
             C(A const & ) {return;}
    explicit C(B const & ) {return;}
};

void f(C const & ) {
    return;
}

int main(void)
{
    f(A()); // implicit conversion ok
    // f(B()); // implicit conversion NOT OK, constructor is explicit
    return(0);
}
