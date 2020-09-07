/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 17:04:10 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/07 11:42:13 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    return ;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : Form("RobotomyRequestForm", 72, 45), _target(src._target)
{
    return ;
}

RobotomyRequestForm &    RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
    Form::operator=(rhs);
    if ( this != &rhs )
    { 
        this->_target = rhs._target;
    }
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
    return ;
}

void    RobotomyRequestForm::action() const
{
    int ran = rand();
    int nb = (ran % 2);
    if (nb == 0)
    {
        std::cout << "Makes some drilling noises, and tell us that ";
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    }
    if (nb == 1)
    {
        std::cout << "FAILURE in me RobotomyRequestForm cos of randomness" << std::endl;
    }
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == false)
    {
        throw FormNotSignedException(); 
        return ;
    }
    if (executor.getGrade() > this->getGradeExecute())
    {
        throw GradeTooLowException(); 
        return ;
    }
    this->action();
}
