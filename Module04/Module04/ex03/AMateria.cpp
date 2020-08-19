/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 16:36:31 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/19 18:10:10 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria()
{
    this->_xp = 0;
    return ;
}

AMateria::AMateria(std::string const & type)
// send type as lowercasee of the Ice and 
{
    this->_xp = 0;
    this->_type = type;
    if (type == "Ice")
        this->_name = "ice";
    if (type == "Cure")
        this->_name = "cure";
    return ;
}

AMateria::AMateria( const AMateria & src )
{
    *this = src;
    return ;
}

// WHILE ASSIGNING A MATERia TO ANOTHER, COPYING DOESNT MAKKE SENSE
// WHAT DOES tHIS MEAN
AMateria::AMateria &    AMateria::operator=(  const AMateria & rhs )
{
    if (this != & rhs)
    {
        this->_type = rhs._type;
        this->_name = rhs._name;
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

void AMateria::use(ICharacter& target)
{
    this->_xp = this->_xp + 10;
    if  (this->_type == "Ice")
        std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
    if (this->_type == "Cure")
        std::cout << "* heals "<< target.getName() << " wounds *" << std::endl;
    return ;
}
