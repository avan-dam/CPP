#include <stdio.h>

int main(void)
{
    float a = 420.042f;
    void * b = &a;
    void * c = (void *) &a;

    void * d = &a; // implicit promotion -> ok
    int * e = d; // implicit demotion -> hazadous (gaining precision with my types)
    int * f = (int *)d;// implicit demotion -> ok I obey

    printf("%p, %f\n", &a, a);
    printf("%p\n", b);
    printf("%p\n", c);

    printf("%p\n", d);
    printf("%p, %d\n", e, *e);
    printf("%p, %d\n", f, *f);
}

// gives this result:
// 0x7ffee46138cc, 420.041992
// 0x7ffee46138cc
// 0x7ffee46138cc
// 0x7ffee46138cc
// 0x7ffee46138cc, 1137837408
// 0x7ffee46138cc, 1137837408