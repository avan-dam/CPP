/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 17:46:43 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/21 20:49:22 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

        // Bureaucrat(std::string name, int grade);
		// ~Bureaucrat();
		// Bureaucrat( const Bureaucrat & src );
        // Bureaucrat &    operator=(  const Bureaucrat & rhs );
		// void			incrementGrade();
		// void			decrementGrade();

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
    // std::cout << "Assignment operator called" << std::endl;
    if ( this != &rhs )
    {
        // this->_name = rhs._name;
        this->_grade = rhs._grade;
    }
    return *this;
}
//     std::cout << "Before try \n"; 
//    try { 
//       std::cout << "Inside try \n"; 
//       if (grade < 1) 
//         { 
//         throw    Bureaucrat::GradeTooHighException();
//         }
//     if (grade > 150) 
//         { 
//         throw    Bureaucrat::GradeTooLowException();
//         }
//    }
//    catch(int grade)
//    {
//     std::cout << "Bureaucrat with grade " << this->_grade << " made " << std::endl;
//    }
//    return ;
Bureaucrat::Bureaucrat(std::string const &name, int grade)
{
    std::cout << "Before try \n"; 
   try { 
      std::cout << "Inside try \n"; 
      if (grade < 1) 
        { 
         throw grade; 
        }
    } 
    catch (int grade ) { 
         GradeTooHighException(); 
         return;
    } 
       try { 

    if (grade > 150) 
        { 
            throw grade; 
        }
    } 
    catch (int grade ) { 
            GradeTooLowException();
            return;
    } 
    try
    {
      if (grade < 1) 
        { 
         throw e; 
        }    
        }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    this->_name = name;
    this->_grade = grade;
    std::cout << "Bureaucrat with grade " << this->_grade << " made " << std::endl;
    return ;
}

std::string Bureaucrat::GradeTooHighException()
{
    return ("GradeTooHighException");
}

std::string Bureaucrat::GradeTooLowException()
{
    return ("GradeTooLowException");
}

std::string		Bureaucrat::getName() const 
{
    return (this->_name);
}

unsigned int	Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void			Bureaucrat::incrementGrade()
{
    if (this->_grade + 1 < 1)
        throw    Bureaucrat::GradeTooLowException();
    this->_grade++;  
}

void			Bureaucrat::decrementGrade()
{
    if (this->_grade - 1 < 1)
        throw    Bureaucrat::GradeTooHighException();
    this->_grade--;     
}

std::ostream &  operator<<(std::ostream & o, Bureaucrat const & i )
{
    o << i.getName() << ", Bureaucrat grade " << i.getGrade() << std::endl;
    return o;
}
