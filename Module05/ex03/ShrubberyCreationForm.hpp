/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 16:52:20 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/07 11:35:13 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHURBBERYCREATIONFORM_HPP
# define SHURBBERYCREATIONFORM_HPP


#include "Form.hpp"
#include <fstream>
#include <iostream>
#include <string>

class ShrubberyCreationForm : public Form {
    private:
        ShrubberyCreationForm();
        std::string _target;
    public:
        ShrubberyCreationForm(const std::string& target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm( const ShrubberyCreationForm & src );
        ShrubberyCreationForm &    operator=(  const ShrubberyCreationForm & rhs );
        void execute(Bureaucrat const & executor) const;

        void    action() const;
        class filecantopen : public std::exception {
 		public:
			virtual const char* what() const throw();
  		};
};

#endif
