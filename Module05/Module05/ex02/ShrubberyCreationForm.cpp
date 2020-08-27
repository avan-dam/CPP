/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 16:55:49 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/25 03:53:05 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("invalid", 0, 0)
{
    if (this->getGradeSignIn() > 150 || this->getGradeExecute() > 150) 
        throw GradeTooLowException(); 
    if (this->getGradeSignIn() < 1 || this->getGradeExecute() < 1) 
            throw GradeTooHighException(); 
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form(target, 145, 137)
{
	std::ofstream 		ofs(target);
  	if (! ofs.is_open())
	{
        std::cout << "File not there" << std::endl;
    }
		ofs << "this in my file" << std::endl;
    ofs.close();
}

