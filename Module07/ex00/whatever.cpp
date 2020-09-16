/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 11:46:45 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/16 13:01:24 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T>
T       max( T const & x, T const & y) {
    return ( (x > y) ? x : y);
}

template< typename T>
T       min( T const & x, T const & y) {
    return ( (x < y) ? x : y);
}

template< typename T>
void       swap( T & x, T & y) {
    T temp;
    
    temp = x;
    x = y;
    y = temp;
    return ;
}

void    theirmain(void)
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}

void    mymain(void)
{
    int a = 21;
    int b = 42;
    std::cout << "max of " << a << " and " << b << " is ";
    std:: cout << max( a, b) <<std::endl;
    std::cout << "min of " << a << " and " << b << " is ";
    std:: cout << min( a, b) <<std::endl;
    std::cout << "Before swap int a is: " << a << " and int b is: " << b << std::endl;
    swap(a, b);
    std::cout << "After swap int a is: " << a << " and int b is: " << b << std::endl;

    float c = -1.7f;
    float d = 4.2f;
    std::cout << "max of " << c << " and " << d << " is ";
    std:: cout << max( c, d) <<std::endl;
    std::cout << "min of " << c << " and " << d << " is ";
    std:: cout << min( c, d) <<std::endl;
    std::cout << "Before swap float c is: " << c << " and float d is: " << d << std::endl;
    swap(c, d);
    std::cout << "After swap float c is: " << c << " and float d is: " << d << std::endl;

    char e = 'a';
    char f = 'z';
    std::cout << "max of " << e << " and " << f << " is ";
    std:: cout << max( e, f) <<std::endl;
    std::cout << "min of " << e << " and " << f << " is ";
    std:: cout << min( e, f) <<std::endl;
    std::cout << "Before swap char e is: " << e << " and char f is: " << f << std::endl;
    swap(e, f);
    std::cout << "After swap char e is: " << e << " and char f is: " << f << std::endl;
}

int main(void) {
    mymain();
    std::cout << std::endl;
    theirmain();
    return 0;
}
