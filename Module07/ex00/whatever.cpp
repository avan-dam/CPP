/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 11:46:45 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/16 12:06:52 by Amber         ########   odam.nl         */
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

int main(void) {
    int a = 21;
    int b = 42;
    std::cout << "max of " << a << " and " << b << " is ";
    std:: cout << max<int>( a, b) <<std::endl;
    std::cout << "min of " << a << " and " << b << " is ";
    std:: cout << min<int>( a, b) <<std::endl;
    std::cout << "Before swap int a is: " << a << " and int b is: " << b << std::endl;
    swap<int>(a, b);
    std::cout << "After swap int a is: " << a << " and int b is: " << b << std::endl;

    float c = -1.7f;
    float d = 4.2f;
    std::cout << "max of " << c << " and " << d << " is ";
    std:: cout << max<float>( c, d) <<std::endl;
    std::cout << "min of " << c << " and " << d << " is ";
    std:: cout << min<float>( c, d) <<std::endl;
    std::cout << "Before swap float c is: " << c << " and float d is: " << d << std::endl;
    swap<float>(c, d);
    std::cout << "After swap float c is: " << c << " and float d is: " << d << std::endl;

    char e = 'a';
    char f = 'z';
    std::cout << "max of " << e << " and " << f << " is ";
    std:: cout << max<char>( e, f) <<std::endl;
    std::cout << "min of " << e << " and " << f << " is ";
    std:: cout << min<char>( e, f) <<std::endl;
    std::cout << "Before swap char e is: " << e << " and char f is: " << f << std::endl;
    swap<char>(e, f);
    std::cout << "After swap char e is: " << e << " and char f is: " << f << std::endl;

}
