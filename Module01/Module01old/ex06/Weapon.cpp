/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 12:31:28 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/27 12:08:46 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string&   Weapon::getType() const
{
    return (this->_type);
}

void				Weapon::setType(std::string weapontype)
{
    this->_type = weapontype;
}

Weapon::Weapon(std::string weapontype)
{
    setType(weapontype);
}

Weapon::~Weapon( void )
{
}

Weapon::Weapon( void )
{
}
