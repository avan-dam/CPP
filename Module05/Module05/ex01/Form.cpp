/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 15:30:35 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/25 03:37:17 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _gradesignin(1), _gradeexecute(1)
{
    return ;
}


Form::Form(std::string const &name, int gradesignin, int gradeexecute) : _name(name), _gradesignin(gradesignin), _gradeexecute(gradeexecute)
{
    if (gradesignin > 150 || gradeexecute > 150) 
            throw GradeTooLowException(); 
    if (gradesignin < 1 || gradeexecute < 1) 
            throw GradeTooHighException(); 
    this->_signed = false;
    return ;
}

Form::~Form()
{
    return ;
}

Form::Form( Form const & rhs ): _name(rhs.getName()), _gradesignin(rhs.getGradeSignIn()), _gradeexecute(rhs.getGradeExecute())
{
    if (rhs.getGradeSignIn() > 150 || rhs.getGradeExecute() > 150) 
        throw GradeTooLowException(); 
    if (rhs.getGradeSignIn() < 1 || rhs.getGradeExecute() < 1) 
        throw GradeTooHighException(); 
    this->_signed = false;
    *this = rhs;
    return ;
}

Form &    Form::operator=(  const Form & rhs )
{
    if ( this != &rhs )
    { 
        this->_signed = rhs.getSigned();
    }
    return *this;
}

const std::string		Form::getName() const
{
    return (this->_name);
}

int				Form::getGradeSignIn() const
{
    return (this->_gradesignin);
}

int				Form::getGradeExecute() const
{
    return (this->_gradeexecute);
}

bool              Form::getSigned() const
{
    return (this->_signed);
}

const char*             Form::GradeTooHighException::what() const throw()
{
    return "Grade Too High Exception ";
}

const char*            Form::GradeTooLowException::what() const throw()
{
    return "Grade Too Low Exception";
}

void                    Form::beSigned(Bureaucrat &B)
{
    if (B.getGrade() > this->_gradesignin)
        throw GradeTooLowException(); 
    this->_signed = true;
}

std::ostream &  operator<<(std::ostream & o, Form const & i )
{
    o << "Form called "<< i.getName() << " with sign in grade " << i.getGradeSignIn();
    o << " and execute grade " << i.getGradeExecute() << " the contract ";
    if (i.getSigned() == 0)
        o << "IS NOT";
    else
        o << "IS";
    o << " signed";
    return o;
}
