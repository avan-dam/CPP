/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 16:47:23 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/20 16:14:26 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::~Cure()
{
    // std::cout << "cure is dead" << std::endl;
    return ;
}

Cure::Cure() : AMateria("cure")
{
    // std::cout << "cure is alive" << std::endl;
    return ;
}

Cure::Cure( const Cure & src )
{
    *this = src;
    return ;
}

Cure &    Cure::operator=(  const Cure & rhs )
{
    if (this != & rhs)
    {
        this->_type = rhs._type;
        this->_xp = rhs._xp;
    }
    return *this;
}

Cure* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    this->_xp = this->_xp + 10;
    std::cout << "* heals "<< target.getName() << " wounds *" << std::endl;
    return ;     
}
