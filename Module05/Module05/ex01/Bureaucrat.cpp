/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 17:46:43 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/24 00:35:40 by Amber         ########   odam.nl         */
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

Bureaucrat::Bureaucrat(std::string const &name, int grade)
{
    this->_grade = 0;
    this->_name = "";
   try { 
    if (grade > 150) 
        { 
            throw GradeTooLowException(); 
        }
    if (grade < 1) 
        { 
            throw GradeTooHighException(); 
        } 
    } 
    catch(GradeTooLowException& e)
    { 
        std::cerr << e.what() << '\n';
        std::cout << "Failed to make grade " << grade << std::endl;
        return;
    } 
    catch(GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "Failed to make grade " << grade << std::endl;
        return ;
    }
    this->_name = name;
    this->_grade = grade;
    std::cout << "Bureaucrat called " <<this->_name <<  " with grade " << this->_grade << " made " << std::endl;
    return ;
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
    try
    {
      if (this->_grade + 1 > 150) 
        { 
            throw GradeTooLowException(); 
        }    
    }
    catch(GradeTooLowException& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "Failed to make decrement grade from " <<this->_grade << " as grade too low" << std::endl;
        return ;
    }
    this->_grade++;  
}

void		            Bureaucrat::decrementGrade()
{
    try
    {
    if (this->_grade - 1 < 1)
        { 
            throw GradeTooHighException(); 
        }    
    }
    catch(GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "Failed to make decrement grade from " <<this->_grade << " as grade too high" << std::endl;
        return ;
    }
    this->_grade--;     
}

std::ostream &              operator<<(std::ostream & o, Bureaucrat const & i )
{
    o << i.getName() << ", Bureaucrat grade " << i.getGrade() << std::endl;
    return o;
}
