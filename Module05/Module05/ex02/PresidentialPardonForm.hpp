/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 17:03:56 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/09 14:26:25 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM 
#define PRESIDENTIALPARDONFORM

#include "Form.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>

class PresidentialPardonForm : public Form {
    private:
        PresidentialPardonForm();
        std::string _target;
    public:
        PresidentialPardonForm(const std::string& target);
        ~PresidentialPardonForm();
        PresidentialPardonForm( const PresidentialPardonForm & src );
        PresidentialPardonForm &    operator=(  const PresidentialPardonForm & rhs );
        void execute(Bureaucrat const & executor) const;
        void action() const;
};

#endif
