/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 18:06:22 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/24 16:38:07 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try {
        Form A("this ", 0, 8);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;    
    } 
    Bureaucrat B("My B", 7);
    std::cout << B << std::endl;
    Form C("C", 8, 2);
    std::cout << C << std::endl;
    try {
    B.signForm(C);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;    
    } 
    std::cout << C << std::endl;
    try {
    B.signForm(C);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;    
    } 
        std::cout << C << std::endl;

    return (0);
}
