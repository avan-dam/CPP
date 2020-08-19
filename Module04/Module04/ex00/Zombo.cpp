/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombo.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 15:33:39 by Amber         #+#    #+#                 */
/*   Updated: 2020/08/14 15:34:47 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "Zombo.hpp"
#include "Victim.hpp"

std::string Zombo::getName() const
{
    return (this->_name);
}

void Zombo::getPolymorphed() const 
{
    std::cout << this->getName() << " is a zombo turning into YOU WATCH OUT" <<std::endl;
}

Zombo::Zombo(const std::string name) : Victim(name)
{
    std::cout << "Zog zog." <<std::endl;
}

Zombo::~Zombo()
{
    std::cout << "Bleuark..." << std::endl;
}

Zombo::Zombo( const Zombo & src )
{
    *this = src;
    return;
}

Zombo &    Zombo::operator=( const Zombo & rhs )
{
    std::cout << "Assignment operator called" << std::endl;
    if ( this != &rhs )
        this->_name = rhs._name;
    return *this;
}

