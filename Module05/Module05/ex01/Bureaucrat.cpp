/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 17:46:43 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/23 15:35:14 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Bureaucrat::~Bureaucrat()
{
    std::cout <<"destructed " << this->_name << " with grade " << this->_grade << std::endl;
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

Bureaucrat::Bureaucrat(std::string const &name, int grade)
{
   try { 
    if (grade > 150) 
        { 
            throw GradeTooLowException; 
        }
    } 
    catch(const std::exception& e)
    { 
        std::cerr << e.what() << '\n';
            return;
    } 
    try
    {
      if (grade < 1) 
        { 
         throw GradeTooHighException; 
        }    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return ;
    }
    
    this->_name = name;
    this->_grade = grade;
    std::cout << "Bureaucrat with grade " << this->_grade << " made " << std::endl;
    return ;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High Exception ";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too Low Exception";
}

const std::string		Bureaucrat::getName() const 
{
    return (this->_name);
}

int	        Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void		Bureaucrat::incrementGrade()
{
    try
    {
      if (this->_grade + 1 > 150) 
        { 
         throw GradeTooLowException; 
        }    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return ;
    }
    this->_grade++;  
}

void		Bureaucrat::decrementGrade()
{
        try
    {
    if (this->_grade - 1 < 1)
        { 
         throw GradeTooHighException; 
        }    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return ;
    }
    this->_grade--;     
}

std::ostream &  operator<<(std::ostream & o, Bureaucrat const & i )
{
    o << i.getName() << ", Bureaucrat grade " << i.getGrade() << std::endl;
    return o;
}
