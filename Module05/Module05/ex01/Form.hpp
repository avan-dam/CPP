/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/23 15:29:53 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/24 01:13:09 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string _name;
        bool        _signed;
        int         _gradesignin;
        int         _gradeexecute;
		Form();
	public:
		Form(std::string const &name, int gradesignin, int gradeexecute);
		~Form();
		Form( const Form & src );
        Form &    operator=(  const Form & rhs );
	    const std::string		getName() const;
	     int				getGradeSignIn() const;
	     int				getGradeExecute() const;
         bool              getSigned() const;
        void                    beSigned(Bureaucrat &B);
        class GradeTooHighException : public std::exception {
 		public:
			virtual const char* what() const throw();
  		};
  		class GradeTooLowException : public std::exception {
 		public:
			virtual const char* what() const throw();
  		};  
};

std::ostream &  operator<<(std::ostream & o, Form const & i );

#endif
