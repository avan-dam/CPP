#include <iostream>
#include "Sample1.class.hpp"
#include "Sample2.class.hpp"

int main() {
    
    poonyonheap();
        {
            Sample1 instance1( 'a', 42, 4.2);
        }
    ponyonstack()    
    {
        Sample2 new instance2( 'z', 13, 1.34);
        <<instance2.name << 
        delete instance2;
        
    }
    return 0;
}