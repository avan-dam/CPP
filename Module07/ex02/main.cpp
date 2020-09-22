/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 15:09:56 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/22 13:39:21 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// class Awesome
// {
// public:
// Awesome( void ) : _n( 42 ) { return; }
// int get( void ) const { return this->_n; }
// private:
// int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

int main(void)
{    
    // Array<Awesome>Awesomey(2);
    // std::cout << "size of Awesomey is " << Awesomey.size() <<std::endl;
    Array<int>Z;
    Array<int>A(2);
    A[0] = 21;
    A[1] = 42;
    Array<char>B(6);
    B[0] = 'a';
    B[1] = 'm';
    B[2] = 'B';
    B[3] = 'e';
    B[4] = 'R';
    B[5] = '!';
    try {
        std::cout << "B[6] gives us ";
        B[6] = '!';
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl; 
    }
    Array<int>C(A);
    Array<char>D = B;
    std::cout << "size of A is " << A.size() <<std::endl;
    try {
    std::cout << "Index 3 of A: " << A[3] << std::endl;    
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl; 
    }
    std::cout << "size of B is " << B.size() <<std::endl;
    try {
    std::cout << "Index 1 of B: " << B[1] << std::endl;    
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl; 
    }
    std::cout << "size of C is " << C.size() <<std::endl;
    try {
    std::cout << "Index 1 of C: " << C[1] << std::endl;    
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl; 
    }
    std::cout << "size of D is " << D.size() <<std::endl;
    try {
        std::cout << "Index 2 of D: " << D[2] << std::endl;    
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl; 
    }
    return 0;
}
