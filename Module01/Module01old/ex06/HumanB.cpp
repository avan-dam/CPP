/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 12:31:36 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/27 12:09:59 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->_weapon = 0;
}

HumanB::~HumanB()
{
}

void    HumanB::attack()
{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weaponB)
{
    this->_weapon = &weaponB;
}
