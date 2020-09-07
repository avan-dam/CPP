/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 17:04:06 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/07 11:34:05 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM 

#include "Form.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>

class RobotomyRequestForm : public Form {
    private:
        RobotomyRequestForm();
        std::string _target;
    public:
        RobotomyRequestForm(const std::string& target);
        ~RobotomyRequestForm();
        RobotomyRequestForm( const RobotomyRequestForm & src );
        RobotomyRequestForm &    operator=(  const RobotomyRequestForm & rhs );
        void execute(Bureaucrat const & executor) const;

        void    action() const;
};

#endif
