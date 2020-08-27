/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 17:46:43 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/24 15:46:13 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src )
{
    *this = src;
    return;
}

Bureaucrat::~Bureaucrat()
{
    return ;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name), _grade(grade)
{
    if (grade > 150)  
        throw GradeTooLowException(); 
    if (grade < 1) 
        throw GradeTooHighException(); 
}

Bureaucrat &    Bureaucrat::operator=( Bureaucrat const & rhs )
{
    if ( this != &rhs )
    {
        this->_name = rhs._name;
        this->_grade = rhs._grade;
    }
    return *this;
}

const char*             Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High Exception ";
}

const char*            Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too Low Exception";
}

const std::string		Bureaucrat::getName() const 
{
    return (this->_name);
}

int	                    Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void		            Bureaucrat::incrementGrade()
{
      if (this->_grade + 1 > 150) 
            throw GradeTooLowException(); 
    this->_grade++;  
}

void		            Bureaucrat::decrementGrade()
{
    if (this->_grade - 1 < 1)
        { 
            throw GradeTooHighException(); 
        }    
    this->_grade--;     
}

std::ostream &              operator<<(std::ostream & o, Bureaucrat const & i )
{
    o << i.getName() << ", Bureaucrat grade " << i.getGrade() << std::endl;
    return o;
}
