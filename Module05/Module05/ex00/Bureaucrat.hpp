/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/21 17:27:15 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/21 20:43:12 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>

class Bureaucrat
{
    private:
        std::string	_name;
        unsigned int    	_grade;
		Bureaucrat();
	public:
		Bureaucrat(std::string const &name, int grade);
		~Bureaucrat();
		Bureaucrat( const Bureaucrat & src );
        Bureaucrat &    operator=(  const Bureaucrat & rhs );
		std::string		getName() const;
		unsigned int	getGrade() const;
		void			incrementGrade();
		void			decrementGrade();
		std::string  	GradeTooHighException();
		std::string  	GradeTooLowException();
};

std::ostream &  operator<<(std::ostream & o, Bureaucrat const & i );

#endif
