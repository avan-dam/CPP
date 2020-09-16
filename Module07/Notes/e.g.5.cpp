#include <stdio.h>

int max_int( int x, int y) { return(x>=y ? x : y);}
float max_float( float x, float y) { return(x>=y ? x : y);}
char max_char( char x, char y) { return(x>=y ? x : y);}

int Foo( int x ) { printf("long computing time\n"); return x;}

#define max(x, y) ( ((x)>=(y)) ? (x) : (y))

int main(void) {
    int a = 21;
    int b = 42;

    printf("max of %d and %d is %d\n", a, b, max_int(a,b));
    printf("max of %d and %d is %d\n", a, b, max(a,b));

    float c = -1.7f;
    float d = 4.2f;

    printf("max of %f and %f is %f\n", c, d, max_float(c,d));
    printf("max of %f and %f is %f\n", c, d, max(c,d));

    char e = 'a';
    char f = 'z';

    printf("max of %c and %c is %c\n", e, f, max_char(e,f));
    printf("max of %c and %c is %c\n", e, f, max(e,f));

    printf("max of %d and %d is %d\n", a, b, max_int(Foo(a),Foo(b)));
    //this one will print long computing time twice
    printf("max of %d and %d is %d\n", a, b, max(Foo(a),Foo(b)));
    // this one will print long computing time three times shouwing the problem 
    // with using macros here calls the function again
}