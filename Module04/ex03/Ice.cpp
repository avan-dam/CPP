/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: Amber <Amber@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/20 11:51:11 by Amber         #+#    #+#                 */
/*   Updated: 2020/09/04 13:05:04 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
    this->_xp = 0;
    // std::cout << "Ice is dead" << std::endl;
    return ;
}

Ice::~Ice()
{
    // std::cout << "Ice is dead" << std::endl;
    return ;
}

Ice::Ice( const Ice & src ) : AMateria()
{
    *this = src;
    return ;
}

Ice &    Ice::operator=(  const Ice & rhs )
{
    if (this != & rhs)
    {
        this->_type = rhs._type;
        this->_xp = rhs._xp;
    }
    return *this;
}

Ice* Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    this->_xp = this->_xp + 10;
    std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
    return ;
}
