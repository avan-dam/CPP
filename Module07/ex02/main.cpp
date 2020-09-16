/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 15:09:56 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/16 15:41:07 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<int>A;
    Array<char>B(6);
    Array<int>C(A);
    Array<char>D = B;
    std::cout << "size of A is " << A.size() <<std::endl;
    std::cout << "Element 1 of A is " << A[1] << std::endl;
    std::cout << "size of B is " << B.size() <<std::endl;
    std::cout << "Element 1 of B is " << B[1] << std::endl;
    std::cout << "size of C is " << C.size() <<std::endl;
    std::cout << "Element 1 of C is " << C[1] << std::endl;
    std::cout << "size of D is " << D.size() <<std::endl;
    std::cout << "Element 1 of D is " << D[1] << std::endl;
}
