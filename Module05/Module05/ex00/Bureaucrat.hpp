/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 17:27:15 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/24 00:11:54 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <exception>

class Bureaucrat 
{
    private:
        std::string		_name;
        int    			_grade;
		Bureaucrat();
	public:
		Bureaucrat(std::string const &name, int grade);
		~Bureaucrat();
		Bureaucrat( const Bureaucrat & src );
        Bureaucrat &    operator=(  const Bureaucrat & rhs );
		const std::string		getName() const;
		int				getGrade() const;
		void			incrementGrade();
		void			decrementGrade();
		class GradeTooHighException : public std::exception {
 		public:
			virtual const char* what() const throw();
  		};
  		class GradeTooLowException : public std::exception {
 		public:
			virtual const char* what() const throw();
  		};
};

std::ostream &  operator<<(std::ostream & o, Bureaucrat const & i );

#endif
