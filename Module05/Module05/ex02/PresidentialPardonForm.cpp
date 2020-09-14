/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 17:04:03 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/12 12:20:14 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Form("PresidentialPardonForm", 25, 5), _target(src._target)
{
    return ;
}

PresidentialPardonForm &    PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
    Form::operator=(rhs);
    if ( this != &rhs )
    { 
        this->_target = rhs._target;
    }
    return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
    return ;
}

void    PresidentialPardonForm::action() const
{
    std::cout << "Tells us " << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;

}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
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
