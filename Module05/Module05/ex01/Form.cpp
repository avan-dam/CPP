/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 15:30:35 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/24 01:14:23 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
    return ;
}

Form::Form(std::string const &name, int gradesignin, int gradeexecute)
{
   try { 
    if (gradesignin > 150) 
        { 
            throw GradeTooLowException(); 
        }
    if (gradesignin < 1) 
        { 
            throw GradeTooHighException(); 
        } 
    } 
    catch(GradeTooLowException& e)
    { 
        std::cerr << e.what() << '\n';
        std::cout << "Failed to make grade sign in as " << gradesignin << std::endl;
        return;
    } 
    catch(GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "Failed to make grade sign in as  " << gradesignin << std::endl;
        return ;
    }
    this->_name = name;
    this->_gradesignin = gradesignin;
    this->_gradeexecute = gradeexecute;
    this->_signed = false;
    std::cout << "Form called " << this->_name <<  " with signin grade " << this->_gradesignin << " and grade to execute " <<this->_gradeexecute<< " made " << std::endl;
    return ;
}

Form::~Form()
{
    return ;
}

Form::Form( Form const & src )
{
    *this = src;
    return ;
}

Form &    Form::operator=(  const Form & rhs )
{
    if ( this != &rhs )
    {
        this->_name = rhs._name;
        this->_gradesignin = rhs._gradesignin;
        this->_gradeexecute = rhs._gradeexecute;
        this->_signed = rhs._signed;
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
    if (B.getGrade() < this->_gradesignin)
    { 
        throw GradeTooLowException(); 
    }
    this->_signed = true;
}

std::ostream &  operator<<(std::ostream & o, Form const & i )
{
    o << i.getName() << ", Form grade sign in " << i.getGradeSignIn() 
    << " grade execute " << i.getGradeExecute() << " it is " << 
    i.getSigned() << " that the contract is signed" << std::endl;
    return o;
}
