/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 14:06:46 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/07 16:08:58 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

Intern::Intern()
{
    return ;
}

Intern::~Intern()
{
    return ;
}

Intern::Intern( const Intern & src )
{
    *this = src;
    return ;
}

Intern &    Intern::operator=(  const Intern & rhs )
{
    (void)rhs;
    return *this;
}

const std::string Intern::lookuptable [] = { "PresidentialPardonForm", "ShrubberyCreationForm", "RobotomyRequestForm" };

typedef Form* (*creatingforms) (std::string a);

Form* funcPresidentialPardonForm(std::string a){ PresidentialPardonForm *me = new PresidentialPardonForm(a); return me; }
Form* funcShrubberyCreationForm(std::string a){ ShrubberyCreationForm *me = new ShrubberyCreationForm(a); return me; }
Form* funcRobotomyRequestForm(std::string a){ RobotomyRequestForm *me = new RobotomyRequestForm(a); return me; }

Form*   Intern::makeForm(std::string name, std::string target)
{
    creatingforms functions[] = 
    {
        funcPresidentialPardonForm,
        funcShrubberyCreationForm,
        funcRobotomyRequestForm
    };
    for (int r = 0; r < 3; r++)
    if (name == this->lookuptable[r])
    {
        std::cout << "Intern creates " << name << std::endl;
        return (functions[r](target));
    }
    throw noFormException();
    return NULL; 
}

const char*            Intern::noFormException::what() const throw()
{
    return "No Form exception";
}
