/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 13:42:08 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/03 12:08:36 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Victim.hpp"

std::string Peon::getName() const
{
    return (this->_name);
}

void Peon::getPolymorphed() const 
{
    std::cout << this->getName() << " has been turned into a pink pony!" <<std::endl;
}

Peon::Peon(const std::string name) : Victim(name)
{
    std::cout << "Zog zog." <<std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

Peon::Peon( const Peon & src ) : Victim()
{
    *this = src;
    return;
}

Peon &    Peon::operator=( const Peon & rhs )
{
    std::cout << "Assignment operator called" << std::endl;
    if ( this != &rhs )
        this->_name = rhs._name;
    return *this;
}

