/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 16:36:31 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/09/03 12:46:33 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
    this->_xp = 0;
    return ;
}

AMateria::AMateria(std::string const & type)
{
    this->_xp = 0;
    this->_type = type;
    return ;
}

AMateria::AMateria( const AMateria & src )
{
    *this = src;
    return ;
}

AMateria &    AMateria::operator=(  const AMateria & rhs )
{
    if (this != & rhs)
    {
        this->_type = rhs._type;
        this->_xp = rhs._xp;
    }
    return *this;
}

AMateria::~AMateria()
{
    return ;
}

std::string const & AMateria::getType() const
{
    return this->_type;
}

unsigned int AMateria::getXP() const
{
    return this->_xp;
}

void    AMateria::use(ICharacter& target)
{
    this->_xp = this->_xp + 10;
    if  (this->_type == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
    if (this->_type == "cure")
        std::cout << "* heals "<< target.getName() << " wounds *" << std::endl;
    return ;
}
