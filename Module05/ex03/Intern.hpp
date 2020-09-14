/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 14:06:54 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/07 16:05:57 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <iostream>
#include "Form.hpp"

class Form;

class Intern
{
    public:
        const static std::string lookuptable[];

		Intern();
		~Intern();
		Intern( const Intern & src );
        Intern &    operator=(  const Intern & rhs );
        Form*   makeForm(std::string name, std::string target);
        class noFormException : public std::exception {
 	    public:
		    virtual const char* what() const throw();
  	    };
};

#endif
