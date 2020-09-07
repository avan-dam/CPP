/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/24 16:55:49 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/07 11:49:59 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form("ShrubberyCreationForm", 145, 137), _target(src._target)
{
    return ;
}

ShrubberyCreationForm &    ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
    Form::operator=(rhs);
    if ( this != &rhs )
    { 
        this->_target = rhs._target;
    }
    return *this;
}

const char*            ShrubberyCreationForm::filecantopen::what() const throw()
{
    return "file can not open";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
    return ;
}

void    ShrubberyCreationForm::action() const
{
    std::string newtaregt = this->_target;
    std::string newfile = newtaregt.append("_shrubbery");
	std::ofstream 		ofs(newfile.c_str());
  	if (!ofs.is_open())
	{
            throw filecantopen(); 
    }
    ofs << "                                                         ." << std::cout;
    ofs << "   ¨¨¨¨¨¨¨¨¨ ** " << std::cout;
    ofs << "   ¨¨¨¨¨¨¨¨¨*o* " << std::cout;
    ofs << "   ¨¨¨¨¨¨¨¨*♥*o* " << std::cout;
    ofs << "   ¨¨¨¨¨¨¨***o*** " << std::cout;
    ofs << "   ¨¨¨¨¨¨**o**♥*o* " << std::cout;
    ofs << "   ¨¨¨¨¨**♥**o**o** " << std::cout;
    ofs << "   ¨¨¨¨**o**♥***♥*o* " << std::cout;
    ofs << "   ¨¨¨*****♥*o**o**** " << std::cout;
    ofs << "   ¨¨**♥**o*****o**♥** " << std::cout;
    ofs << "   ¨******o*****♥**o*** " << std::cout;
    ofs << "   ****o***♥**o***o***♥ * " << std::cout;
    ofs << "   ¨¨¨¨¨____!_!____ " << std::cout;
    ofs << "   ¨¨¨¨¨_________/¨¨ " << std::cout;
    ofs.close();
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == false)
    {
        throw FormNotSignedException(); 
        return ;
    }
    if (executor.getGrade() > this->getGradeExecute())
    {
        throw GradeTooLowException(); 
        return ;
    }
    this->action();
}
