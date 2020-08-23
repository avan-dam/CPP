/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 15:29:53 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/23 15:44:32 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
    private:
        std::string _name;
        bool        _signed;
        int         _gradesignin;
        int         _gradeexecute;
		Form();
	public:
        // Grade to sign in 
		// Form(std::string const &name, int gradesignin, int gradeexecute);
		~Form();
		Form( const Form & src );
        Form &    operator=(  const Form & rhs );
	    const std::string		getName() const;
	    const int				getGradeSignIn() const;
	    const int				getGradeExecute() const;
        const bool              getSiigned() const;
        void                    beSigned(Bureaucrat &B);
	    class GradeTooHighException : public std::exception {
 	    public:
		    virtual const char* what() const throw();
  	    } GradeTooHighException;
  	    class GradeTooLowException : public std::exception {
 	    public:
		    virtual const char* what() const throw();
  	    } GradeTooLowException;    
};

std::ostream &  operator<<(std::ostream & o, Form const & i );

#endif