/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 18:06:22 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/09/07 16:09:12 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Intern I;
    Form *f = I.makeForm("PresidentialPardonForm", "that");
    std::cout << *f << std::endl;
    Form *g = I.makeForm("RobotomyRequestForm", "that");
    std::cout << *g << std::endl;
    try {
        Form *h = I.makeForm("noone", "that");
        std::cout << *h << std::endl;

    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;    
    } 
    return (0);
}
