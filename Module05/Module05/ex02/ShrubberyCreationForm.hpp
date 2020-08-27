/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 16:52:20 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/25 03:44:56 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHURBBERYCREATIONFORM_HPP
# define SHURBBERYCREATIONFORM_HPP


#include "Form.hpp"
#include <fstream>
#include <iostream>

// class Form;

class ShrubberyCreationForm : public Form {
    private:
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(const std::string& target);
};

#endif
