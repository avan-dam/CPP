/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 13:42:18 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/03 14:55:46 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(const std::string name)
{
    this->_name = name;
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
    return ;
}

Victim::Victim()
{
    return ;
}

Victim::Victim( const Victim & src )
{
    *this = src;
    return;
}

Victim &    Victim::operator=( const Victim & rhs )
{
    // std::cout << "Assignment operator called" << std::endl;
    if ( this != &rhs )
        this->_name = rhs._name;
    return *this;
}

Victim::~Victim()
{
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
    return ;
}

std::string     Victim::getName() const
{
    return (this->_name);
}

std::ostream &  operator<<(std::ostream & o, Victim const & i )
{
	o << "I'm " << i.getName() << " and I like otters!" << std::endl;
    return o;
}

void Victim::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
    return ;
}
