/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 15:09:56 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/17 08:11:29 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
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
