#include <iostream>

class Foo{
    public:
        Foo(float const v) : _v(v) {}
        float getv(void) {return this->_v;}
        operator float() {return this->_v;}
        operator int() {return static_cast<int>(this->_v);}
    private:
        float   _v;
};

int main(void)
{
    Foo a(420.420f);
    float b = a;
    int c = a;
    std::cout << "a is "<< a.getv() << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;

    return (0);
}

// returns:
// a is 420.42
// b is 420.42
// c is 420