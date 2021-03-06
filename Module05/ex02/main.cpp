/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 18:06:22 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/09/09 14:26:57 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    Bureaucrat B("me" , 3);
    PresidentialPardonForm P("targetLy");
    std::cerr << P << std::endl;    
    try {
        P.execute(B);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;    
    } 
    std::cerr << P << std::endl;    
    std::cerr << B << std::endl;    
    try {
        B.signForm(P);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;   
    } 
    std::cerr << P << std::endl;    
    try {
        P.execute(B);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;    
    } 
    RobotomyRequestForm R("Robotme");
    std::cerr << R << std::endl;    
    ShrubberyCreationForm S("Ser");
    std::cerr << S << std::endl;    
    Bureaucrat A("beeee" , 3);
    try {
        A.executeForm(S);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;    
    }
    return (0);
}
