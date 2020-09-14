#include <stdio.h>

int main(void)
{
    int a = 42;
    int const * b = &a; // implicit type qualifier
    int const * c = (int const *)&a; // explicit type qualifier - moving up all fine

    int const * d = &a;//implicit promotoion -> ok
    // int * e = d; // implicit demotion ->hello no
    int * f = (int *)d;// explicit demotion -> ok i will obey
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    // e = 0;
    f = 0;
    return (0);
}
