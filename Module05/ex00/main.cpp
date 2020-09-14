/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 18:06:22 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/09/04 13:43:24 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try {
            Bureaucrat A("A", 151);
            std::cout << A << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }   
    try {
            Bureaucrat B("B", 0);
            std::cout << B << std::endl;
    }
    catch (std::exception& e)
    {        
        std::cerr << e.what() << std::endl;
    }    
    try 
    {
        Bureaucrat C("C", 5);
        std::cout << C << std::endl;
    }
    catch (std::exception& e)
    {   
        std::cerr << e.what() << std::endl;
    }   
    Bureaucrat D("D", 1);
    std::cout << D << std::endl;
    try {
        D.decrementGrade();
        std::cout << D << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try {
        D.incrementGrade();
        std::cout << D << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;    
    }   
    try {
        D.incrementGrade();
        std::cout << D << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;    
    }    
    return (0);
}
